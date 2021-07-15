#include<bits/stdc++.h>
using namespace std;

string pre,in;
int first;

struct Node
{
	char value;
	Node* left;
	Node* right;
	Node(){}
	Node(char v,Node* l,Node* r){
		value=v;
		left=l;
		right=r;
	}
};

int find(char c,int left,int right){
	for(int i=left;i<=right;i++){
		if(in[i]==c){
			return i;
		}
	}
}

Node* build(int left,int right){
	Node* root=new Node(pre[first++],nullptr,nullptr);
	if(left==right){}
	else if(left<right){
		int mid=find(root->value,left,right);
		if(left<=mid-1) root->left=build(left,mid-1);
		if(mid+1<=right)root->right=build(mid+1,right);
	}
	return root;
}

void postOrder(Node* root)
{
	if(root==nullptr) return;
    postOrder(root->left);
    postOrder(root->right);	
	cout<<root->value;
}

int main()
{
	while(cin>>pre>>in){
		first=0;
		int len=pre.size();
		Node* root = build(0,len-1);
		postOrder(root);
		cout<<endl;
	}
}