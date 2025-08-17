#include<iostream>
using namespace std;
int main() {

// // Q1.----Sum of 1 to n Number----using for loop---+ break stetment
//     int sum=0, n;
//     cout << "Enter a number of n : "<<endl;
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//         sum += i;
//         if(i==5){
//             break;
//         }
//     }
//     cout << "Total sum = " << sum << endl;
    
    
// // Q---- Sum of 1 to n Number----using while loop

    // int i=1,sum=0,n;
    // cout << "Enter a number of n : "<<endl;
    // cin >> n;
    // while (i <= n) {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << "Total sum = " << sum << endl;

    // Q--- Largest Num checker---
    // int a, b, c;
    // cout << "Enter a numbers: ";
    // cin>>a;
    // cout << "Enter b numbers: ";
    // cin>>b;
    // cout << "Enter c numbers: ";
    // cin>>c; 
    // if (a > b && a > c) {
    //     cout << "The largest number is: " << a << endl;
    // } else if (b > a && b > c) {
    //     cout << "The largest number is: " << b << endl;
    // } else {
    //     cout << "The largest number is: " << c << endl;
    // }


    // Q-- age checker--

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if (age < 18) {
    //     cout << "You are a minor." << endl;
    // } else if (age >= 18 && age < 65) {
    //     cout << "You are an adult." << endl;
    // } else {
    //     cout << "You are a senior citizen." << endl;
    // }

    // Q1.----Sum of 1 to n Number----

    // int n, sum = 0;
    // cout << "Enter a number of n : "<<endl;
    // cin >> n;
    // // cout << n*(n + 1) / 2 << endl;
    // for (int i = 1; i<=n; i++)
    // {
    //     sum=sum+i;
    // }    
    //      cout<<"Total sum ="<<sum<<endl;
// // //sum of 1 to n all odd numbers
//     int n, oddsum = 0;
//         cout << "Enter a number of n : "<<endl;
//         cin >> n;
//         for (int i = 1; i<=n; i++)
//         {
//             if(i%2!=0){
//                 oddsum=oddsum+i;
//             }
//         }    
//             cout<<"Total sum ="<<oddsum<<endl;

// // //sum of 1 to n all even numbers
    // int n, evensum = 0;
    // cout << "Enter a number of n : "<<endl;
    // cin >> n;
    // for (int i = 1; i<=n; i++)
    // {
    //     if(i%2==0){
    //         evensum=evensum+i;
    //     }
    // }
    // cout<<"Total sum ="<<evensum<<endl;

    /////// while loop sum of 1 to n all odd numbers
    // int n, oddsum = 0, i = 1;
    // cout << "Enter a number of n : "<<endl;
    // cin >> n;
    // while(i<=n){
    //     if(i%2!=0){
    //         oddsum+=i;
    //     }
        
    // }
    // cout<<"Total sum of odd numbers = "<< oddsum<<endl;

// // I Love you Diamond useing Do while loop 
    // int n;
    // cout << "Enter a number of n : "<<endl;
    // cin >> n;
    // do
    // {
    //     cout<<n<<"  "<<"I Love You Diamond"<<endl;
    //     n--;

    // } while (n > 0);
    
// Q-- Check if a number is prime or not?
    // int n;
    // cout << "Enter a number to check if it is prime: ";
    // cin >> n;
    // for (int i=2;i<=n-1;i++) {
    //     if (n % i == 0) {
    //         cout << n << " is not a prime number." << endl;
    //         break;
    //     }else  {
    //         cout << n << " is a prime number." << endl;
    //         break;
    //     }
    // }
//////------------Type 2 Prime Number Check----------------

    // int n;
    // bool isPrime = true;
    // cout << "Enter a number to check if it is prime: "; 
    //  cin >> n;
    //  for(int i = 2; i <= n - 1; i++) {
    //      if (n % i == 0) {
    //          isPrime = false;
    //          break;
         
    //    }
    //          }
    //      if(isPrime==true) {
    //          cout << n << " is a prime number." << endl;
    //      } else {
    //          cout << n << " is not a prime number." << endl;
    //      }
     // ////////////------------Type 3 Prime Number Check----------------
    // int n, i = 2;
    // cout << "Enter a number to check if it is prime: ";
    // cin >> n;
    // if (n <= 1) {
    //     cout << n << " is not a prime number." << endl;
    //     return 0;}
    // while(i*i<=n) {
    //     if (n % i == 0) {
    //         cout << n << " is not a prime number." << endl;
    //         break;
    //     } 
     
    //     i++;
    //     cout << n << " is a prime number." << endl;
    // }

    

// cout << "Enter a number to check if it is prime: ";
// cin >> n;
// while(i <=n-1) {
//     if(n%i==0 && i!=n) {
//         cout << n << " is not a prime number." << endl;
//      break;
//     }
//     else 
//     {
//         i++;
//     }
//         }
//         cout << n << " is a prime number." << endl;

// Q----Nested Loop Example: Multiplication Table
    // int n,m;
    // cout << "Enter a number of n : "<<endl;   
    // cin >> n;
    // // cout << "Enter a number of m : "<<endl;
    // // cin >> m;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //        cout<<"Radhe-Radhe ";  
    //     }
    //     cout <<"Radhe-Radhe " << endl;
    // }
    // Q----Nested Loop Example: Multiplication Table
    // int n;
    // cout << "Enter a number of n : "<<endl;
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout<<"Ram-ji ";}
    //         cout << endl;
    //     }
// Q--Sum of all number form 1 to n which are divisible by 3.
    // int n, sum = 0;
    // cout << "Enter a number of n : "<<endl;
    // cin>>n;
    // for (int i = 1; i <= n; i++) {
    //     if (i % 3 == 0) {
    //         sum += i;
    //     }
    // }
    // cout << "Total sum of numbers divisible by 3 = " << sum << endl;

    // Q-- print factorial of a number n.
    // int n;
    // long long factorial = 1;
    // cout << "Enter a number to find its factorial: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     factorial *= i;
    // }
    // cout << "Factorial of " << n << " is " << factorial << endl;

    
    return 0;
}