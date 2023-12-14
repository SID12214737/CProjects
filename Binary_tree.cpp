#include <iostream>
using namespace std;

struct Node{
int data;
Node* left;
Node* right;
};

Node* createNode(int data) {
Node* newNode = new Node();
if (!newNode) {
cout << "memory eror" << endl;
return NULL;
}
newNode->data = data;
newNode->left = newNode->right = NULL;
}

Node* insertNode(Node* root, int data) {
if (root == NULL) {
root = createNode(data);
return root;
}

if (data < root->data) {
root->left = insertNode(root->left, data);

}
else {
root->right = insertNode(root->right, data);
}

return root;
}

Node* insertNode(Node* root, int data, int side) {
if (root == NULL) {
cout << "Parent Root cannot be null" << endl;
return NULL;
}
if (side == 0) {
root->left = createNode( data);
return root->left;
}else if (side == 1) {
root->right = createNode( data);
return root->right;

}

};

void inorder(Node* root) {
if (root) {
inorder(root->left);
cout << char(root->data) << " ";
inorder(root->right);
}
}
void inorderint(Node* root) {
if (root) {
inorderint(root->left);
cout << int(root->data) << " ";
inorderint(root->right);
}
}

void search(Node* root, int data) {

if (data < root->data) {
cout << "<-";
search(root->left, data);
}
else if (data > root->data) {
search(root->right, data);
cout << "->";

}

}

int main() {
Node* root = NULL;
Node* biroot = NULL;
root = insertNode(root, 'j');

Node* nodef = insertNode(root, 'f', 0);
Node* noded = insertNode(nodef, 'd', 0);
Node* nodeg = insertNode(nodef, 'g', 1);
Node* nodec = insertNode(noded, 'c', 0);
Node* nodep = insertNode(root, 'p', 1);
Node* nodel = insertNode(nodep, 'l', 0);
Node* noden = insertNode(nodel, 'n', 1);

inorder(root);

biroot = insertNode(biroot, 65);
insertNode(biroot, 15);
insertNode(biroot, 75);
insertNode(biroot, 8);
insertNode(biroot, 15);
insertNode(biroot, 35);
insertNode(biroot, 79);
insertNode(biroot, 84);
insertNode(biroot, 37);
insertNode(biroot, 80);
insertNode(biroot, 105);
insertNode(biroot, 55);
insertNode(biroot, 42);
insertNode(biroot, 95);
insertNode(biroot, 155);
insertNode(biroot, 57);
insertNode(biroot, 130);
insertNode(biroot, 18);
cout << endl;
search(biroot, 35);
cout << endl;

inorderint(biroot);



}
