#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* left;
	Node* right;
	};
Node* newNode(int data) {
	Node* newNode=new Node();
	newNode->data =data;
	newNode->left = newNode->right =NULL;
	return newNode;
	}
void Inorder(Node* root) {
	if(root!=NULL){
	Inorder(root->left);                                                   
	cout<< root->data;
	Inorder(root->right);
	}
}
Node* insert(Node* root,int data) {
	if(root == NULL) {
	root = newNode(data);
	}
	else if(data < root->data) {
	root->left = insert( root->left ,data);
	}
	else if( data > root -> data) {
	root->right =insert(root->right,data);
	}
	return root;
	}

int main(){
	Node* root;
	root = insert(root,10);
	root = insert(root ,30);
	root = insert(root ,20);
	root = insert(root , 25);
	Inorder(root);
	return 0;
	}
