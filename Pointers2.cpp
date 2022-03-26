#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a =1025;
    int *p;
    p = &a;
    cout<<p<<" "<<*p<<endl;
    cout<<*p+1<<" "<<*(p+1)<<endl;
    char *p1;
    p1 = (char*)p;
    cout<<p1<<" "<<*p1<<endl;
    cout<<p1+1<<" "<<*(p1+1)<<endl;

    void *p2 = &a;
    cout<<p2<<endl;

    return 0;

}