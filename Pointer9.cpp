#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int a;
    int *p,*p1;
    p = new int;
    *p = 100;
    cout<<"Memory allocated "<<endl;
    delete p;
    cout<<"Memory realease "<<endl;
    p = new int[20];
    cout<<"Memory allocated again "<<endl;
    delete[] p ;
    cout<<"Memory realeased again "<<endl;
    
    


    // p = (int *)malloc(5*sizeof(int));
    // p[0] = 0;
    // p[1] = 10;
    // p[2] = 110;
    // p[3] = 1110;
    // p[4] = 1110;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Memory allocation done at "<<i<<" with value "<<p[i]<<endl;
    // }
    // cout<<"Memory free done at "<<endl;
    // free(p);
    // *p = 10;
     // cout<<"Memory allocated in heap : "<<*p<<endl;
    // free(p);
    // cout<<"Memory is free now .."<<endl;
    // return 0;

}