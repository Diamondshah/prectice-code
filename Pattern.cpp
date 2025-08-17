#include<iostream>
using namespace std;
int main() {
    // cout<<"hello"<<endl;
    // int n;
    // cout << "Enter a number of n : "<<endl;
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout<<"Diamond ";
    //     }
    //     cout << endl;
    // }   
// ##--------------Square Pattern----------
// -----Easy with numbers--like n=1,2,3...etc. 
    // int n;
    // cout<<"Enter The value of n :\n";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)//😂--=1 miss kar diaa tha maine 
    //     {
    //         cout<<j<<" ";
    //     }cout<<"\n";
    // }

// ///-----Easy with star--like n=1,2,3...etc number of star in square patter. 
    // int n;
    // cout<<"Enter The value of n :\n";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++)//😂
    //     {
    //         cout<<"*"<<" ";
    //     }cout<<"\n";
    // }
                        // -----Charecter Pattern----
        //     int n;
        //     cout<<"Enter the number of charecter : ";
        //     cin>>n;
        //     if(0<n<27){
        //     for(int i=0;i<n;i++){
        //         char ch='A';
        //         for(int j=0;j<n;j++){
        //             cout<<ch<<" ";
        //             ch=ch+1;
        //         }
        //         cout<<"\n";
        //     }
        // }else{
        //     cout<<"Aukat mai rah le ";
        // }
///////// Q---- Number continue not repirt::-----
        int n=3;
        

       
        for(int i=1;i<=n;i++){
          
            for(int j=1;j<=n ;j++){
                cout<<n;
                n=n+1;
            }
            cout<<"\n";
        }
     

    return 0;
}