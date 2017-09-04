#ifndef TREENODE_H
#define TREENODE_H
#include <memory>

class TreeNode;

typedef std::shared_ptr<TreeNode> TreeNodePtr; // for better readeability
typedef std::weak_ptr<TreeNode> TreeNodeWeakPtr;

class TreeNode
{
public:
	static TreeNodePtr createNode (int content, TreeNodePtr left = TreeNodePtr(), TreeNodePtr right = TreeNodePtr());
	~TreeNode();
	void setParent(const TreeNodePtr &p);
private:
    TreeNode (int content, TreeNodePtr left, TreeNodePtr right);
	TreeNodePtr leftChild;
	TreeNodePtr rightChild;
	TreeNodeWeakPtr parent;
    int content;
	
};

#endif // TREENODE_H
