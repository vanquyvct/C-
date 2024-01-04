//-----------Created by VanQuyVCT-----------//
//-----------------BOOSTER------------------//
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
//-----------------LIBRARY------------------//
#include<bits/stdc++.h>
//---------------DEFINATION-----------------//
#define fori(i,a,b) for(long i=a;i<b;i++)
#define forj(j,a,b) for(long j=a;j<b;j++)
#define ford(i,a,b) for(long i=a;i>b;i--)
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
	long n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	long da=0, db=0, vta[n+5]={0}, vtb[n+5]={0};
	fori(i, 0, n)
		if(s[i]=='B')
		{
			db++;
			vtb[db] = i;
		}
		else
		{
			da++;
			vta[da] = i;
		}
	if(db>k)
	{
		cout<<"1\n"<<vtb[db-k]+1<<" A\n";
		return;
	}
	else if(db==k)
	{
		cout<<"0\n";
		return;
	}
	else if(db<k)
	{
		cout<<"1\n"<<vta[k-db]+1<<" B\n";
		return;
	}
	
}

int main()
{
	long t;
	cin>>t;
	while(t--)
		solve();
}
