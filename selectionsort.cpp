#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }

        }
         int temp = arr[min];
                arr[min]=arr[i];
                arr[i]=temp;

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
        selection(arr,n);
        for(i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;

    }

