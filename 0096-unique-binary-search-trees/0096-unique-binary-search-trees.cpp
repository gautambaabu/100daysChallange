
class Solution {
public:
    int numTrees(int n) {
        vector<int> T(n+1, 0);
        
        T[0] = T[1] = 1;
        
        for(int r = 2; r <= n; r++){
            for(int mid = 1; mid <= r; mid++){
               
                T[r] += T[mid-1] * T[r-mid];
            }
            // cout << T[r] << " ";
        }
        // cout << endl;
        
        return T[n];
    }
};