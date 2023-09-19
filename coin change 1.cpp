//
#include <bits/stdc++.h>
using namespace std;
#define maxi max_element
#define mini min_element
#define p cout
#define pb push_back
#define x first
#define y second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<n;i++)
#define rfo(i,n) for(int i=n-1;i>=0;i--)
#define int long long int
#define gap " "
#define br "\n"
#define ins insert
#define PI 2 * acos(0.0)
#define isSet(n, i) bool(n & (1LL << i))
#define setBit(n, i) (n  (1LL << i))
#define unsetBit(n, i) (n & !(1LL << i))
#define yes p<<"YES"<<br;
#define no p<<"NO"<<br;
typedef long double ld;
typedef pair<int, int> pii;

const int inf = 1e18;
const int maxn = 2e5+5;
const int mod = 1e9+7;
const ld pi = atan2(0, -1);
const ld eps = 1e-4;
int bm(int a,int b,int m)
{
    if(b==0)return 1%m;
    int x=bm(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)x=(x*a)%m;
    return x;
}
int dp[2005][310];
//int func(int amount ,vector<int>&coins){
//if(amount==0)return 0;
//if(dp[amount]!=-1)return dp[amount];
//int ans=INT_MAX;
//for(auto x:coins)
//{
//    if(amount-x>=0)
//    ans=min(ans+0LL,func(amount-x,coins)+1LL);
//}
//return dp[amount]=ans;
//}
int func1(int ind ,int amount,vector<int>&coins){
if(amount==0)return 1;
if(ind<0)return 0;
if(dp[ind][amount]!=-1)return dp[ind][amount];
int ways=0;
for(int cm=0;cm<=amount;cm+=coins[ind])
{
    //if(amount-x>=0)
    ways+=func1(ind-1,amount-cm,coins);
}
return dp[ind][amount]=ways;
}
 int coinChange(vector<int>& coins, int amount) {
     memset(dp,-1,100000);
     int ans=func1(coins.size()-1,amount,coins);
     return ans;

    }
 main()
{
    vector<int>coins={1,2,5};
   cout<<coinChange(coins,11);
}

