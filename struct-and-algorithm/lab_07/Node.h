#include "stdafx.h"

class Node
{
private:
	Node * left;
	Node * right;
	char value[100];
public:
	Node();
	void setLeft(Node * node);
	Node *getLeft();
	void setRight(Node * node);
	Node *getRight();
	void setValue(char * value);
	char getValue();
	~Node();
};
