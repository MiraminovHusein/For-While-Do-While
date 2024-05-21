#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,sum = 0;

    cin>>a>>b;

    int i = a - 1;

    while(i < b)
    {
        ++i;
        sum += pow((i),2);
        cout<<i<<endl;
    }
    cout<<"Squares: "<<sum<<endl;
    main();
}


