/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 class Solution {
   
    private:
 
    void solve(vector<int> & ans,TreeNode * root){
 
      if(root ==  NULL )  return ;
 
      // putting the element in  the  vector.
 
      ans.push_back(root -> val);
 
      solve(ans,root -> left);
      solve(ans,root -> right);
 
 
 
    }
 
 
 public:
     int countNodes(TreeNode* root) {
 
     // here we use the brute force solution
 
     if(root == NULL) return 0; 
 
     vector<int> ans;
     ans.push_back(root -> val);
 
     solve(ans,root -> left); // left call. 
     solve(ans,root -> right); // right call.
 
 
 
     return ans.size();
      
 
      // but here want to solve in the given constraint.
     
 
 
 
     }
 };