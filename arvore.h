#ifndef ARVORE_H
#define ARVORE_H


typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;


TreeNode* newNode(int data);
TreeNode* insert(TreeNode* root, int data);
void preorderTraversal(TreeNode* root);
void postorderTraversal(TreeNode* root);
void inorderTraversal(TreeNode* root);
TreeNode* search(TreeNode* root, int key);
int height(TreeNode* root);
void levelOrderTraversal(TreeNode* root);
int countNodes(TreeNode* root);

#endif

