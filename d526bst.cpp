#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};
Node* insert(int data,Node* root)
{
	if(root==NULL){
		root=new Node();
		root->data=data;
		root->left=NULL;
		root->right=NULL;
	}
	else{
		if(data>=root->data){
			root->right= insert(data, root->right);
		}
		else{
			root->left= insert(data, root->left);
		}
	}
	return root;
}
void preorder(Node* root)
{
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main(){
    int n;
    Node* root=NULL;
    while(cin>>n){
    	for(int i=0;i<n;i++){
    		int data;
    		cin>>data;
    		root=insert(data,root);
    	}
    	preorder(root);
    	cout<<"\n";
    	root=NULL;
    }	
}