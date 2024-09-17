
#include<iostream>
using namespace std;

    int sum(int m, int n) //func declare
 {
     int ans =m+n; //func define
     return ans;
 }


   int Mul (int m, int n)
   {
   int ans =m*n;
   return ans;
   }

    int main(){
     int a,b;
     cout<<"Enter two number:";
     cin>>a>>b;

     // fuction call
     cout<<sum(a,b);
     cout<<endl;
    cout<<Mul(a,b);

 }