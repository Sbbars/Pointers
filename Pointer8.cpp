#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void MultiDemensional(int (*A)[2][2]){

    cout<<"Printing element :"<<*(*(*(A)+1)+1);


}

int main(){


    int B[2][3]={{3,5,2},{1,4,100}};
    int C[3][2][2]={{{2,5},{5,6}},
                    {{3,4},{7,8}},
                    {{9,10},{11,13}}};
                    
                    
    MultiDemensional(C);

    
    // int Arr[2][3]={2,3,6,4,5,8};
    // int (*ptr)[3]=Arr ;
    // cout<<"Address of first row and three columns : "<<*(*Arr+3)<<endl;
    // cout<<"Address of second row and three columns : "<<*(Arr[1]+2)<<endl;
    // cout<<"Address of first element of first array : "<<&Arr[0][0]<<endl;
    // cout<<"Address of first element of second array : "<<&Arr[1][0]<<endl;
    // cout<<"Point to one d array : "<<Arr+2<<endl;
    // cout<<*(*ptr+4) <<endl;

    

    return 0;

}