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
        // int factorial(int n){
        //     int fact=1;
        //     for(int i=1;i<=n;i++){
        //         fact=fact*i;
        //     }
        //     return fact;
        // }

        // int nCr(int n,int r){
        //     int num=factorial(n);
        //     int den=factorial(r)*factorial(n-r);
        //     return num/den;
        // }

        // int main(){
        //     int n,r;
        //     cout<<"Enter the Value of N :";
        //     cin>>n;
        //     cout<<"Enter the Value of R :";
        //     cin>>r;
        //     cout<<nCr(n,r)<<endl;
        //     cout<<nCr(5,2)<<endl;
        //     cout<<nCr(6,3)<<endl;
        //     return 0;
        // }

//////////Check if a number is prime or not.///////////
        // bool isPrime(int n){
        //     if(n<=1){
        //         return false;
        //     }
        //     for(int i=2;i*i<=n;i++){
        //         if(n%i==0){
        //             return false;
        //         }
        //     }
        //     return true;
        // }

        // int main(){
        //     int n;
        //     cout<<"Enter the Value of N :";
        //     cin>>n;
        //     if(isPrime(n)){
        //         cout<<n<<" is a prime number"<<endl;
        //     }else{
        //         cout<<n<<" is not a prime number"<<endl;
        //     }
        //     if(isPrime(11)){
        //         cout<<"11 is a prime number"<<endl;
        //     }else{
        //         cout<<"11 is not a prime number"<<endl;
        //     }
        //     if(isPrime(15)){
        //         cout<<"15 is a prime number"<<endl;
        //     }else{
        //         cout<<"15 is not a prime number"<<endl;
        //     }
        //     return 0;
        // }
//////////Check if a number is palindrome or not.///////////
        // bool isPalindrome(int n){
        //     int original=n;
        //     int reversed=0;
        //     while(n>0){
        //         int lastdigit=n%10;
        //         reversed=reversed*10+lastdigit;
        //         n=n/10;
        //     }
        //     return original==reversed;
        // }

        // int main(){
        //     int n;
        //     cout<<"Enter the Value of N :";
        //     cin>>n;
        //     if(isPalindrome(n)){
        //         cout<<n<<" is a palindrome number"<<endl;
        //     }else{
        //         cout<<n<<" is not a palindrome number"<<endl;
        //     }
        //     if(isPalindrome(121)){
        //         cout<<"121 is a palindrome number"<<endl;
        //     }else{
        //         cout<<"121 is not a palindrome number"<<endl;
        //     }
        //     if(isPalindrome(123)){
        //         cout<<"123 is a palindrome number"<<endl;
        //     }else{
        //         cout<<"123 is not a palindrome number"<<endl;
        //     }
        //     return 0;
        // }   

//////////Calculate GCD (Greatest Common Divisor) of two numbers.///////////
        // int gcd(int a,int b){
        //     if(b==0){
        //         return a;
        //     }
        //     return gcd(b,a%b);
        // }

        // int main(){
        //     int a,b;
        //     cout<<"Enter the Value of A :";
        //     cin>>a;
        //     cout<<"Enter the Value of B :";
        //     cin>>b;
        //     cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
        //     cout<<"GCD of 12 and 15 is "<<gcd(12,15)<<endl;
        //     cout<<"GCD of 20 and 30 is "<<gcd(20,30)<<endl;
        //     return 0;
        // }

//////////Calculate LCM (Least Common Multiple) of two numbers.///////////
        // int gcd(int a,int b){
        //     if(b==0){
        //         return a;
        //     }
        //     return gcd(b,a%b);
        // }

        // int lcm(int a,int b){
        //     return (a*b)/gcd(a,b);
        // }

        // int main(){
        //     int a,b;
        //     cout<<"Enter the Value of A :";
        //     cin>>a;
        //     cout<<"Enter the Value of B :";
        //     cin>>b;
        //     cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b)<<endl;
        //     cout<<"LCM of 12 and 15 is "<<lcm(12,15)<<endl;
        //     cout<<"LCM of 20 and 30 is "<<lcm(20,30)<<endl;
        //     return 0;
        // }
//////////Fibonacci Series up to N terms.///////////
        // void fibonacci(int n){
        //     int t1=0,t2=1,nextterm;
        //     for(int i=1;i<=n;i++){
        //         cout<<t1<<",";
        //         nextterm=t1+t2;
        //         t1=t2;
        //         t2=nextterm;
        //     }
        // }

        // int main(){
        //     int n;
        //     cout<<"Enter the Value of N :";
        //     cin>>n;
        //     cout<<"Fibonacci Series up to "<<n<<" terms is :"<<endl;
        //     fibonacci(n);
        //     cout<<endl;
        //     cout<<"Fibonacci Series up to 5 terms is :"<<endl;
        //     fibonacci(5);
        //     cout<<endl;
        //     cout<<"Fibonacci Series up to 10 terms is :"<<endl;
        //     fibonacci(10);
        //     cout<<endl;
        //     return 0;
        // }
//////////Check if a number is Armstrong or not.///////////
        // bool isArmstrong(int n){
        //     int original=n;
        //     int sum=0;
        //     while(n>0){
        //         int lastdigit=n%10;
        //         sum=sum+(lastdigit*lastdigit*lastdigit);
        //         n=n/10;
        //     }
        //     return original==sum;
        // }

        // int main(){
        //     int n;
        //     cout<<"Enter the Value of N :";
        //     cin>>n;
        //     if(isArmstrong(n)){
        //         cout<<n<<" is an Armstrong number"<<endl;
        //     }else{
        //         cout<<n<<" is not an Armstrong number"<<endl;
        //     }
        //     if(isArmstrong(153)){
        //         cout<<"153 is an Armstrong number"<<endl;
        //     }else{
        //         cout<<"153 is not an Armstrong number"<<endl;
        //     }
        //     if(isArmstrong(123)){
        //         cout<<"123 is an Armstrong number"<<endl;
        //     }else{
        //         cout<<"123 is not an Armstrong number"<<endl;
        //     }
        //     return 0;
        // }
//////////Power of a number using recursion.///////////
        // int power(int a,int b){
        //     if(b==0){
        //         return 1;
        //     }
        //     return a*power(a,b-1);
        // }

        // int main(){
        //     int a,b;
        //     cout<<"Enter the Value of A :";
        //     cin>>a;
        //     cout<<"Enter the Value of B :";
        //     cin>>b;
        //     cout<<a<<" raised to the power "<<b<<" is "<<power(a,b)<<endl;
        //     cout<<"2 raised to the power 3 is "<<power(2,3)<<endl;
        //     cout<<"5 raised to the power 4 is "<<power(5,4)<<endl;
        //     return 0;
        // }
        ///////////WAF to print nth fibonacci number///////////
                // int fibonacci(int n){
                //     if(n==0){
                //         return 0;
                //     }
                //     if(n==1){
                //         return 1;
                //     }
                //     return fibonacci(n-1)+fibonacci(n-2);
                // }
                // int main(){
                //     int n;
                //     cout<<"Enter the Value of N :";
                //     cin>>n;
                //     cout<<"The "<<n<<"th Fibonacci number is "<<fibonacci(n)<<endl;
                //     cout<<"The 5th Fibonacci number is "<<fibonacci(5)<<endl;
                //     cout<<"The 10th Fibonacci number is "<<fibonacci(10)<<endl;
                //     return 0;
                // }