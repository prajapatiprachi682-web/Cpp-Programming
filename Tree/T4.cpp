// 4️⃣ Defoliation Process on a Binary Tree



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

// ================= DEFOLIATION FUNCTION =================
// Leaf nodes remove karta hai

Node* defoliate(Node* root) {

    // Empty tree
    if (!root)
        return NULL;

    // Agar leaf node hai
    if (!root->left && !root->right)
        return NULL;

    // Left aur right subtree par call
    root->left = defoliate(root->left);
    root->right = defoliate(root->right);

    return root;
}

// ================= MAIN FUNCTION =================
int main() {

    /*
               1
             /   \
            2     3
           / \   / \
          4   5 6   7

        Leaf nodes = 4, 5, 6, 7
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Inorder before Defoliation:\n";
    inorder(root);

    // Defoliate tree
    root = defoliate(root);

    cout << "\n\nInorder after Defoliation:\n";
    inorder(root);

    return 0;
}