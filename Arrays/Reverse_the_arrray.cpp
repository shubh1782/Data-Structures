#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
	//inputting the number of test cases
	int t ;
	cin>>t;
	while(t--){
	    //setting the limit for size of array
	    int n;
	    cin>>n;
	    
	   // inputting the array
	    int arr[100];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    
	    for(int i =0; i<n; i++){
	    cout<<arr[n-1-i]<<" ";}
	 }
	 
	return 0;
}
