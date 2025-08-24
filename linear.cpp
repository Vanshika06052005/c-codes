#include <bits/stdc++.h>
using namespace  std;

//print linear number from a to n using recursion
void f(int i, int n){
    if(i>n){
        return;
    }
    cout<<i;
    f(i+1,n);

}
int main(){
    int s;
    cout<< "enter number";
    cin>>s;
    f(1,s);
    return 0;
}