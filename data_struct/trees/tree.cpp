#include "tree.h"

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

//前序遍历
void PreOrderTraverse(TreeNodePtr t)
{
    if (NULL == t){
        return; 
    } 

    cout << "value->" << t->data;
    PreOrderTraverse(t->left);
    PreOrderTraverse(t->right);
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

void levelTraverse(TreeNodePtr t)
{
    vector<TreeNodePtr> queue;
    queue.push_back(t); 
    while(queue.size()>0){
     cout << "value\t" << queue[0]->data << endl;    
     //remove date
     if(NULL != queue[0]->left){
        queue.push_back(queue[0]->left); 
     }
     if(NULL != queue[0]->right){
        queue.push_back(queue[0]->right); 
     }
     queue.erase(queue.begin());
    }
}

void insertTree(TreeNodePtr t, int e)
{
    if(NULL == t){
        return;
    }else if(e > t->data){
        if(t->right != NULL){
            insertTree(t->right, e);    
        }else{
            t->right = (TreeNodePtr)malloc(sizeof(TreeNode));  
            t->right->data = e;
            t->right->left = NULL;
            t->right->right = NULL;
        }

    }else if (e < t->data){
        if(NULL != t->left){
            insertTree(t->left, e);    
        }else{
            t->left = (TreeNodePtr)malloc(sizeof(TreeNode));  
            t->left->data = e;
            t->left->left = NULL;
            t->left->right = NULL;
        }
    }else if(e == t->data){
        return ; 
    }
}
