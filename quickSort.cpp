class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low<high){
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int piv=arr[low];
        int i=low,j=high;
        while(i<j){
            while(arr[i]<=piv && i<=high-1 ) i++;
            while(arr[j]>piv && j>=low+1) j--;
            if(i<j) swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[low]);
        return j;
    }
};

#TC: Best, Avg case = O(nlog n), Worst Case = O(n^2) [if the pivot is smallest or largest element, leads to unbalanced partition]
#SC: Recursion stack space- best,avg=O(nlog n)    worst = O(n^2)
