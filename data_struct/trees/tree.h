#ifndef TREE_H
#define TREE_H

typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
}*TreeNodePtr;

//前序遍历
void PreOrderTraverse(TreeNodePtr t);

//中序遍历
void MidOrderTraverse(TreeNodePtr t);

//后序遍历
void LastOrderTraverse(TreeNodePtr t);

//层序遍历
void levelTraverse(TreeNodePtr t);

//insert tree
void insertTree(TreeNodePtr t, int e);

#endif
