#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                nums.erase(nums.begin()+i,nums.begin()+i+1);
                i--;
            }
        }
        return nums.size();
    }
};
int main(){
	Solution s;
	vector<int> vec = {};
	int ans = s.removeDuplicates(vec);
    cout << ans << endl;
	return 0;
};