class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n=arr.size();
        int flag=0;
        for(int i=n-1;i>=1;i--){
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]) {
                    swap(arr[j],arr[j+1]);
                    flag=1;
                }
            }
            if(flag==0) break;
        }
        
    }
};

#TC: Worst and avg case= O(n^2), Best Case=O(n) [if already sorted array is given]
