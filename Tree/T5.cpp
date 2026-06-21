// 5️⃣ Check whether a Binary Tree is Symmetric



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

// ================= CHECK MIRROR FUNCTION =================
bool isMirror(Node* a, Node* b) {

    // Dono NULL hain
    if (!a && !b)
        return true;

    // Ek NULL hai aur ek nahi
    if (!a || !b)
        return false;

    // Data same hona chahiye
    // Left ↔ Right mirror check
    return (a->data == b->data) &&
           isMirror(a->left, b->right) &&
           isMirror(a->right, b->left);
}

// ================= CHECK SYMMETRIC TREE =================
bool isSymmetric(Node* root) {

    if (!root)
        return true;

    return isMirror(root->left, root->right);
}

// ================= MAIN FUNCTION =================
int main() {

    /*
                1
              /   \
             2     2
            / \   / \
           3   4 4   3

        Ye Symmetric Tree hai
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(2);

    root->left->left = new Node(3);
    root->left->right = new Node(4);

    root->right->left = new Node(4);
    root->right->right = new Node(3);

    // Check Symmetric Tree
    if (isSymmetric(root))
        cout << "Tree is Symmetric";
    else
        cout << "Tree is NOT Symmetric";

    return 0;
}