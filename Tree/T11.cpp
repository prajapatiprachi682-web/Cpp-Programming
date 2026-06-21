// 1️⃣2️⃣ Convert Binary Tree ↔ Array



#include <iostream>
#include <vector>
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

// ================= TREE TO ARRAY =================
// Level Order Traversal use hua hai

void treeToArray(Node* root, vector<int>& arr) {

    if (!root)
        return;

    queue<Node*> q;

    q.push(root);

    while (!q.empty()) {

        Node* temp = q.front();
        q.pop();

        arr.push_back(temp->data);

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }
}

// ================= ARRAY TO TREE =================

Node* arrayToTree(vector<int>& arr, int i) {

    // Out of range
    if (i >= arr.size())
        return NULL;

    Node* root = new Node(arr[i]);

    // Left child
    root->left = arrayToTree(arr, 2 * i + 1);

    // Right child
    root->right = arrayToTree(arr, 2 * i + 2);

    return root;
}

// ================= INORDER TRAVERSAL =================
void inorder(Node* root) {

    if (!root)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
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

    // ================= TREE TO ARRAY =================
    vector<int> arr;

    treeToArray(root, arr);

    cout << "Array Representation:\n";

    for (int x : arr)
        cout << x << " ";

    // ================= ARRAY TO TREE =================
    Node* newRoot = arrayToTree(arr, 0);

    cout << "\n\nInorder Traversal of Recreated Tree:\n";

    inorder(newRoot);

    return 0;
}