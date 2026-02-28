#include<iostream>
using namespace std;
int sum(int a, int b, int c, int d)//function declare
{
    int ans = a+b+c+d;           //function define
    return ans;
}
int mul(int r,int u, int p, int g)
{
    int ans= r*u*p*g;
    return ans;
}
int main()
{
    int c,d,i,k;
    int r,u,p,g;
    cout<<"Enter the values: ";
    cin>>c>>d>>i>>k,r,u,p,k;
    cout<<sum(c,d,i,k);
    cout<<endl;
    cout<<mul(r,u,p,g);
}