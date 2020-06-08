#pragma once
class TreeNode
{
public:
	TreeNode();
	TreeNode(int val);
	int getValue() const { return value; }
	void setValue(int val);
	TreeNode* getLeft() const { return left; }
	TreeNode* getRight() const { return right; }
	void setLeft(TreeNode* node);	
	void setRight(TreeNode* node);
private:
	int value;
	TreeNode* left;
	TreeNode* right;
};
