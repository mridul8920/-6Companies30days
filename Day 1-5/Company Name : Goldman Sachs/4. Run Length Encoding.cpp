Expected Time Complexity: O(N), N = length of given string.
Expected Auxiliary Space: O(1)

Problem Link: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#

string encode(string src)
{     
    int c=1,n=src.size();
    string ans="";
    ans+=src[0];
    for(int i=1;i<n;i++){
        if(src[i]==src[i-1])
            c++;
        else{
            ans+=c+'0';         //BY ADDING 0 IT WILL CONVERT INT TO CHAR
            ans+=src[i];
            c=1;
        }
    }
    ans+=to_string(c);          //YOU CAN ALSO USE THE DEFAULT FUNCTION to_string(c) ALSO TO CONVERT INT TO CHAR
    return ans;
}  
