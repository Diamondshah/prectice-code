#include<iostream>
using namespace std;
// int main(){
// cout<<"testing"<<endl;
// cout<<"hello bro";
// return 0;
// }

///// Convert Decimal to Binary Number System./////
int decToBinary(int decNum){
    int ans=0;
    int power=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans=ans+rem*power;
        power=power*10;
    }
    return ans;}
int main(){
    int decNum;
    cout<<"Enter a Decimal Number :";
    cin>>decNum ;
    int binary=decToBinary(decNum);
    cout<<"the Binary Number is :"<<binary<<endl;
    return 0;
}