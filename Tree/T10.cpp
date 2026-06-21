// 1️⃣1️⃣ Convert Doubly Linked List → Binary Tree



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

// ================= INSERT IN DLL =================
void insert(Node*& head, int val) {

    Node* newNode = new Node(val);

    // First node
    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->right)
        temp = temp->right;

    temp->right = newNode;
    newNode->left = temp;
}

// ================= INORDER TRAVERSAL =================
void inorder(Node* root) {

    if (!root)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

// ================= CONVERT DLL TO BINARY TREE =================
Node* convertDLLtoBT(Node*& head) {

    if (!head)
        return NULL;

    // Current node root banega
    Node* root = head;

    // Head next node par move
    head = head->right;

    // Recursive creation
    root->left = convertDLLtoBT(head);
    root->right = convertDLLtoBT(head);

    return root;
}

// ================= MAIN FUNCTION =================
int main() {

    /*
        Doubly Linked List:
        1 <-> 2 <-> 3 <-> 4 <-> 5
    */

    Node* head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    // Convert DLL to Binary Tree
    Node* root = convertDLLtoBT(head);

    cout << "Inorder Traversal of Binary Tree:\n";

    inorder(root);

    return 0;
}