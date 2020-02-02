#include<iostream>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int t;
    cin>>t;
    long long int n;
    while(t--)
    {
       cin>>n;
       long long int a;
       for(int i=0;i<n;i++)
       {
           cin>>a;
       }
       long long int result = (n*(n-1))/2;
       cout<<result<<"\n";  
    }

    return 0;
}