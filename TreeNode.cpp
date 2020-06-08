#include "pch.h"
#include "TreeNode.h"


TreeNode::TreeNode()
{
	value = 0;
	left = nullptr;
	right = nullptr;
}

TreeNode::TreeNode(int val)
{
	value = val;
	left = nullptr;
	right = nullptr;
}

void TreeNode::setValue(int val)
{
	value = val;
}

void TreeNode::setLeft(TreeNode* node)
{
	left = node;
}

void TreeNode::setRight(TreeNode* node)
{
	right = node;
}