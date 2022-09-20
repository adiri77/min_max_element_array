#include<iostream>
using namespace std;
int max(int arr[],int n){
    int max=INT8_MIN;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int n){
    int min=INT8_MAX;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<<"ENTER SIZE OF ARRAY"<<" ";
    cin>>size;
    int ar[100];
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
   int m= max(ar,size);
    int n= min(ar,size);
   cout<<"MAX ELEMENT OF ARRAY IS"<<" "<<m<<endl;
   cout<<"MIN ELEMENT OF ARRAY IS"<<" "<<n;
}