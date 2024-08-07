class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr[1000];
        int value=0;
        for(int i=0; i<m; i++){
        
            arr[i]=nums1[i];
            value++;
            
        }
        for(int i=0; i<n; i++){
     
            nums1[value]=nums2[i];
            value++;
            
        }

        for(int i=0; i<value-1; i++){
            for(int j=0; j<value-i-1; j++){
                if(nums1[j]>=nums1[j+1]){
                    int temp=nums1[j];
                    nums1[j]=nums1[j+1];
                    nums1[j+1]=temp;    
                }
            }
        }
    
        
    }
};