#include<iostream>
using namespace std;
int main(){
    // int arr[5]  = {1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[5] = {1,2,4,5};
    for(int i=4;i>2;i--){
        arr[i] = arr[i-1];
    }
    arr[2] = 990;
    for(auto y:arr){
        cout<<y<<endl;
    }

}