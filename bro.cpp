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

    // I Love you Diamond useing Do while loop 
    int n;
    cout << "Enter a number of n : "<<endl;
    cin >> n;
    do
    {
        cout<<n<<"  "<<"I Love You Diamond"<<endl;
        n--;

    } while (n > 0);
    

    return 0;
}