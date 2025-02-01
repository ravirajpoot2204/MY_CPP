class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      unordered_map<int ,int> map;
      vector<int> arr;
      for(int num : nums){
        map[num]++;
      }  
    for(auto& pair : map){
        if(pair.second == 2){
            arr.push_back(pair.first);
        }
        }
    return arr;
    }
};