#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b;

    cin>>a>>b;

    int i = a-1;

    if(a%2 == 1) a = ((a/2)+1)*2;
    if(b%2 == 1) b = ((b/2)+1)*2;

    do{
        i+=2;
        cout<<i<<endl;
    }

    while(i < b);
    main();
}



