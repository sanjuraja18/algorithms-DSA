#include <iostream>
using namespace std;

void select(int arr[], int s){
    for(int i=0; i<s; i++){
        int chotu=i;
        for(int j=chotu+1; j<s; j++){
            if(arr[chotu]>arr[j]){
                chotu=j;
            }
        }
        if(chotu!=1){
            int tem;
            tem=arr[chotu];
            arr[chotu]=arr[i];
            arr[i]=tem;
        }
    }
}

int main(){
    int arr[]={4,2,3,6,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    select(arr,s);
    cout<<"\nAfter appling selection sort\n";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
}