#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
    
    Node(int val) : data(val), 
    left(nullptr),
    right(nullptr), 
    height(1){}
};
int height(Node* node) {
    if (node == nullptr) return 0;
    return node->height;
}
int balance(Node* node) {
    if (node == nullptr) return 0;
    return height(node->left) - height(node->right);
}
Node* right(Node* y) {
    Node* x = y->left;
    Node* z = x->right;
    x->right = y;
    y->left = z;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
Node* left(Node* x) {
    Node* y = x->right;
    Node* z = y->left;
    y->left = x;
    x->right = z;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

Node* insert(Node* node, int key){
    if(node == nullptr){
        return new Node(key);
    }
    if(key < node->data){
        node->left = insert(node->left, key);
    }else if(key > node->data){
        node->right = insert(node->right, key);
    }else{
        return node;
    }
    node->height = 1 + max(height(node->left), height(node->right));
    int b = balance(node);
    
    if (b > 1 && key < node->left->data) {
        return right(node);
    }
    if (b< -1 && key > node->right->data) {
        return left(node);
    }
    if (b>1 && key > node->left->data) {
        node->left = left(node->left);
        return right(node);
    }
    if (b<-1 && key < node->right->data) {
        node->right = right(node->right);
        return left(node);
    }
    return node;
}
void in_order(Node* root){
    if(root != nullptr){
        in_order(root->left);
        cout << root->data <<" ";
        in_order(root->right);
    }
}
int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 16);
    cout << "In-order traversal of the AVL tree: "<< endl;
    in_order(root);
    cout << endl;
    return 0;
}