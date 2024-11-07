#include<iostream>
main()
{
     int t,x,y,i;
     string ch;
     cin>>t;
     for(i=0;i<t;i++)
     {
         cin>>x>>y;
         if (x<y)
         {
             ch=to_string(x)+" "+to_string(y);
         }
         else
         {
             ch=to_string(y)+" "+to_string(x);
         }
         cout<<ch<<endl;
     }
     return 0;
}
