#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include"g1.h"
using namespace std;

//int main()
//{
  //   string a;
    // string b;
     //char answer='N';
   // do{

   // cout<<"Hello ! Enter two strings."<<endl;
    //cin>>a;
   // getline(cin,a);
   // cout<<endl<<"Enter another string"<<endl;
    //cin>>b;
    //getline(cin,b);
   /* if(a.length()==b.length())
    {
        cout<<"Strings are equal";
    }
    else
    {
        if(a.length()<b.length())
            cout<<b+" is greater"<<endl;
        else
            cout<<a+" is greater"<<endl;
    }
    cout<<"Want more Comparison?(Y or N)";
    cin>>answer;
    }while(answer=='Y');
    */
   /* int l=a.find("a");
    string begaining= a.substr(l+1);
    cout<<begaining;
    cout<<"*******0-----------0*********";
    auto int a;
    cin>>a;
    cout<<a;
    return 0;
}*/

/*int main()
{
    int j;
  vector<int>vi;

  for(int i=0;i<10;i++)
  {
      cin>>j;

      vi.push_back(j);
  }
  sort(begin(vi),end(vi));
  for(auto item:vi)
    cout<<item<<" ";
  cout<<endl;
  vector<string>vs;
  cout<<"Enter words";
  for(int i=0;i<3;i++)
  {
      string s;
      cin>>s;
      vs.push_back(s);
  }
  sort(begin(vs),end(vs));
  for(auto item:vs)
    cout<<item<<" " ;
  cout<<endl;
  auto k=count(begin(vi),end(vi),78);
cout<<k;
}*/
/*int main()
{
    char a[]="hello";
    char b[]="hello";

    if(a==b)
        cout<<(a+b);


}*/
int main()
{
Account1 al;//class in g1
al.Deposit(90);
cout<<"After depositing $90"<<endl;
for(auto s:al.Report())
{
    cout<<s<<endl;
}
al.withdraw(50);
if(al.withdraw(100))
{
    cout<<"second withdraw succeeds"<<endl;

}
cout<<"After withdrawing $50 then $100"<<endl;
for(auto s:al.Report())
{
    cout<<s<<endl;
}
return 0;
}
