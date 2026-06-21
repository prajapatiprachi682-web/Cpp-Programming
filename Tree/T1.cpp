// 1️⃣ Program to check whether a given tree is ACBT (Almost Complete Binary Tree)



#include <iostream>
#include <queue>
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

// ================= CHECK ACBT FUNCTION =================
// ACBT = Almost Complete Binary Tree

bool isACBT(Node* root) {
    if (!root)
        return true;

    queue<Node*> q;
    q.push(root);

    bool flag = false;

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // Agar NULL mila
        if (temp == NULL) {
            flag = true;
        }
        else {

            // Agar NULL ke baad koi node mili
            // to tree complete nahi hai
            if (flag)
                return false;

            q.push(temp->left);
            q.push(temp->right);
        }
    }

    return true;
}

// ================= MAIN FUNCTION =================
int main() {

    /*
            1
          /   \
         2     3
        / \   /
       4   5 6

       Ye ACBT hai
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);

    // Check ACBT
    if (isACBT(root))
        cout << "Tree is Almost Complete Binary Tree";
    else
        cout << "Tree is NOT Almost Complete Binary Tree";

    return 0;
}