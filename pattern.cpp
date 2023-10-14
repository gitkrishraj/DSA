#include<iostream>
using namespace std;
int main(){


//     int row, col;
//     for(row=1; row<=5; row=row+1)
//     {
//         for(col=1; col<=5; col=col+1)
//     {
//        cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


// int row, col;
// for(row=1; row<=5; row=row+1)
// { 
//     for(col=1; col<=5; col=col+1)
//     {
//         cout<<row<<" ";
//     }
//     cout<<endl;
// }


// int row, col;
// for(row=1; row<=5; row=row+1)
// {
//     for(col=1; col<=row; col=col+1)
//     {
//         cout<<col<<" ";
//     }
//     cout<<endl;
// }


// int row, col;
// for( row=1; row<=5; row=row+1)
// {
//    for( col=row; col>=1; col=col-1)

//    { cout<<col<<" ";

//    }
//     cout<<endl;
// }


// int row, col;
// for(row=1; row<=5; row=row+1)
// {
// char name='a'+ row-1;

//     for(col=1; col<=row; col=col+1)
//     {
//         cout<<name<<" ";

//     }
//     cout<<endl;
// }



// int row, col;
// for( row=1; row<=5; row=row+1)

// //space print
// {
//     for(col=1; col<=5-row;col=col=col+1)
//     cout<<"   ";

// //Number print
//    for(col=1; col<=row; col=col+1)
//    cout<<col<<"  ";
//    cout<<endl;
//  }






// int row, col;
// for( row=1; row<=5; row=row+1)

// //space print
// {
//     for(col=1; col<=5-row;col=col=col+1)
//     cout<<"   ";

// //Number print
//    for(col=1; col<=row; col=col+1)
//    cout<<"*"<<"  ";
//    cout<<endl;
// }




// int row, col;
// for( row=1; row<=5; row=row+1)
// {
//     //space print
//     for ( col=1; col<=5-row; col=col+1)
//     cout<<"   ";

//     // char print 
//     for(char name= 'A'; name<='A'+row-1; name=name+1)
//     cout<<name<<"  ";
//     cout<<endl;
// }



//  int row,col;
// int n;
// cout<<"Enter the number:";
// cin>>n;
// for(row=1; row<=n; row=row+1)
// {
//     for(col=1; col<=n-row; col=col+1)
//     cout<<"  ";

//     for(col=1; col<=2*row-1; col=col+1)
//       cout<<"* ";
//       cout<<endl;
//}
    
    

// int row,col;
// int n;
// cout<<"Enter the number:";
// cin>>n;
// for(row=n; row>=1; row=row-1)
// {
//     for(col=1; col<=n-row; col=col+1)
//     cout<<"  ";

//     for(col=1; col<=2*row-1; col=col+1)
//       cout<<"* ";
//       cout<<endl;
// }

 
int row, col;
int n;
cout<<"Enter the input:";
 cin>>n;
for( row=1; row<=n; row=row+1)
{ 
    //space print
    for ( col=1; col<=n-row; col=col+1)
    cout<<" " ;

    //number print
    for(col=1; col<=row; col=col+1) 
    cout<<"*" <<" ";
    cout<<endl;
}

}





