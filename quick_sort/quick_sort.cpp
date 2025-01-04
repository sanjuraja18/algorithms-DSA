#include <iostream>
using namespace std;
int divide(int arr[],int low, int high){
    int pv=arr[low];
    int i=low+1;
    int j=high;
    int tem;
    do{
        while(arr[i]<pv){
            i++;
        }
        while(arr[j]>pv){
            j--;
        }
        if(i<j){
            tem=arr[j];
            arr[j]=arr[i];
            arr[i]=tem;
        }
    }while(i<j);
    tem=arr[j];
    arr[j]=arr[low];
    arr[low]=tem;
    return j;
}
void qksort(int arr[], int low,int high){
    int pivot;
    if(low<high){
        pivot=divide(arr,low,high);
        qksort(arr,low,pivot-1);
        qksort(arr,pivot+1,high);
    }
}
int main(){
int arr[]={5,2,3,5,8,10,9};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
    qksort(arr,0,s-1);
    cout<<"\nAfter appling insertion sort\n";
    for(int i=0; i<s; i++){
        cout<<arr[i]<<"\t";
    }
}