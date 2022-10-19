#include "pch.h"
#include "BinaryTree.h"


BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

void BinaryTree::Insert(Node* node) {
	if (!root)
	{
		root = node->value;
		count++;
	}
	else if (node->value <= root)
	{
		if (!left)
		{
			left = new BinaryTree();
			left->root = node->value;
			count++;
		}
		else
			left->Insert(node);
	}
	else
	{
		if (!right)
		{
			right = new BinaryTree();
			right->root = node->value;
			count++;
		}
		else
			right->Insert(node);
	}
}

bool BinaryTree::Search(Node* node) {
	if (!root)
		return false;
	else if (!node)
		return false;
	else if (root == node->value)
		return true;
	else if (!right)
		return false;
	else if (node->value >= root)
		return right->Search(node);
	else if (!left)
		return false;
	else if (node->value <= root)
		return left->Search(node);
	else
		return false;
}
