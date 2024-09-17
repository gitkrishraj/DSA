#include<iostream>
using namespace std;
int main(){
    int row, col;
 for( row=1; row<=5; row=row+1)

// //space print
 {
     for(col=1; col<=5-row;col=col=col+1)
     cout<<"   ";

 //Number print
    for(col=1; col<=row; col=col+1)
    cout<<col<<"  ";
    cout<<endl;
 }
}
