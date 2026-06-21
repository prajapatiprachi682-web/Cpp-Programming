// 3️⃣ Program to check whether a given tree is Fibonacci Tree



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

// ================= FIND SIZE OF TREE =================
int size(Node* root) {

    if (!root)
        return 0;

    return 1 + size(root->left) + size(root->right);
}

// ================= CHECK FIBONACCI NUMBER =================
bool isFibonacci(int n) {

    int a = 0;
    int b = 1;

    while (b < n) {

        int c = a + b;

        a = b;
        b = c;
    }

    return (b == n || n == 0);
}

// ================= CHECK FIBONACCI TREE =================
bool isFibonacciTree(Node* root) {

    // Empty tree valid hai
    if (!root)
        return true;

    // Current subtree ka size
    int s = size(root);

    // Size Fibonacci hona chahiye
    // aur left/right subtree bhi Fibonacci Tree hone chahiye
    return isFibonacci(s) &&
           isFibonacciTree(root->left) &&
           isFibonacciTree(root->right);
}

// ================= MAIN FUNCTION =================
int main() {

    /*
              1
            /   \
           2     3
          / \
         4   5

         Total nodes = 5
         5 Fibonacci number hai
    */

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Check Fibonacci Tree
    if (isFibonacciTree(root))
        cout << "Tree is Fibonacci Tree";
    else
        cout << "Tree is NOT Fibonacci Tree";

    return 0;
}