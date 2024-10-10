#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0) return 1;
    return fact(n-1)*n;
}
int ncr1(int n,int r)
{
    int num,num1,den;
    num = fact(n);
    num1 = fact(r);
    den = fact(n-r)*fact(r);
    return num/den;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncr1(n,r);
}