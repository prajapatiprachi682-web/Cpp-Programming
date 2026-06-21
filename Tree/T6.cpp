// 6️⃣ NON-RECURSIVE Traversals



#include <iostream>
#include <stack>
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

// ================= NON-RECURSIVE INORDER =================
void inorder(Node* root) {

    stack<Node*> s;
    Node* curr = root;

    while (curr || !s.empty()) {

        // Left side me jao
        while (curr) {
            s.push(curr);
            curr = curr->left;
        }

        // Top node nikalo
        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        // Right side move karo
        curr = curr->right;
    }
}

// ================= NON-RECURSIVE PREORDER =================
void preorder(Node* root) {

    if (!root)
        return;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {

        Node* temp = s.top();
        s.pop();

        cout << temp->data << " ";

        // Right pehle push
        if (temp->right)
            s.push(temp->right);

        // Left baad me push
        if (temp->left)
            s.push(temp->left);
    }
}

// ================= NON-RECURSIVE POSTORDER =================
void postorder(Node* root) {

    if (!root)
        return;

    stack<Node*> s1, s2;

    s1.push(root);

    while (!s1.empty()) {

        Node* temp = s1.top();
        s1.pop();

        s2.push(temp);

        if (temp->left)
            s1.push(temp->left);

        if (temp->right)
            s1.push(temp->right);
    }

    // Final Postorder
    while (!s2.empty()) {

        cout << s2.top()->data << " ";
        s2.pop();
    }
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

    cout << "Inorder Traversal:\n";
    inorder(root);

    cout << "\n\nPreorder Traversal:\n";
    preorder(root);

    cout << "\n\nPostorder Traversal:\n";
    postorder(root);

    return 0;
}