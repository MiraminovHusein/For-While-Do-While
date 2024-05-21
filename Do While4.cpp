#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,sum = 0;
    int i = 0;

    cin>>n;

    do{
        ++i;
        sum += i;
        cout<<i<<endl;
    }

    while(i < n);

    cout<<"Sum: "<<sum<<endl;
    main();
}



