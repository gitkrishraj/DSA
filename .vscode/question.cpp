#include<iostream>

using namespace std;




//Armstrong number
// int countdigit( int n)
// {
// int count= 0;
// while(n)
// {
//     count++;
//     n/=10;
// }
//    return count;
// }

// bool Armstrong(int num, int digit)
// {
//     int n=num, ans=0, rem;
//     while(n)
//     { 
//         rem= n%10;
//         n/=10;
//         ans = ans+pow(rem, digit);
//     }
//     if (ans==num)
//        return 1;
//        else 
//        return 0;
// }


// int main(){
//     int num;
//     cin>>num;
//     //digit count
//     int digit =countdigit(num);
//     //Armstrong number
//     cout<<Armstrong(num ,digit)<<endl;
// }



// // trailing number
//      class Solution{
//     public:
//     int trailingZeroes(int N)
// {
//     int count =0;
//     while(N>=5)
//     {
//         count+= N/5;
//         N/5;
//     }
//     return count;
// }
// };


//bishop number

int  solve(int A, int B)
{
    int count = 0;
    count+= min(B-A, B-B);
    count+= min(B-A, B-1);
    count+= min(A-1, B-1);
    count+= min(A-1, B-B);

    return count;
}
