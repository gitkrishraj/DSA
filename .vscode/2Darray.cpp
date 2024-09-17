// #include <iostream>
// using namespace std;
// void printcol(int arr[][4], int row,  int col)

// //column wise
// {
// for(int j=0; j<col; j++)
// for(int i=0; i<row; i++)
// cout<<arr[i][j]<<" ";
// }


// int main(){

//     int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12}; //create 2D array

//     print all the value in array row wise
//     for(int row=0; row<3; row++)
//    for(int col=0; col<4; col++)
//      cout<<arr[row][col]<<"  ";

//       //print all the value in array col wise, function call
//      printcol(arr,3,4);

//  }




// find an element in our array

// #include <iostream>
// using namespace std;
// void printcol(int arr[][4], int row,  int col)

// //column wise
// {
// for(int j=0; j<col; j++)
// for(int i=0; i<row; i++)
// cout<<arr[i][j]<<" ";
// }


// int main(){

//     int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12}; //create 2D array
//     int x=7;

//     //print all the value in array row wise
//     for(int row=0; row<3; row++)
//     for(int col=0; col<4; col++)
//     {
//     if(arr[row][col]==x)
//     { 
//         cout<<"yes";
//         return 0;
//     }
//       }

//       cout<<"No";
// }





// ADD TWO MATRIX

#include <iostream>
using namespace std;
void printcol(int arr[][4], int row,  int col)

//column wise
{
for(int j=0; j<col; j++)
for(int i=0; i<row; i++)
cout<<arr[i][j]<<" ";
}


int main(){

    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; //create 2D array
    int arr2[3][4]={2,3,4,5,7,8,5,12,32,67,98,54};
    int ans[3][4];

    for(int row=0;row<3; row++)
    for (int col=0; col<4; col++)
    {
        ans[row][col] = arr1[row][col]+arr2[row][col];
    }
     for(int row=0;row<3; row++)
    for (int col=0; col<4; col++)
    cout<<ans[row][col]<<"  ";
}