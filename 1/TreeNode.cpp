#include "TreeNode.h"
#include <iostream>
//using namespace TreeNode;


 TreeNodePtr TreeNode::createNode (int content, TreeNodePtr left, TreeNodePtr right){
	TreeNodePtr n = TreeNodePtr(new TreeNode(content, left, right));
	if (left){
		left->setParent(n);
	}
	if (right){
	 right->setParent(n);
	}
	return n;
	
}


 TreeNode::TreeNode(int content, TreeNodePtr left, TreeNodePtr right):
 content(content),
 leftChild(left),
 rightChild(right)
{
	std::cout << "creating node " << content << std::endl;
}

TreeNode::~TreeNode()
{
	std::cout << "destroying node " << content << std::endl;
}

void TreeNode::setParent(const TreeNodePtr &p){
	parent = p;
	std::cout << "adding parent to node " << content << std::endl;
}
