#include <iostream>
using namespace std;

int pre_index=0;
struct Node
{
	char data;
	Node* left;
	Node* right;
};
Node* buildtree(int left,int right){
	Node* root=new Node();
	int in_index=find_index(in,pre_index);
	root->left=buildtree(left,in_index);
	root->right=buildtree(in_index+1,right);
	root->data=in[in_index];
	return root;
}
void postorder(Node* root)
{
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}
int main(){
	Node* root;
	string pre,in;
	while(cin>>pre>>in){
	    int len=pre.size();
	    root = buildtree(0,len-1);
	    postorder(root);
	    cout<<"\n";
	}
	
	
}