
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
#define deb(x)			cout<<#x<<" "<<x<<"\n";

// vector<vi> adj;
// int vis[1000001] = {0};

int32_t main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s, p; cin >> s >> p;
		int f = 0;
		bool flag = true;
		int cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			if (s[i] != p[i]) {
				cnt++;
				if (s[i] == '1')f++;
				else {
					f--;
					if (f < 0) {
						flag = false;
						break;
					}

				}
			}



		}

		cout << (flag && f == 0 ? "Yes\n" : "No\n");








	}


	return 0;

}
