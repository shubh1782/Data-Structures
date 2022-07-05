#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[100];
int i;
int n ; 
cin>>n;

int j = 0;
int k = 0;

int arr_n[100], arr_p[100];

for(int i=0; i<n;i++){
    cin>>arr[i];
}
for(int i=0; i<n;i++){
    if (arr[i] >= 0) {
        arr_p[j]= arr[i];
        j++;
    
    }
    
else {
    arr_n[k]= arr[i];
    k++;
    
}
}

for(i=0; i<j; i++){
    cout << arr_p[i]<< " ";
}
// cout<<endl;
for(i=0; i<k; i++){
    cout << arr_n[i]<< " ";
}



return 0;
}
