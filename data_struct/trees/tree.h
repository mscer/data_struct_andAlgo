#ifndef TREE_H
#define TREE_H

typedef struct TreeNode{
    int data;
    struct TreeNoe *left, *right;
}*TreeNodePtr;

//前序遍历
void PreOrderTraverse(TreeNodePtr t);

//中序遍历
void MidOrderTraverse(TreeNodePtr t);

//后序遍历
void LastOrderTraverse(TreeNodePtr t);

#endif
