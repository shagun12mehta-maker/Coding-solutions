class Solution {
public:
    void reverseString(vector<char>& s) {
//         vector<char> ans;
    int n=s.size();
//         for(int i=n-1;i>=0;i--){
//             ans.push_back(s[i]);
//         }
//      s=ans;   
//     }
// };
int l=0;
int r=n-1;
int temp;
while(l<r){
    temp=s[l];
    s[l]=s[r];
    s[r]=temp;
    l++;
    r--;

}
}};