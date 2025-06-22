class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans ; 
        ans.insert(ans.end() , nums1.begin() , nums1.begin() + m ) ;
        ans.insert(ans.end() , nums2.begin() , nums2.begin() + n ) ;
        sort(ans.begin(), ans.end());  //remember to sort, because it is the question they require sorted ans.
        nums1 = ans; //nums1 is passed by reference, so you should write this line so the original copy is updated, not copied
    
    }
};
