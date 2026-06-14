/* balanced frequency array  */

/*
flow : 
0. first take all the freq using unordered_map .

1. If only one distinct value -> true

2. Collect all frequencies

3. If there are not exactly 2 distinct frequencies -> false

4. Let frequencies be x and y

5. Return y == 2*x
*/

  bool isBalanced(unordered_map<int,int>& freq) {

      
        if(freq.size() == 1)
            return true;

        set<int> st;

        for(auto &it : freq) {
            st.insert(it.second);
        }

       
        if(st.size() != 2)
            return false;

        int small = *st.begin();
        int large = *st.rbegin();

        return large == 2 * small;
    }

    int getLength(vector<int>& nums) {

        int n = nums.size();
        int ans = 1;

        for(int l = 0; l < n; l++) {

            unordered_map<int,int> freq;

            for(int r = l; r < n; r++) {

                freq[nums[r]]++;

                if(isBalanced(freq)) {
                    ans = max(ans, r - l + 1);
                }
            }
        }

        return ans;
    }

    /*
    complexity : 
     time :   O(n2)
     space : O(n)
    */