#include <bits/stdc++.h>
#include <set>
#include <cstdlib>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
#include<algorithm>
#include <typeinfo>
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
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define mk_2d(arr,n,type)  type *arr=new type[n][n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x)			cout<<#x<<" "<<x<<"\n";

int32_t main() {
	FIO;
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	w(x) {
		string s; cin >> s;
		std::map<char, int> d;
		for (char i : s)
			d[i]++;
		int h, k; cin >> h >> k;
		int f1 = 0, f2 = 0;

		int n; cin >> n;
		int x, y;

		for (int i = 0; i < n; ++i)
		{
			f1 = 0; f2 = 0;
			cin >> x >> y;
			int dx = x - h, dy = y - k;
			if (dx > 0) {
				if (d['R'] >= dx)
					f1 = 1;
			}
			else {
				if (d['L'] >= abs(dx))
					f1 = 1;
			}

			if (dy > 0) {
				if (d['U'] >= dy)
					f2 = 1;
			}
			else {
				if (d['D'] >= abs(dy))
					f2 = 1;
			}

			if (f1 & f2)
				cout << "YES" << " " << abs(dx) + abs(dy) << "\n";
			else
				cout << "NO\n";
		}



	}


	return 0;
}

