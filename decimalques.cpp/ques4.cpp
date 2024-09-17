#include<iostream>

using namespace std;
 char convert (char name)  //convert small to capital alphabet
 {
     char ans =name-'a'+'A';
    return ans;
 }
 int main(){
     char name;
     cin>>name;
     cout<<convert(name)<<endl;
}