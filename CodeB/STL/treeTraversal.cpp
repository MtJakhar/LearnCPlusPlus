#include <iostream>

using namespace std;

/*
  Depth first search- first one line of node and its children

    preorder-(data,left,right)
    inorder-(left,data,right)
    postorder-(left,right,data)


  breath first search- first search the width of tree

*/

struct Node {
  int data;
  Node* left;
  Node* right;
};

Node* createNode(int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->left = newNode->right = nullptr;
  return newNode;
}

void printPreorder(Node* root) {
  if(root == nullptr) return;
  
  cout << root->data << endl;
  printPreorder(root->left);
  printPreorder(root->right);
}

void printInorder(Node* root) {
  if(root == nullptr) return;

  printInorder(root->left);
  cout << root->data << endl;
  printInorder(root->right);
}

void printPostorder(Node* root) {
  if(root == nullptr) return;

  printPostorder(root->left);
  printPostorder(root->right);
  cout << root->data << endl;
}

int main () {
  Node* root = createNode(1);

  root->left = createNode(2);
  root->right = createNode(3);

  root->left->left = createNode(4);
  root->left->right = createNode(5);

  root->right->left = createNode(6);
  root->right->right = createNode(7);

  root->left->right->left = createNode(9);
  root->right->right->left = createNode(15);
}