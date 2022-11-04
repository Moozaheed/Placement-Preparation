//https://www.youtube.com/watch?v=QIyugGzih4k&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=12

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

int bianrytodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;

    }
    return ans;
}

int octaltodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;

    }
    return ans;
}

int hexadecimaltodecimal (string n)
{
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A'&& n[i]<='F')
        {
            ans+=x*((n[i]-'A') +10);
        }
        x*=16;
    }
    return ans;
}


int decimaltobinary(int n)
{
    int x=1;
    int ans=0;
    while(x<=n) x*=2;
    x/=2;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        ans=ans*10+lastdigit;
    }
    return ans;

}

 int decimaltooctal(int n)
 {
    int x=1;
    int ans=0;
    while(x<=n) x*=8;
    x/=8;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        ans=ans*10+lastdigit;
    }
    return ans;
 }

 string decimantphexadecimal(int n)
 {
    int x=1;
    string ans="";
    while(x<=n)x*=16;
    x/=16;

    while(x>0)
    {
        int lastdigit =n/x;
        n-=lastdigit*x;
        x/=16;

        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }
        else
        {
            char c='A'+lastdigit-10;
            ans.pb(c);
        }
    }
    return ans;
 }

 int reverse(int n)
 {
    int ans=0;
    while(n>0)
    {
        int rem=n%10;
        ans=ans*10+rem;
        n/=10;
    }
    return ans;
 }

 int addbinary(int a,int b)
 {
    int ans=0;
    int carry=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans*10 +carry;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0))
        {
            if(carry==1)
            {
                ans=ans*10+0;
                carry =1;
            }
            else
            {
                ans=ans*10+1;
                carry =0;
            }
        }
        else
        {
            ans=ans*10+carry;
            carry=1;
        }
        a/=10;
        b/=10;
    }

    while(a>0)
    {
        if(carry==1)
        {
            ans=ans*10+0;
            carry =1;
        }
        else{
            ans=ans*10+1;
            carry=0;
        }
    }

    while(a>0)
    {
        if(carry==1)
        {
            if(a%2==1)
            {
                ans=ans*10+0;
                carry=1;
            }
            else{
                ans=ans*10+1;
                carry=1;
            }
        }
        else{
            ans=ans*10+(a%2);

        }
        a/=10;
    }

    while(b>0)
    {
        if(carry==1)
        {
            if(b%2==1)
            {
                ans=ans*10+0;
                carry=1;
            }
            else{
                ans=ans*10+1;
                carry=1;
            }
        }
        else{
            ans=ans*10+(b%2);

        }
        b/=10;
    }

    if(carry==1)
    {
        ans=ans*10+1;
    }

    ans=reverse(ans);
    return ans;

 }


void Boom()
{
    //Let's Move

    cout<<addbinary(10101,11010)<<dl;




}

int main()
{
    Boost;

    int t=1;       cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }

    return 0;

}
