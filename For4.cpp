#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,sum = 0;

    cin>>n;

    for(int i = 1; i <= n; ++i)
    {
        sum += i;
        cout<<i<<endl;
    }
    cout<<"Sum: "<<sum<<endl;
    main();
}

