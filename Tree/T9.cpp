// 🔟 Spiral Order Traversal



#include <iostream>
#include <deque>
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

// ================= SPIRAL ORDER TRAVERSAL =================
// Zig-Zag traversal

void spiralTraversal(Node* root) {

    if (!root)
        return;

    deque<Node*> dq;

    dq.push_back(root);

    bool leftToRight = true;

    while (!dq.empty()) {

        int size = dq.size();

        for (int i = 0; i < size; i++) {

            // Left to Right
            if (leftToRight) {

                Node* temp = dq.front();
                dq.pop_front();

                cout << temp->data << " ";

                if (temp->left)
                    dq.push_back(temp->left);

                if (temp->right)
                    dq.push_back(temp->right);
            }

            // Right to Left
            else {

                Node* temp = dq.back();
                dq.pop_back();

                cout << temp->data << " ";

                if (temp->right)
                    dq.push_front(temp->right);

                if (temp->left)
                    dq.push_front(temp->left);
            }
        }

        // Direction change
        leftToRight = !leftToRight;
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

    cout << "Spiral Order Traversal:\n";

    spiralTraversal(root);

    return 0;
}