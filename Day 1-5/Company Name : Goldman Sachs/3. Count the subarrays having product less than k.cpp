Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Problem link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int start=0,end=0,count=0,p=1;
        while(end<n){
            p*=a[end];
            while(start<n and p>=k){
                p=p/a[start];
                start++;
            }
            if(p<k)
            count+=end-start+1;
           
            end++;
        }
        return count;
    }
};
