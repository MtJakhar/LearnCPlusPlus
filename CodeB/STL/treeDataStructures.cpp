#include <iostream>

using namespace std;

/*
  tree
  -a single part of a tree is called a node;
  -edges are what connect nodes
  -children are not allowed to create a edge between together
  -children can have their own children
  -the root node is the node that doesnt have parents, and is the staring point of the tree
  -leaf node are nodes that dont have children.

  -regular tree
  -parent-child relationship
  -fluctuating amount of children

  -binary tree
  -each parent cant have more than two child nodes

  -binary search tree (BST)
  -data is organized in a specific way
  -left child has lower value, while right has higher value
  -used to faciliate the search of these elements

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
};

int main () {
  Node* root =createNode(1);

  root->left = createNode(2);
  root->right = createNode(3);

  root->left->left = createNode(4);
}