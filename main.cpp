#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define rep(i,a,n) for(int i=a ; i<n ; i++)
const int MOD = 1e9+7, N=2e5+5 ;
#define fast ios_base::sync_with_stdio(false) ; cout.tie(0) ; cin.tie(0) ;

using namespace std;

bool ok=false;
string s[2];
bool vis[2][N];
int n;
void dfs(int l, int r){
    if(r == n-1){
        ok=true;
    }
    vis[l][r]=1;

    if(s[!l][r] == 'B' and !vis[!l][r]) dfs(!l,r);
    else if(s[l][r+1] == 'B' and !vis[l][r+1]) dfs(l,r+1);
}

void solve(){
    cin>>n; ok=false; 
    cin>>s[0]>>s[1];

    memset(vis,0,sizeof(vis));
    if(s[0][0] == 'B') dfs(0,0);

    memset(vis,0,sizeof(vis));
    if(s[1][0] == 'B') dfs(1,0);

    if(ok) YES;
    else NO;
}

signed main()
{
    fast;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0 ; //It's Sabbir
}
