class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
    int N = a.size();
    vector <int> result;
    unordered_map <int , int> frequency;
    for(int &x : a)
        frequency[x]++;
    for(auto &x : frequency)
        if(x.second > N / 3)
            result.emplace_back(x.first);
    return result;
    }
};