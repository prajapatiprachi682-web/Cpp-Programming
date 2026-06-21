// 2️⃣ Program to check whether a given tree is CBT (Complete Binary Tree)



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

// ================= CHECK CBT FUNCTION =================
// CBT = Complete Binary Tree

bool isCBT(Node* root) {

    // Empty tree is CBT
    if (root == NULL)
        return true;

    queue<Node*> q;
    q.push(root);

    bool flag = false;

    while (!q.empty()) {

        Node* temp = q.front();
        q.pop();

        // NULL node mili
        if (temp == NULL) {
            flag = true;
        }
        else {

            // NULL ke baad koi node mili
            // to CBT nahi hoga
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

         Ye Complete Binary Tree hai
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);

    // Check CBT
    if (isCBT(root))
        cout << "Tree is Complete Binary Tree";
    else
        cout << "Tree is NOT Complete Binary Tree";

    return 0;
}