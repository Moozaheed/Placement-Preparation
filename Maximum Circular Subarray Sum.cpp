//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<ll int>
#define vs vector<string>
#define pii pair<ll int,ll int>
#define psi pair<string,ll int>
#define pis pair<ll int,string>
#define mii map<ll int,ll int>
#define mib map<ll int,bool>
#define msi map<string,ll int>
#define mis map<ll int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define mem(arr,val) memset(arr,val,sizeof(arr));
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxx 100005
#define EPS 1e-9
using namespace std;
const double PI = acos(-1);
ll int hp = 1e9+7;


//In this problem we find two cases one is wrapping and not wrapping.
//Nonwrap sum will be find by the help of kadane's algorithm.
//The follwing process for the Wrapping case
//Max subarray sum=Total sum of the array - Sum of non-contributing elements
//How could we find the non contibuting element?
//Reverse the sign of all elment than find the max submarry .This max subarry sum is the sum of non contrubuting elements


int kadanes(int arr[],int n)
{
    int sum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)sum=0;
        mx=max(sum,mx);
    }
    return mx;
}

void Boom()
{
    //Let's Move

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int wrapsum,nonwrap;

    nonwrap=kadanes(arr,n);

    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum=totalsum + kadanes(arr,n);  //array er value gular sign change howai eikhane plus kortesi

    cout<<max(wrapsum,nonwrap)<<dl;



    




}

int main()
{
    Boost;

    int t=1;       //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
