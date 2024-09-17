#include<iostream>
using namespace std;


void swap( int &a, int &b)  //pass by reference
{
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &c, float &d) //function overloading
{ 
    float r =c;
          c=d;
          d=r;
}

int main ()
{
int a,b;
cin>>a>>b;

swap (a,b);
cout<<a<<"  "<<b<<endl;

float f1=34.4, f2=35.456;
swap( f1,f2);
cout<<f1<<"  "<<f2;
}