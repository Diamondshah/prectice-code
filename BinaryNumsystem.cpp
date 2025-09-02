#include<iostream>
using namespace std;
// int main(){
// cout<<"testing"<<endl;
// cout<<"hello bro";
// return 0;
// }

///// Convert Decimal to Binary Number System./////
// int decToBinary(int decNum){
//     int ans=0;
//     int power=1;
//     while(decNum>0){
//         int rem=decNum%2;
//         decNum=decNum/2;
//         ans=ans+rem*power;
//         power=power*10;
//     }
//     return ans;}
// int main(){
//     int decNum;
//     cout<<"Enter a Decimal Number :";
//     cin>>decNum ;
//     int binary=decToBinary(decNum);
//     cout<<"the Binary Number is :"<<binary<<endl;
//     return 0;
// }

///// Convert Binary to Decimal Number System./////
        int binaryToDec(int binNum){
            int ans=0;
            int power=1;
            while(binNum>0){
                int rem=binNum%10;
                binNum=binNum/10;
                ans=ans+rem*power;
                power=power*2;
            }
            return ans;}
        int main(){
            int binNum;
            cout<<"Enter a Binary Number :";
            cin>>binNum ;
            int decimal=binaryToDec(binNum);
            cout<<"the Decimal Number is :"<<decimal<<endl;
            return 0;
        }