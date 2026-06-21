// 9️⃣ Swap Nodes whose data is given



#include <iostream>
using namespace std;

// ================= NODE CLASS =================
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// ================= INORDER TRAVERSAL =================
void inorder(Node* root) {

    if (!root)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

// ================= SWAP NODES FUNCTION =================
// x aur y values ko swap karta hai

void swapNodes(Node* root, int x, int y) {

    if (!root)
        return;

    // Left child check
    if (root->left && root->left->data == x)
        root->left->data = y;

    else if (root->left && root->left->data == y)
        root->left->data = x;

    // Right child check
    if (root->right && root->right->data == x)
        root->right->data = y;

    else if (root->right && root->right->data == y)
        root->right->data = x;

    // Recursive calls
    swapNodes(root->left, x, y);
    swapNodes(root->right, x, y);
}

// ================= MAIN FUNCTION =================
int main() {

    /*
               1
             /   \
            2     3
           / \   / \
          4   5 6   7
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Inorder Before Swapping:\n";
    inorder(root);

    // Swap values 4 and 7
    swapNodes(root, 4, 7);

    cout << "\n\nInorder After Swapping 4 and 7:\n";
    inorder(root);

    return 0;
}