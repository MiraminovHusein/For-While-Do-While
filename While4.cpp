#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,sum = 0;
    int i = 0;

    cin>>n;

    while(i < n)
    {
        ++i;
        sum += i;
        cout<<i<<endl;
    }
    cout<<"Sum: "<<sum<<endl;
    main();
}


