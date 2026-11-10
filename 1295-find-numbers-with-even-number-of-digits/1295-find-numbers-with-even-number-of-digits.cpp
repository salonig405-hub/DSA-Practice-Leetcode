class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        int cnt=0;

        for(int i=0;i<n;i++){
            int num=nums[i];
            int digits=0;

            while(num>0){
                digits++;
                num=num/10;
            }
            arr[i]=digits;
            if(arr[i] % 2 == 0){
                cnt++;
            }
        }
        return cnt;
    }
};