//-----------Created by VanQuyVCT-----------//
//-----------------BOOSTER------------------//
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
//-----------------LIBRARY------------------//
#include<bits/stdc++.h>
//---------------DEFINATION-----------------//
#define fori(i,a,b) for(long i=a;i<b;i++)
#define forj(j,a,b) for(long j=a;j<b;j++)
#define ford(i,a,b) for(long i=a;i>=b;i--)
#define mp make_pair
#define ll long long
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define getarr(a, n) fori(i, 0, n)cin>>a[i]
#define putarr(a, n) fori(i, 0, n)cout<<a[i]<<" "
//----------------NAMESPACE-----------------//
using namespace std;
//-----------------FUNCTION-----------------//

//------------------MAIN--------------------//
void solve()
{
	long n;
	cin>>n;
	ll a[n+5];
	fori(i, 0, n) cin>>a[i];
	ll minn=a[n-1], res=0;
	ford(i, n-2, 0)
	{
		if(a[i]<=minn) 
		{
			minn = a[i];
			continue;
		}
		else
		{
			ll thuong = a[i]/minn;
			if(a[i]%minn==0) thuong--;
			res += thuong;
			if(a[i]%minn==0) continue;
			minn = a[i] / (thuong+1LL);
		}
	}
	cout<<res<<endl;
}

int main()
{
	long t;
	cin>>t;
	while(t--)
		solve();
}
