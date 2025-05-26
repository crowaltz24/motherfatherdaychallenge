class Solution {
public:
    int find_first_position(vector<int>&nums,int target){
        int ans=-1;
        int l=0,r=nums.size()-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            } else if(nums[mid]>target) r=mid-1;
            else l=mid+1;
        }
        return ans;
    }
    int find_last_position(vector<int>&nums,int target){
        int ans=-1;
        int l=0,r=nums.size()-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            } else if(nums[mid]>target) r=mid-1;
            else l=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=find_first_position(nums,target);
        int r=find_last_position(nums,target);

        return {l,r};
    }
};