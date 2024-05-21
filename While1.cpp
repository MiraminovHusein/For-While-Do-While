#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b;
    int sum = 0;

    cin>>a>>b;

    int i = a - 1;

    while( i < b)
    {
        ++i;
        sum += i;
        cout<<i<<endl;
    }
    cout<<"Sum: "<<sum<<endl;
    main();
}

