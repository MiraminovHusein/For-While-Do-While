#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,n;

    cin>>a>>b;

    n = b - a + 1;

    int i = b + 1;

    while( i > a)
    {
        --i;
        cout<<i<<endl;
    }
    cout<<"N: "<<n<<endl;
    main();
}


