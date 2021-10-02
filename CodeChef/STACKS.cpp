
#include <bits/stdc++.h>
#include <set>
#include <cstdlib>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
#include<algorithm>
#include <typeinfo>
// #include <iostream>
// #include <vector>
// #include <numeric>
// cout << typeid(mm).name() << endl;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod            1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x)            cout<<#x<<" "<<x<<"\n";

// int binser(int tg, vi &arr) {
//     int ans = -1;
//     int mid;

//     int s = 0, e = arr.size();

//     if (e == 1)return 0;

//     while (s <= e) {
//         // deb(mid);
//         mid = (s + e) / 2;

//         if (arr[mid] == tg)
//             return mid;
//         else if (arr[mid] < tg) {
//             s = mid + 1;
//             ans = mid + 1;
//         } else {
//             e = mid - 1;
//             ans = mid - 1;
//         }
//     }

//     return ans;
// }

int32_t main() {
    FIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vi a, r;

        int tp;
        for (int i = 0; i < n; ++i)
        {
            cin >> tp;
            a.pb(tp);
        }

        r.pb(a[0]);

        for (int i = 1; i < n; ++i)
        {

            auto ind = upper_bound(r.begin(), r.end(), a[i]);

            if (ind != r.end()) {
                *ind = a[i];
            } else {
                r.pb(a[i]);
            }


        }
        cout << r.size() << ' ';

        for (auto i : r) {
            cout << i << ' ';
        }

        cout << '\n';


    }







    return 0;


}
