// 8️⃣ Create Mirror Image of Binary Tree



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

// ================= MIRROR FUNCTION =================
// Left aur Right child ko swap karta hai

void mirror(Node* root) {

    if (!root)
        return;

    // Swap left and right child
    swap(root->left, root->right);

    // Recursive call
    mirror(root->left);
    mirror(root->right);
}

// ================= MAIN FUNCTION =================
int main() {

    /*
            Original Tree

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

    cout << "Inorder Before Mirror:\n";
    inorder(root);

    // Create Mirror Image
    mirror(root);

    cout << "\n\nInorder After Mirror:\n";
    inorder(root);

    return 0;
}