class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> p;
        for(int i = 0; i < numbers.size() - 1; i++){
            for(int j = i + 1; j < numbers.size(); j++){
                int t = numbers[i] + numbers[j];
                if(t == target){
                   return{i+1,j+1};
                }
            }
        }
        return {};
    }
};