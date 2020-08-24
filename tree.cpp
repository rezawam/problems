#include <cstdio>
#include "tree.h"


Tree::Tree (int val, Tree* L, Tree* R) : val(val), left(L), right(R) {
	if (left) left->changeParent (this, true);
	if (right) right->changeParent (this, false);
}


void Tree::changeParent (Tree* newParent, bool toLeft) {
	if (parent) {
		if (isLeft) parent->left = nullptr;
		else parent->right = nullptr;
	}
	if (toLeft && newParent->left != this) {
		delete newParent->left;
		newParent->left = this; 
	} 
	if (!toLeft && newParent->right != this) {
		delete newParent->right;
		newParent->right = this;
	}
	parent = newParent;
	isLeft = toLeft;
}


int Tree::depth() {
	if (parent)
		return parent->depth() + 1;
	else
		return 0;
}


int Tree::height() {
	int lHeight = 0, rHeight = 0;
	if (left)
		lHeight = left->height();
	if (right)
		rHeight = right->height();;
	int height = (lHeight >= rHeight) ? lHeight : rHeight;
	return height + 1;
}



Tree::~Tree() {
	if (left) delete left;
	if (right) delete right;
	if (parent) {
		if (parent->left == this) parent->left = nullptr;
		else parent->right = nullptr;
	}
}

