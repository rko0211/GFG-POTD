class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int bs(int arr[], int n, int x){
		    int i=0;
		    int j = n-1;
		    int ans = -1;
		    while(i<=j){
		        int mid = (i+(j-i)/2);
		        if(arr[mid]>=x){
		            ans = mid;
		            j=mid-1;
		        }
		        else{
		            i = mid+1;
		        }
		        
		    }
		    return ans;
		}
		
		int bsl(int arr[], int n, int x){
		    int i=0;
		    int j = n-1;
		    int ans = -1;
		    while(i<=j){
		        int mid = (i+(j-i)/2);
		        if(arr[mid]<=x){
		            ans = mid;
		            i=mid+1;
		        }
		        else{
		            j = mid-1;
		        }
		        
		    }
		    return ans;
		}
		
	int count(int arr[], int n, int x) {
	    // code here
	    if(x<arr[0] || x>arr[n-1]){
	        return 0;
	    }
	    int firstindex = bs(arr,n,x);
	    int lastindex  = bsl(arr,n,x);
	    return (lastindex-firstindex+1);
	}
};
