/*
Runtime:-
128 ms
Beats
94.65%

Memory:-
57.1 MB
Beats
93.29%

Logic:-
I use a siple but efficient way to find the duplicate items. First sort the array and check if 
there are two same elements one after another if yes then return true otherwise return false.
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
                return true;
        return false;
    }
};