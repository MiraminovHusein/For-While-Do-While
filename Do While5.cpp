#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,sum = 0;

    cin>>a>>b;

    int i = a - 1;

    do{
        ++i;
        sum += pow((i),2);
        cout<<i<<endl;
    }

    while(i < b);

    cout<<"Squares: "<<sum<<endl;
    main();
}



