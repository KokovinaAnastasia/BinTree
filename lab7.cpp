#include "pch.h"
#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>


void CreateMinimalBST(int* array, int start, int end, BinaryTree* tree)
{
	if (end == start)
		tree->Insert(array[start]);
	else
	{
		int indxHead = start + (end - start) / 2;
		tree->Insert(array[indxHead]);
		if (indxHead != start)
			CreateMinimalBST(array, start, indxHead - 1, tree);
		if (indxHead != end)
			CreateMinimalBST(array, indxHead + 1, end, tree);
	}
}

int main()
{
	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	BinaryTree tree;
	
	CreateMinimalBST(array, 0, sizeof(array) / sizeof(&array) - 1, &tree);
	TreeNode* node = (&tree)->Search(4);
	system("pause");
}