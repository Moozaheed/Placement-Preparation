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


// Spiral Order means that firstly, first row is printed, then last column is printed,
// then last row is printed and then first column is printed, then we will come
// inwards in the similar way.


//Details : https://www.youtube.com/watch?v=Xx1tWbb37hY&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=26
void Boom()
{
    //Let's Move

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int row_s=0,row_e=n-1,col_s=0,col_e=m-1;

    while(row_s<=row_e && col_s<=col_e)
    {
        //Row Start
        for(int col=col_s;col<=col_e;col++)
        {
            cout<<arr[row_s][col]<<sp;
        }
        row_s++;

        //Col End

        for(int row=row_s;row<=row_e;row++)
        {
            cout<<arr[row][col_e]<<sp;
        }
        col_e--;

        //Row End

        for(int col=col_e;col>=col_s;col--)
        {
            cout<<arr[row_e][col]<<sp;
        }
        row_e--;

        //Col Start

        for(int row=row_e;row>=row_s;row--)
        {
            cout<<arr[row][col_s]<<sp;
        }
        col_s++;
    }

    








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
