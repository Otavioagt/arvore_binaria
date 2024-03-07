#include "arvore.h"
#include <stdio.h>

int main() {
    TreeNode* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Preorder traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorderTraversal(root);
    printf("\n");

    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    int key = 40;
    TreeNode* result = search(root, key);
    if (result != NULL) {
        printf("%d found in the tree.\n", key);
    } else {
        printf("%d not found in the tree.\n", key);
    }

    printf("Height of the tree: %d\n", height(root));

    printf("Level order traversal: ");
    levelOrderTraversal(root);
    printf("\n");

    printf("Total nodes in the tree: %d\n", countNodes(root));

    return 0;
}
