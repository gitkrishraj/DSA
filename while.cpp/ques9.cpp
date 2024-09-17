#include<iostream>
using namespace std;
int main (){
    int i;
cout<<"Enter the number:";
cin>>i;

switch(i)
{ case 1:
   cout<<"mon";
   break;

   case 2:
   cout<<"tue";
   break;

   case3:
   cout<<"wed";
   break;

   case 4:
   cout<<"thur";
   break;

   case 5:
   cout<<"fri";
   break;

   case 6:
   cout<<"sat";
   break;

   case 7:
   cout<<"sun";
   break;

   default:
   cout<<"Enter the valid day";
}
}