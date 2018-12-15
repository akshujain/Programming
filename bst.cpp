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

bool SearchNode(Node* root,int data) {
    if(root == NULL){
        return false;
    }
    else if(root->data == data) {
        return true;
    }
    else if(data <= root->data) {
        return SearchNode(root->left,data);
    }
    else {
        return SearchNode(root->right,data);
    }
}
int main(){
	Node* root;
	root = insert(root,10);
	root = insert(root ,30);
	root = insert(root ,20);
	root = insert(root , 25);
	Inorder(root);
	int number;
	cout<<"Enter a number";
	cin>>number;
	if(SearchNode(root,number)==true) {
	    cout<<"found";
	}
        else {
	      cout<<"Data not found";
        }
	return 0;
	}
