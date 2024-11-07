#include <iostream>
using namespace std;
int main()
{
    int t,n,s;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>n;
        s=n/10+n%10;
        cout<<s<<endl;
    }
return 0;
}
