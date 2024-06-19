#include<iostream>
using namespace std;



int main(){

    int arr[] = {1,4,3,2,8,9};

    for(int i=0;i<6;i++){

        for(int j=i+1;j<6;j++){
            if(arr[j]>arr[j+1]){
               cout<<swap(arr[j],arr[j+1]);
            }
        }
    }
}