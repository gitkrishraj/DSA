#include<iostream>
using namespace std;
int main(){
     int num;   // decimal to binary
     cout<<"Enter the number:";
     cin>>num;
     int rem, ans=0, mul=1;
     while(num>0)
     {
         rem = num%2; // remainder
        num =num/2; // quotient
        ans = rem*mul+ans; //ans
        mul =mul*10; //mul

     }
     cout<<ans<<endl;
}