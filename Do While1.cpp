#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b;
    int sum = 0;

    cin>>a>>b;

    int i = a - 1;

    do{
        ++i;
        sum += i;
        cout<<i<<endl;
    }


    while( i < b);

    cout<<"Sum: "<<sum<<endl;
    main();
}


