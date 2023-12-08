/*
    written by Mahir Faysal Dipto.
    country:-Bangladesh
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define speed    \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
// #define mp make_pair
#define line cout << endl;
#define pb push_back
// loops
#define forin(arr, n)          \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
// Some print
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
// sort
#define all(V) (V).begin(), (V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V), greater<ll>())
// some extra
#define printv(v)                         \
    for (ll i = 0; i < ll(v.size()); i++) \
    {                                     \
        cout << v[i] << " ";              \
    }                                     \
    cout << endl;
#define precision(x) cout << fixed << setprecision(x);
#define sz(V) ll(V.size())
/* ascii value
    A=65,Z=90,a=97,z=122
*/
/* Some syntax
    //Syntax to create a min heap for priority queue
    //priority_queue <int, vector<int>, greater<int>>pq;
*/
/*  --------------------MAIN PROGRAM----------------------------*/
const ll INF = 1e18;
const ll mod1 = 1e9 + 7;
const ll mod2 = 998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph
// Experience :
// Cp is nothing but only observation and mathematics.

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        char sample = s[i];
        for (ll j = i+1; j < n; j++)
        {
            if (sample == s[j])
            {
                cout << sample;
                i = j;
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
}
/* -----------------END OF PROGRAM --------------------*/
/*
 * stuff you should look before submission
 * constraint and time limit
 * int overflow
 * special test case (n=0||n=1||n=2)
 * don't get stuck on one approach if you get wrong answer
 */