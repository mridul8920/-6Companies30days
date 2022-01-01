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