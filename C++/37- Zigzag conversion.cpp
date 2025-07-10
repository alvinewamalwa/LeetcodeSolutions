class Solution {
public:
    string convert(string s, int numRows) {
     vector<string> mat(numRows);
     int n = s.size(), i=0;
     while(i<n){
        for(int j = 0;j<numRows && i<n;j++){
            mat[j].push_back(s[i++]);
        }
        for(int j = numRows-2;j>=1 && i<n;j--){
            mat[j].push_back(s[i++]);
        }
     }   
     string zigzag;
     for(auto ele:mat)zigzag+=ele;
     return zigzag;
    }
};