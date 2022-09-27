#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums) {
        int result =0,length=0,maxi=0;
        
        for(int i=0; i<nums.size(); i++){
            maxi = max(nums[i],maxi);
        }
        
        for(int ele: nums){
            if(ele == maxi) length++;
            else length = 0;
            
            result = max(result,length);
        }
        return result;
}
 int main()
 {
    int n;
    cin>>n;
    int nums[n];
    vector<int> arr;
    for(int i=0; i<n; i++){
      cin>>nums[i];
      arr.push_back(nums[i]);
   }
    
   int result = longestSubarray(arr);
   cout<<result;
    return 0;
 }
 