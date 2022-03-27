#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int *Add(int *x, int *y){
    int *z = (int *)malloc(sizeof(int));
    *z = (*x) + (*y);
    return z;

}

void  Hello(){
    cout<<"Hello world!"<<endl;
}

int main(){
    int a=20,b=30;
    int* Adder = Add(&a,&b);
    Hello();
    cout<<"Addition has value : "<<*Adder<<endl;
    return 0;

}