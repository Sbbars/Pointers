#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Parser(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]=2*arr[i];
    }
    
}


int main(){

    int Arr[] = {21,32,100,500,31};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    Parser(&Arr[0],size);
    for (int i = 0; i < size; i++)
    {
        cout<<"Element at Arr["<<i<<"] is :"<<Arr[i]<<endl;
    }
    

    return 0;

}