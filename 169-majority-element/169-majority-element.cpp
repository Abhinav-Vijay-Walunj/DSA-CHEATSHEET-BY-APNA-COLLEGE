class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt=0,ele=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt == 0)
            {
                ele = nums[i];
            }
            if(nums[i] == ele)
            {
                    cnt+=1;
            }
            else
            {
                cnt-=1;
            }
        }
            return ele;
        }
        /*
        unordered_map<int, int> counter;
        for (int num : nums) {
            if (++counter[num] > nums.size() / 2) {
                return num;
            }
        }
        return 0;*/
        /*
        int m;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    c++;
                }
                if(c>n/2)
                {
                    m=nums[i];
                    break;
                }
            }
            
        }
        return m;
        
        */
    
};