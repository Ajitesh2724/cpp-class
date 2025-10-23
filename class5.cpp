// RECURSION ->  base case + recusive case
//base case => smallest possible case 



#include<iostream>
using namespace std;
// int fact(int n){
//         if(n==0) return 1;
//         return fact(n-1)*n;
//     }

void revArr(int arr[], int n, int l, int r){
    if(r<=l) return;
    swap(arr[r],arr[l]);
    revArr(arr,n,l+1,r-1);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    revArr(arr,5,0,4);
    int i=0;
    while(i<5){
        cout << arr[i] << " ";
        i++;
    }



}