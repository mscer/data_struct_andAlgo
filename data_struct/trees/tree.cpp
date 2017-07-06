#include "tree.h"
#include <iostream>

using namespace std;

//前序遍历
void PreOrderTraverse(TreeNodePtr t)
{
    if (NULL == t){
        return; 
    } 

    cout << "value->" << t->data;
    PreOrderTraverse(t->left)
    PreOrderTraverse(t->right)

    
}

//中序遍历
void MidOrderTraverse(TreeNodePtr t)
{
    if(NULL == t){
        return; 
    }
    MidOrderTraverse(t->left);
    cout << "value->" << t->data << endl;
    MidOrderTraverse(t->right);
}

//后序遍历
void LastOrderTraverse(TreeNodePtr t)
{
    if(NULL == t){
        return;   
    } 

    LastOrderTraverse(t->left);
    LastOrderTraverse(t->right);
    cout << "value->" << t->data << endl;

}
