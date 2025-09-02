#include<iostream>
using namespace std;
// int main(){
// cout<<"testing"<<endl;
// cout<<"hello bro";
// return 0;
// }

///// Convert Decimal to Binary Number System./////

int main(){
    int decNum;
    int ans=0;
    int power=1;
    cout<<"Enter a Decimal Number :";
    cin>>decNum;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans=ans+rem*power;
        power=power*10;
    }
    cout<<"the Binary Number is :"<<ans<<endl;
    return 0;
}