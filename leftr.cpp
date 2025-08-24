#include<bits/stdc++.h>
using namespace std;
void leftr(int arr[],int n){
    int temp= arr[0];
    for(int i=1;i<n;i++){
        
        
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int i;
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter element :"; 
    for(i=0;i<n;i++){
        
        cin>>arr[i];}
  
        leftr(arr,n);
        return 0;
}


