//#define PBDS
//#define POINT
//#define ROPE
//#define XTRASIZE
//#define CUSTOM_NEW

#ifndef BZ
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("no-stack-protector")
//#pragma GCC target ("tune=native")
//#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
//#pragma GCC optimize ("conserve-stack")
//#pragma GCC optimize ("no-stack-limit")
//#pragma clang optimize on
//#pragma clang loop unroll(enable)
#endif

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using str = string;
using pll = pair<ll, ll>;
template <typename T>
using HeapMin = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using HeapMax = priority_queue<T, vector<T>, less<T>>;

#ifdef POINT
using c_type = ll;
using Point = complex<c_type>;
#define X real
#define Y imag
istream& operator >> (istream& cin, point& p) {
    c_type x, y;
    cin >> x >> y;
    p.X(x);
    p.Y(y);
    return cin;
}
#endif

#ifdef CUSTOM_NEW
char buf_[10000000];
size_t buf_ptr_ = 0;
void* operator new(size_t count) {
    auto ans = (buf_ + buf_ptr_);
    buf_ptr_ += count;
    return ans;
}

// void operator delete(void* ptr, size_t n) noexcept {}
void operator delete(void*) noexcept {}

void* operator new[](size_t count) {
    auto ans = (buf_ + buf_ptr_);
    buf_ptr_ += count;
    return ans;
}

void operator delete[](void*) noexcept {}
#endif

#ifdef XTRASIZE
using xld = __float128;
using xll = __int128;
ostream& operator << (ostream& cout, xll v) {
    string ans;
    if (v == 0) ans = "0";
    bool less = v < 0;
    if (less) v *= -1;
    while (v) {
        ans.push_back('0' + v % 10);
        v /= 10;
    }
    if (less) ans.push_back('-');
    reverse(ans.begin(), ans.end());
    cout << ans;
    return cout;
}

istream& operator >> (istream& cin, xll& v) {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    bool less = s.back() == '-';
    if (less) s.pop_back();
    v = 0;
    while (!s.empty()) {
        v *= 10;
        v += s.back() - '0';
        s.pop_back();
    }
    if (less) v *= -1;
    return cin;
}
#endif

#ifdef ROPE
#include <ext/rope>
using namespace __gnu_cxx;
#endif

#ifdef PBDS
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
//using namespace __gnu_pbds::detail;
template <typename T, typename V = null_type>
using IndexedTree = tree<T, V, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#endif

constexpr ll INF = 0x7fffffffffffffff;
constexpr ll BASE =  1000000007;
// 3 * 10**9 + 19
// 998244353: rev = pow(n, BASE - 2) - root=15311432 - root_pw = 1LL << 23

template <class T>
constexpr T Max() {
    return std::numeric_limits<T>::max();
}

template <class T>
constexpr T Min() {
    return std::numeric_limits<T>::min();
}

#ifdef Debug
#define LOG(expr) cerr << "[" << __FILE__ << ':' << __LINE__ << "] " << expr << '\n';
#define LOG_V(v) LOG( #v << " " << v );
#else
#define LOG_V(v) ;
#define LOG(expr) if constexpr (false) std::cerr << expr << '\n';
#endif

#define pb push_back
#define eb emplace_back
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define F first
#define S second
#define forEach(c) for (auto& it : c)
#define loop while (true)
#define mp make_pair
#define mt make_tuple

template <typename T>
bool ChMax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template <typename T>
bool ChMin(T& a, const T& b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

inline ll DivUp(ll a, ll b) {
    return (a + b - 1) / b;
}

[[noreturn]] void Panic() {
    cout << "-1\n";
    exit(0);
}

void solve() {
    
}

int main() {
#ifndef BZ
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#endif
    cout << setprecision(10) << fixed;
#ifdef LOCAL
    auto start = std::chrono::system_clock::now();
#endif
#ifdef VI
    freopen("in.txt", "r", stdin);
#endif
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
#ifdef LOCAL
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<ld> elapsed_seconds = end - start;
    cout << "\ntime: " << elapsed_seconds.count() << " s\n";
#endif
}
