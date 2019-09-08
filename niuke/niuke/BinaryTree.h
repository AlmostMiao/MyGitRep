#include<iostream>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

class BinaryTree{
public:	
	BinaryTree(int v,BinaryTree* l=NULL,BinaryTree *r=NULL):val(v),left(l),right(r){}
	int val;
	BinaryTree *left;
	BinaryTree *right;
};

class BinaryTreeAlg{
public:
	void printTree(BinaryTree *root);
	void cengci(BinaryTree*root);
	void qianxu(BinaryTree*root);
	void InOrderTraverse(BinaryTree *);
	void PostOrderTraverse(BinaryTree*);
};