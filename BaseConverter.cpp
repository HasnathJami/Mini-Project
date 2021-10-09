#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;

void baseConverter(ll n,ll b)
{
    ll arr[100];
    ll res=0,sum=0;
    ll t=0;
    while(n>0)
    {
        res=n%b;
        arr[t]=res;
        n=n/b;
        t++;
    }

    reverse(arr,arr+t);

    for(int i=0; i<t; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;




}


int main ()
{
    FASTER

    ll n,b;
    cout<<"Please Enter The Decimal Number :"<<endl;
    cin>>n;
    cout<<"Please Enter The Base You Want To Convert The Above Decimal Number:"<<endl;
    cin>>b;

    cout<<"Result of Base "<<b<<" is = ";
    baseConverter(n,b);
    cout<<endl;



    return 0;

}







