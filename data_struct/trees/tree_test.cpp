#include "tree.h"
#include <cstdlib>

int main()
{
    //root node    
    TreeNodePtr root = (TreeNodePtr)malloc(sizeof(TreeNode));  
    root->data = 5;
    root->left = NULL;
    root->right = NULL;

    //inser data
    for(size_t i = 0; i < 5; ++i){
        insertTree(root,i);
    }

    for(size_t i = 6; i < 10; ++i){
        insertTree(root,i);
    }

    
    PreOrderTraverse(root);
    MidOrderTraverse(root);
    LastOrderTraverse(root);
    levelTraverse(root);
}
