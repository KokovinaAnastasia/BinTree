#pragma once
#include "TreeNode.h"

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();
	BinaryTree(int rootValue);
	void Insert(int value);
	TreeNode* Search(int value);
private:
	void deleteTree(TreeNode* root);
	TreeNode* root;
	void Insert(int value, TreeNode* node);
	TreeNode* Search(int value, TreeNode* node);
};
