// Disting String 
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

int p=31;
vi powers(maxx);


ll int calculate_hash(string s) {
    ll int hash=0;
    for(int i=0;i<s.length();i++)
    {
        hash=(hash+(s[i]-'a'+1)*powers[i])%m;
    }
    return hash;
}

void Boom()
{
    //Let's Move
    int n;
    cin>>n;
    vs strings(n);
    for(int i=0;i<n;i++)cin>>strings[i];

    powers[0]=1;
    for(int i=1;i<maxx;i++)
    {
        powers[i]=(powers[i-1]*p)%hp;
    }


    vi hashes;
    for(auto x:strings)
    {
        hashes.pb(calculate_hash(x));
    }

    sort(all(hashes));

    int dis=0;

    for(int i=0;i<hashes.size();i++)
    {
        if(i==0 || hashes[i]!=hashes[i-1])
        dis++;
    }

    cout<<dis<<dl;



    




}

int main()
{
    Boost;

    int t=1;      // cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
