#include "BinaryTree.h"

void BinaryTreeAlg::printTree(BinaryTree* root)
{
	if(root==nullptr)
		cout<<"The tree is empty."<<endl;
	queue<BinaryTree*> q;
	q.push(root);
	cout<<"Tree is:"<<endl;
	while(q.size())
	{
		BinaryTree*cur=q.front();
		q.pop();
		if(cur)
			cout<<cur->val<<" ";
		if(cur->left)
			q.push(cur->left);
		if(cur->right)
			q.push(cur->right);		
	}
	cout<<endl;
}

void BinaryTreeAlg::cengci(BinaryTree *root)
{
	if(root==nullptr)
		cout<<"The tree is empty."<<endl;
	queue<BinaryTree*> q;
	q.push(root);
	cout<<"cengci:"<<endl;
	while(q.size())
	{
		int len=q.size();
		for(int i=0;i<len;i++)
		{
			BinaryTree*cur=q.front();
			q.pop();
			if(cur)
				cout<<cur->val<<" ";
			if(cur->left)
				q.push(cur->left);
			if(cur->right)
				q.push(cur->right);		
		}
		cout<<endl;

	}
}

void BinaryTreeAlg::qianxu(BinaryTree *root)
{
	if(root==nullptr)
		cout<<"The tree is empty."<<endl;
	stack<BinaryTree*> s;
	s.push(root);
	cout<<"PreOrder:"<<endl;
	while(s.size())
	{
		BinaryTree*cur=s.top();
		s.pop();
		if(cur)
			cout<<cur->val<<" ";
		if(cur->right)
			s.push(cur->right);	
		if(cur->left)
			s.push(cur->left);

	}
	cout<<endl;
}

void BinaryTreeAlg::InOrderTraverse(BinaryTree *root)
{
	cout<<"InOrder:"<<endl;
	if(root==nullptr)
		cout<<"The tree is empty."<<endl;
	stack<BinaryTree*> s;
	while(root||s.size())
	{
		if(root)
		{
			s.push(root);
			root=root->left;
		}
		else
		{
			root=s.top();
			s.pop();
			cout<<root->val<<" ";
			root=root->right;
		}
	}
	cout<<endl;

}

void BinaryTreeAlg::PostOrderTraverse(BinaryTree*root)
{
	
}