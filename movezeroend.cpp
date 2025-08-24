#include<bits/stdc++.h>
using namespace std;
void movez(int arr[],int n){
   int j=-1;
   int i;
   for(i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
   }
   if(j=-1){
    cout<< arr;
   }
   for(i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
   }
    cout << "Array after moving zeroes to end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    movez(arr, n);

   
    return 0;
}
