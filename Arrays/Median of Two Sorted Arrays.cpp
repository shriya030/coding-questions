https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
    int arr[m+n];
    int i=0, j=0, k=0;
    while(i < n || j < m){
        if(i != n && j != m){
            if(nums1[i] <= nums2[j]){
                arr[k++] = nums1[i++];
            }
            else{
                arr[k++]=nums2[j++];
            }
        }
        else{
            if(i < n){
                arr[k++]=nums1[i++];
            }
            if(j < m){
                arr[k++]=nums2[j++];
            }
        }
    }
       int total = n + m;
        double median;
        if (total % 2 == 0)
            median = (double)(((double)arr[total/2]+(double)arr[(total-1)/2])/2);
        else
            median = (double)arr[(total)/2];
        return median;
    }
};
