class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int midx = m - 1;
        // int nidx = n - 1;
        // int right = m + n - 1;

        // while (nidx >= 0) {
        //     if (midx >= 0 && nums1[midx] > nums2[nidx]) {
        //         nums1[right] = nums1[midx];
        //         midx--;
        //     } else {
        //         nums1[right] = nums2[nidx];
        //         nidx--;
        //     }
        //     right--;
        // }
        int i=0;
        int j=0;
        vector<int>unionarr;
        while(i<m&&j<n)
        {
          if (nums1[i]<=nums2[j]){
            if(1)
            {
                unionarr.push_back(nums1[i]);
            }
            i++;
          }
          else
          {
            if(1)
            {
                unionarr.push_back(nums2[j]);
            }
            j++;
          }
        }  
        while(j<n){
            if(1)
            {
                unionarr.push_back(nums2[j]);
            }
            j++;
        }   
        while(i<m){
            if(1)
            {
                unionarr.push_back(nums1[i]);
            }
            i++;
        }   
        nums1=unionarr;
    }

};