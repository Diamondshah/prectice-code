int n, oddsum = 0;
    cout << "Enter a number of n : "<<endl;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        if(i%2!=0){
            oddsum=oddsum+i;
        }
    }    
         cout<<"Total sum ="<<sum<<endl;
