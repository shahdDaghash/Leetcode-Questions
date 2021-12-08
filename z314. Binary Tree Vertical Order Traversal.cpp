/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int minCol = 0;
int maxCol = 0;


vector<vector<int>> PrintColumnsOfTree (TreeNode* root){
    int col = 0;
    map<int,vector<int>> table;
    InsertToVector(table, root, col);
    
    
    vector<vector<int>> ans (maxCol-minCol+1);
    int diff = 0 - minCol;
    for(int i=minCol; i<=maxCol; i++){
        ans[i+diff] = mp[i];
    }
    
    return ans;
    
}


void InsertToVector(map<int,vector<int>>& table, TreeNode* node, int col){
    map[col].push_back(node->val);
    minCol = min(minCol, col);
    maxCol = max(maxCol, col);
    
    if(node->right){
        InsertToVector(table, node->right, col+1);
    }
    if(node->left){
        InsertToVector(table, root->left, col-1);
    }
}



