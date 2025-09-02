#include<iostream>
using namespace std;
// cout<<"testing"<<endl;
// //////////function Define////////////////

    ////////////////FUNCTIONS//////////////////////
    // function is a block of code which performs a specific task
    // function is used to avoid repetition and make code modular
    // function is a reusable block of code

// return_type function_name(arguments){
//  void printHello(){
//     cout<<"Hello World"<<endl;
//  }

/// //////////////function the sum of two numbers////////////////////
// int sum(int a,int b){
//     int c=a+b;
//     return c;

// } 
// int main(){
//     // printHello(); // function call
//     // printHello();
//     // printHello();
//     // printHello();
//     // printHello();
//     // printHello();
//         // printHello(); // function call

//         int a,b;
//         cout<<"Enter the value of a"<<endl;
//         cin>>a;
//         cout<<"Enter the value of b"<<endl;
//         cin>>b;
//         int ans=sum(a,b); // function call
//         cout<<"The sum is "<<ans<<endl; // print the sum
//     return 0;
// }


////////////////////function to find the maximum of two numbers////////////////////
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }

//     int main(){
//         int a,b;
//         cout<<"Enter the value of a"<<endl;
//         cin>>a;
//         cout<<"Enter the value of b"<<endl;
//         cin>>b;
//         int yelo=max(a,b); // function call
//         cout<<"The maximum is "<<yelo<<endl; // print the maximum
//         return 0;
//     }

////////////////////function to find the maximum of three numbers////////////////////
// int max(int a,int b,int c){
//     if(a >= b && a >= c){
//         return a;
//     } else if(b >= a && b >= c){
//         return b;
//     } else {
//         return c;
//     }
// }
// int main(){
//     int a,b,c;
//     cout<<"Enter the value of a";
//     cin>>a;
//     cout<<"Enter the value of b";
//     cin>>b;
//     cout<<"Enter the Value of c";
//     cin>>c;

//     cout<<"Maximume num of three "<<max(a,b,c);
//     return 0;
// }

/////////Calculate Sum of numbers from 1 to N.///////////

        // int sumofN(int n){
        //     int sum=0;
        //     for(int i=1;i<=n;i++){
        //         sum=sum+i;
        //     }
        //     return sum;
        // }
        // int main(){
        // int n;
        // cout<<"Enter the Value of N :";
        // cin>>n;
        // cout<<sumofN(n)<<endl;
        // cout<<sumofN(55)<<endl;
        // cout<<sumofN(10)<<endl;
        // return 0;
        // }

//////////////Calculate Factorial of a number./////////////
        // int fectr(int n){
        //     int mult=1;
        //     for(int i=1;i<=n;i++){
        //         mult=mult*i;
        //     }
        //     return mult;
        // }

        // int main(){
        //     int n;
        //     cout<<"Enter the Value of N :";
        //     cin>>n;
        //     cout<<fectr(n)<<endl;
        //     cout<<fectr(9)<<endl;
        //     cout<<fectr(5)<<endl;
        //     return 0;
        // }

//////////Calculate Sum of digits of a number.///////////
        // int sumofdigit(int n){
        //     int sum=0;
        //     while(n>0){
        //         int lastdigit=n%10;
        //         sum=sum+lastdigit;
        //         n=n/10;
        //     }
        //     return sum;
        // }

        // int main(){
        //     int n;
        //     cout<<"Enter the Value of N :";
        //     cin>>n;
        //     cout<<sumofdigit(n)<<endl;
        //     cout<<sumofdigit(123)<<endl;
        //     cout<<sumofdigit(456)<<endl;
        //     return 0;
        // }

//////////Calculate nCr (Binomial Coefficient).///////////
        int factorial(int n){
            int fact=1;
            for(int i=1;i<=n;i++){
                fact=fact*i;
            }
            return fact;
        }

        int nCr(int n,int r){
            int num=factorial(n);
            int den=factorial(r)*factorial(n-r);
            return num/den;
        }

        int main(){
            int n,r;
            cout<<"Enter the Value of N :";
            cin>>n;
            cout<<"Enter the Value of R :";
            cin>>r;
            cout<<nCr(n,r)<<endl;
            cout<<nCr(5,2)<<endl;
            cout<<nCr(6,3)<<endl;
            return 0;
        }