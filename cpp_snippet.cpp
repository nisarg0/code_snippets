// Nisarg Gogate
// VNIT

#include<bits/stdc++.h>
#define DEBUG_ON 1
#define int long long 
#define TESTCASES false
#define FASTIO true
#define DBG(x) if(DEBUG_ON) cout << #x << " == " << x << endl
#define FF first
#define SS second
typedef enum {WHITE,BLUE,RED} color;    //white-no color

const int INF  = (int)1e18 + 1;
const int SIZE = (int)1e5+3;
const int MOD = (int)1e9+7;
using namespace std;


int solve(int n)
{
    int i,j,ans=0;
    vector<int> arr(n,0);
    for (auto &it : arr) cin >> it;
   
}

void main_code()
{
	int i,j,n,k,m,ans=0;
    cin>>n;
    cout<<solve(n)<<endl;
}

signed main()
{
    if(FASTIO)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    int T = 1;
 
    if(TESTCASES)
        cin >> T;

    while(T--)
        main_code();
    
}