#include <iostream>
using namespace std;

int main() {
	//code
	int q;
	cin>>q;
	
	int *arr[q];
	int arr_len[q]
	int n;

	for(int i=0;i<q;i++)
	{
	    cin>>n;
	    arr_len[i]=n;
        int * arr1= new int[n];    
	    arr[i]= arr1;
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr1[j];
	    }
	}
	
	
	for(int i =0;i<q;i++)
	{
	    int arr_cir[arr_len[i]];
	    for(int j=0;j<arr_len[i];j++)
	    {
	        arr_cir[i]=*arr[i]+j;
	        cout<<"------\n"<<arr_cir[j]<<"\n-----------\n";
	        
	    }
	}
	
	
	return 0;
}