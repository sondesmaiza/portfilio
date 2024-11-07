#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,s;
    string ch,ch1,ch2,res;
    cin>>n;
        for(i=0;i<n;i++){
            cin>>ch;
            if (ch.length()>10){
           ch1=ch[0];
           ch2=ch[(ch.length()-1)];
           s=ch.length()-2;
           res=ch1+to_string(s)+ch2;
           cout<<res<<endl;
           }
           else{
            cout<<ch<<endl;
           }
        }
         return 0;
    }
