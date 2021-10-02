
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
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	int tc, tp = 0; cin >> tc;
	while (tc--) {
		int n, x; cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; ++i)cin >> a[i];


		int cr = 0;
		int j = 0;
		for (j = x; j > 0 && cr < n - 1 ; j--) {


			int p = log2(a[cr]);	//max bit gaya
			a[cr] ^= (1 << p);
			bool fg = true;

			for (int k = cr + 1; k < n; k++)
			{
				if ((a[k] ^ (1 << p)) < a[k]) {
					a[k] ^= (1 << p);
					fg = false;
					break;
				}
			}

			if (fg) a[n - 1] ^= (1 << p);

			while (a[cr] <= 0)cr++;

			tp = j + 1;

		}

		if (tp > 0 && n <= 2 && (tp) % 2 > 0) {
			a[n - 2] ^= 1;
			a[n - 1] ^= 1;


		}




		for (int i = 0; i < n; ++i)
			cout << a[i] << ' ';

		cout << '\n';


	}



	// for (int i = 1; i < 100; ++i)
	// {
	// 	int p = log2(i);
	// 	cout << (i ^ (int)pow(2, p)) << '\n';
	// }


	return 0;

}
