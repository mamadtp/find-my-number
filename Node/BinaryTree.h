#pragma once

struct Node
{
	double value;

	Node* parent;

	int act;
};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	double root;
	BinaryTree* left;
	BinaryTree* right;
	int count = 0;

	void Insert(Node* node);
	bool Search(Node* node);
};

