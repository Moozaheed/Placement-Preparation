//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;


//sum 1 to n
int sum(int n)
{
    if(n==0)return 0;
    return n+sum(n-1);
}
//Calculate n raised to power of p
int pow(int n,int p)
{
    if(p==0)return 1;
    return n*pow(n,p-1);
}
//Find the factorial of a number n
int fact(int n)
{
    if(n==1)return 1;
    return n*fact(n-1);
}
//Print the nth Fibonacci number

int fib(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}

// Print N to 1
void printr(int n)
{
    if(n==0)return;
    cout<<n<<" ";
    printr(n-1);
}
// Print 1 to N
void print(int n)
{
    if(n==0)return;
    print(n-1);
    cout<<n<<" ";
}


//Check if an array is sorted or not
bool  issorted(int arr[],int n)
{
    if(n==1)return true;
    bool rest= issorted(arr+1,n-1);
    return arr[0]<arr[1] && rest;

}


// Find the first and last occurence of a number in an array
pair<int,int>findocc(int arr[],int n,int val)
{
    if(n==0)
    {
        return {0,0};
    }

    if(arr[0]==val && arr[n-1]==val)return {0,n-1};
    else if(arr[0]==val) findocc(arr,n-1,val);
    else if(arr[n-1]==val)findocc(arr+1,n,val);
    else findocc(arr+1,n-2,val);
}

int main()
{

    print(10);
    cout<<endl;
   // printr(10);
}
