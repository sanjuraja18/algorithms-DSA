#include <iostream>
using namespace std;
void insrt(int arr[], int s){
    for(int i=1; i<s; i++){
        int chotu=i;
        while(chotu>0 && arr[chotu]<arr[chotu-1]){
            int tem;
            tem=arr[chotu-1];
            arr[chotu-1]=arr[chotu];
            arr[chotu]=tem;
            chotu--;
        }
    }
}
int main(){
    int arr[]={3,1,4,2,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    insrt(arr,s);
    cout<<"\nAfter appling insertion sort\n";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
}