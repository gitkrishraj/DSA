#include<iostream>
using namespace std;
int main(){

     int num;   //decimal to octal
     cout<<"Enter the number:";
    cin>>num;
    int rem, ans=0, mul=1;
    while(num>0)
    {
        rem = num%8; // remainder
        num =num/8; // num ko divide kar do
        ans = rem*mul+ans; //ans
        mul =mul*10; //mul

    }
    cout<<ans<<endl;
}