Problem link: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& ana) {
        //code here
        vector<vector<string>>v;
        map<string,vector<string>>m;
        for(int i=0;i<ana.size();i++){
            string s=ana[i];
            sort(s.begin(),s.end());
            m[s].push_back(ana[i]);
        }
        
        for(auto i:m){
            v.push_back(i.second);
        }
    return v;
    }
};
