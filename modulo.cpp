
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <map>
#include <unordered_map>
#include <numeric>
#include <cmath>
#include <chrono>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

template <typename T>
T inverse(T a, T m) {
    T u = 0, v = 1;
    while (a != 0) {
        T t = m / a;
        m -= t * a; 
        swap(a, m);
        u -= t * v; 
        swap(u, v);
    }
    assert(m == 1);
    return u;
}

template <typename T>
class Modular {
public:
    using Type = typename decay<decltype(T::value)>::type;

    constexpr Modular() : value() {}
    
    template <typename U>
    Modular(const U& x) {
        value = normalize(x);
    }

    template <typename U>
    static Type normalize(const U& x) {
        Type v;
        if (-mod() <= x && x < mod()) 
            v = static_cast<Type>(x);
        else 
            v = static_cast<Type>(x % mod());
        if (v < 0) 
            v += mod();
        return v;
    }

    const Type& operator()() const { return value; }
    
    template <typename U>
    explicit operator U() const { return static_cast<U>(value); }

    constexpr static Type mod() { return T::value; }

    Modular& operator+=(const Modular& other) { 
        if ((value += other.value) >= mod()) 
            value -= mod(); 
        return *this; 
    }

    Modular& operator-=(const Modular& other) { 
        if ((value -= other.value) < 0) 
            value += mod(); 
        return *this; 
    }

    template <typename U>
    Modular& operator+=(const U& other) { 
        return *this += Modular(other); 
    }

    template <typename U>
    Modular& operator-=(const U& other) { 
        return *this -= Modular(other); 
    }

    Modular& operator++() { 
        return *this += 1; 
    }

    Modular& operator--() { 
        return *this -= 1; 
    }

    Modular operator++(int) { 
        Modular result(*this); 
        *this += 1; 
        return result; 
    }

    Modular operator--(int) { 
        Modular result(*this); 
        *this -= 1; 
        return result; 
    }

    Modular operator-() const { 
        return Modular(-value); 
    }

    template <typename U = T>
    typename enable_if<is_same<typename Modular<U>::Type, int>::value, Modular>::type& operator*=(const Modular& rhs) {
        value = normalize(static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value));
        return *this;
    }

    template <typename U = T>
    typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) {
        long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
        value = normalize(value * rhs.value - q * mod());
        return *this;
    }

    template <typename U = T>
    typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) {
        value = normalize(value * rhs.value);
        return *this;
    }

    Modular& operator/=(const Modular& other) { 
        return *this *= Modular(inverse(other.value, mod())); 
    }

    friend const Type& abs(const Modular& x) { 
        return x.value; 
    }

    template <typename U>
    friend bool operator==(const Modular<U>& lhs, const Modular<U>& rhs);

    template <typename U>
    friend bool operator<(const Modular<U>& lhs, const Modular<U>& rhs);

    template <typename V, typename U>
    friend V& operator>>(V& stream, Modular<U>& number);

private:
    Type value;
};

template <typename T>
bool operator==(const Modular<T>& lhs, const Modular<T>& rhs) { 
    return lhs.value == rhs.value; 
}

template <typename T, typename U> 
bool operator==(const Modular<T>& lhs, U rhs) { 
    return lhs == Modular<T>(rhs); 
}

template <typename T, typename U> 
bool operator==(U lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) == rhs; 
}

template <typename T> 
bool operator!=(const Modular<T>& lhs, const Modular<T>& rhs) { 
    return !(lhs == rhs); 
}

template <typename T, typename U> 
bool operator!=(const Modular<T>& lhs, U rhs) { 
    return !(lhs == rhs); 
}

template <typename T, typename U> 
bool operator!=(U lhs, const Modular<T>& rhs) { 
    return !(lhs == rhs); 
}

template <typename T> 
bool operator<(const Modular<T>& lhs, const Modular<T>& rhs) { 
    return lhs.value < rhs.value; 
}

template <typename T> 
Modular<T> operator+(const Modular<T>& lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) += rhs; 
}

template <typename T, typename U> 
Modular<T> operator+(const Modular<T>& lhs, U rhs) { 
    return Modular<T>(lhs) += rhs; 
}

template <typename T, typename U> 
Modular<T> operator+(U lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) += rhs; 
}

template <typename T> 
Modular<T> operator-(const Modular<T>& lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) -= rhs; 
}

template <typename T, typename U> 
Modular<T> operator-(const Modular<T>& lhs, U rhs) { 
    return Modular<T>(lhs) -= rhs; 
}

template <typename T, typename U> 
Modular<T> operator-(U lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) -= rhs; 
}

template <typename T> 
Modular<T> operator*(const Modular<T>& lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) *= rhs; 
}

template <typename T, typename U> 
Modular<T> operator*(const Modular<T>& lhs, U rhs) { 
    return Modular<T>(lhs) *= rhs; 
}

template <typename T, typename U> 
Modular<T> operator*(U lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) *= rhs; 
}

template <typename T> 
Modular<T> operator/(const Modular<T>& lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) /= rhs; 
}

template <typename T, typename U> 
Modular<T> operator/(const Modular<T>& lhs, U rhs) { 
    return Modular<T>(lhs) /= rhs; 
}

template <typename T, typename U> 
Modular<T> operator/(U lhs, const Modular<T>& rhs) { 
    return Modular<T>(lhs) /= rhs; 
}

template<typename T, typename U>
Modular<T> power(const Modular<T>& a, const U& b) {
    assert(b >= 0);
    Modular<T> x = a, res = 1;
    U p = b;
    while (p > 0) {
        if (p & 1) 
            res *= x;
        x *= x;
        p >>= 1;
    }
    return res;
}

template <typename T>
bool IsZero(const Modular<T>& number) { 
    return number() == 0; 
}

template <typename T>
string to_string(const Modular<T>& number) { 
    return to_string(number()); 
}

template <typename U, typename T>
U& operator<<(U& stream, const Modular<T>& number) { 
    return stream << number(); 
}

template <typename U, typename T>
U& operator>>(U& stream, Modular<T>& number) {
    typename common_type<typename Modular<T>::Type, long long>::type x;
    stream >> x;
    number.value = Modular<T>::normalize(x);
    return stream;
}

constexpr int md = 998244353;
using Mint = Modular<std::integral_constant<decay<decltype(md)>::type, md>>;

vector<Mint> fact(1, 1);
vector<Mint> inv_fact(1, 1);

Mint C(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    while ((int) fact.size() < n + 1) {
        fact.push_back(fact.back() * (int) fact.size());
        inv_fact.push_back(1 / fact.back());
    }
    return fact[n] * inv_fact[k] * inv_fact[n - k];
}

template <typename T>
class NTT {
public:
    using Type = typename decay<decltype(T::value)>::type;
    static Type md;
    static Modular<T> root;
    static int base;
    static int max_base;
    static vector<Modular<T>> roots;
    static vector<int> rev;

    static void clear() {
        root = 0;
        base = 0;
        max_base = 0;
        roots.clear();
        rev.clear();
    }

    static void init() {
        md = T::value;
        assert(md >= 3 && md % 2 == 1);
        Type tmp = md - 1;
        base = 0;
        while (tmp % 2 == 0) {
            tmp >>= 1;
            ++base;
        }
        root = 2;
        while (power(root, (md - 1) >> 1) == 1) {
            ++root.value;
        }
        assert(power(root, md - 1) == 1);
        root = power(root, (md - 1) >> base);
        max_base = base;
    }

    static void fft(vector<Modular<T>>& a) {
        int n = (int) a.size();
        int zeros = __builtin_ctz(n);
        ensure_base(zeros);
        int shift = base - zeros;
        for (int i = 0; i < n; ++i) {
            if (i < (rev[i] >> shift)) {
                swap(a[i], a[rev[i] >> shift]);
            }
        }
        for (int k = 1; k < n; k <<= 1) {
            Modular<T> dw = root ^ (n / (k << 1));
            for (int i = 0; i < n; i += k << 1) {
                Modular<T> w = 1;
                for (int j = 0; j < k; ++j) {
                    Modular<T> x = a[i + j];
                    Modular<T> y = a[i + j + k] * w;
                    a[i + j] = x + y;
                    a[i + j + k] = x - y;
                    w *= dw;
                }
            }
        }
    }

    static void multiply(vector<Modular<T>>& a, const vector<Modular<T>>& b) {
        int need = (int) a.size() + (int) b.size() - 1;
        int nbase = 0;
        while ((1 << nbase) < need) {
            ++nbase;
        }
        ensure_base(nbase);
        int size = 1 << nbase;
        a.resize(size);
        b.resize(size);
        if (size > (int) rev.size()) {
            rev.resize(size);
            for (int i = 0; i < size; ++i) {
                rev[i] = (rev[i >> 1] >> 1) | ((i & 1) << (nbase - 1));
            }
        }
        fft(a);
        fft(b);
        Modular<T> inv_fft_size = 1 / static_cast<Type>(size);
        for (int i = 0; i < size; ++i) {
            a[i] *= b[i] * inv_fft_size;
        }
        reverse(a.begin() + 1, a.end());
        fft(a);
        a.resize(need);
    }

    static void ensure_base(int nbase) {
        if (nbase <= max_base) {
            return;
        }
        assert(nbase <= 21);
        roots.resize(1 << nbase);
        for (int i = 0; i < (1 << nbase); ++i) {
            roots[i] = i & 1 ? power(root, md - 1 - (i >> 1)) : 1;
        }
        max_base = nbase;
    }
};

template <typename T> typename NTT<T>::Type NTT<T>::md;
template <typename T> Modular<T> NTT<T>::root;
template <typename T> int NTT<T>::base;
template <typename T> int NTT<T>::max_base;
template <typename T> vector<Modular<T>> NTT<T>::roots;
template <typename T> vector<int> NTT<T>::rev;

constexpr int md = 998244353;
using Mint = Modular<std::integral_constant<decay<decltype(md)>::type, md>>;

