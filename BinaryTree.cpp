#include "pch.h"
#include "BinaryTree.h"
#include <cassert>

BinaryTree::BinaryTree()
{
	root = nullptr;
}

BinaryTree::~BinaryTree()
{
	deleteTree(root);
}

void BinaryTree::deleteTree(TreeNode* root)
{
	if (root != nullptr)
	{
		deleteTree(root->getLeft());
		deleteTree(root->getRight());
		delete root;
	}
}

BinaryTree::BinaryTree(int rootValue)
{
	root = new TreeNode(rootValue);
}

void BinaryTree::Insert(int value, TreeNode* node)
{
	if (!node)
		this->root = new TreeNode(value);
	else
	{
		if (value < node->getValue())
			if (node->getLeft())
				Insert(value, node->getLeft());
			else
				node->setLeft(new TreeNode(value));
		if (value > node->getValue())
			if (node->getRight())
				Insert(value, node->getRight());
			else
				node->setRight(new TreeNode(value));
	}
}

TreeNode* BinaryTree::Search(int value, TreeNode* node)
{
	if (!node) return nullptr;
	if (value == node->getValue())
		return node;
	if (value < node->getValue())
		Search(value, node->getLeft());
	else
		Search(value, node->getRight());
}

void BinaryTree::Insert(int value)
{
	Insert(value, root);
}

TreeNode* BinaryTree::Search(int value)
{
	return Search(value, root);
}
