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
        // int n;
        // cout<<"Enter the Number of colume : ";
        // cin>>n;
        // int num=1;  
        // for(int i=1;i<=n;i++){
        //   for(int j=1;j<=n ;j++){
        //         cout<<num<<" ";
        //         num++;  }
        //   cout<<"\n";
        //      }
        // cout<<"after pattern num = "<<num;

/////////Q---- Charecter continue not repirt::-----
        // int n=4; 
        // char ch='A';  
        // for(int i=1;i<=n;i++){
        //   for(int j=1;j<=n ;j++){
        //         cout<<ch<<" ";
        //         ch=ch+1;  }
        //   cout<<"\n";
        //      }
        // cout<<"after pattern num = "<<ch;
     
/////////// _____----------Triangle Pattern----------__________
    // int n;
    // cout<<"Enter the number of row : ";
    // cin>>n;
    // // 1. Right angle triangle pattern
    //         for(int i=1;i<=n;i++){
    //             for(int j=1;j<=i;j++){
    //                 cout<<"* ";
    //             }cout<<"\n";
    //         }
//////// triangle Patterns For Number of Rows
// Right angle triangle pattern with numbers
            // 1         
            // 2 2       
            // 3 3 3     
            // 4 4 4 4   
            // 5 5 5 5 5 
        // int n,num=1;
        // cout<<"Enter the number of row : ";
        // cin>>n;
        
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=i;j++){
        //         cout<<num<<" ";
        //     }cout<<"\n";
        //     num++;
        // }
// Right angle triangle pattern with alphabets
            // A         
            // B B       
            // C C C     
            // D D D D   
            // E E E E E

        // int n;
        // cout<<"Enter the number of row : ";
        // cin>>n;
        // char ch='A';
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=i;j++){
        //         cout<<ch<<" ";
        //     }cout<<"\n";
        //     ch++;
        // }
// Right angle triangle pattern with numbers increasing
            // 1 
            // 1 2
            // 1 2 3
            // 1 2 3 4
            // 1 2 3 4 5


        //  int n;
        // cout<<"Enter the number of row : ";
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=i;j++){
        //         cout<<j<<" ";
        //     }cout<<"\n";
        // }
// Right angle triangle pattern with numbers increasing in backward order
            // 1 
            // 2 1
            // 3 2 1
            // 4 3 2 1
            // 5 4 3 2 1

        int n;
        cout<<"Enter the number of row : ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=i;j>=1;j--){
                cout<<j<<" ";
            }cout<<"\n";
        }
           

    // Right angle triangle pattern with alphabets increasing
            // A 
            // A B
            // A B C
            // A B C D
            // A B C D E

        // int n;
        // cout<<"Enter the number of row : ";
        // cin>>n;
        // char ch='A';
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=i;j++){
        //         cout<<ch<<" ";
                
        //     }cout<<"\n";
            
        // }
    return 0;
}