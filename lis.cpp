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
int a[200005];
int dp[20005];


int lis(int i){
    if(dp[i]!=-1) return dp[i];
int ans=1;
for(int j=0;j<i;j++)
{

    if(a[j]<a[i])ans=max(ans,lis(j)+1);

}
return  dp[i]=ans;



}
 main()
{

    int n;
    cin>>n;
    fo(i,n)cin>>a[i];
    fo(i,n)dp[i]=-1;

    int ans=1;
    fo(i,n)ans=max(ans,lis(i));
    p<<ans<<br;
}

