class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> temp;
        temp = arr;

        sort(temp.begin(), temp.end());

        unordered_map<int, int> el_rank;

        int rank = 1;

        for (int i = 0; i < temp.size(); i++) {

            if (el_rank.find(temp[i]) == el_rank.end()) {
                el_rank[temp[i]] = rank;
                rank++;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = el_rank[arr[i]];
        }

        return arr;
    }
};