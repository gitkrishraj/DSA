#include<iostream>
using namespace std;
int main (){ 
//     for (int count=1; count<=10; count=count+1)
//     {
//         cout<<"coder Army\n";
//     }
// }



// for( int i=1; i<=5; i= i+1)
// {
//     cout<<"Hello\n";
// }



// int n;
// cout<<"Enter the number:";
// cin>>n;
// for (int count=1; count<=n; count=count+1)
// { 
//     cout<<count<<" Square is:"<< count*count<<endl;
// }



// int num;
// cin>>num;
// for( int i=2; i<=num; i= i=i+2)
// { 
//     cout<<i<<endl;
// }
// }



// int i;
// for ( int i=101; i<=200; i++)
// {
//     cout<<i<<endl;
// }
// }



// char name;
// for(name='a'; name<='z'; name=name+1)
// {
//     cout<<name<<" ";
// }


// int i;
// for(int i=10; i>=1; i=i-1)
// {
//     cout<<i<<endl;
// }

// int n,i;
// cin>>n;
// for ( i=1; i<=10; i=i+1)
// {
//     cout<<n*i<<endl;
// }



// int n, pow,i,num;
// cout<<"Enter the number:";
// cin>>n;
// cout<<"Enter the power:";
// cin>>pow;

// num=n;
// for (i=1; i<pow; i=i+1)
// {
//     num=num*n;

// }
// cout<<num;


// int n,i, fact=1;
// cout<<"Enter the number:";
// cin>>n;
// for(i=1; i<=n;i=i+1)
// {
//     fact = fact*i;
// }

//     cout<<fact;


int n,i;
cout<<"Enter the number";
cin>>n;

if(n<2)
{
   cout<<"Not a prime number";
   return 0;
}
  else
  {
    for(i=2; i<n; i=i+1)
    {
        if(n%i==0)
    
    {
        cout<<"Not a prime number";
        return 0;

    }

  }
      cout<<"Prime number";
      return 0;






  }
}


