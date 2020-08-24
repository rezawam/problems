#pragma once

class Tree {
private:
	Tree* parent = nullptr;
	Tree* left = nullptr;
	Tree* right = nullptr;
	bool isLeft = false;

public:
	int val = 0;

	Tree (int val) : val(val) {}
	Tree (int val, Tree* L, Tree* R);
	~Tree();

	Tree* L() { return left; }
	Tree* R() { return right; }
	Tree* par() { return parent; }

	void changeParent (Tree* newParent, bool toLeft);
	int depth();
	int height();
};


/* Example:

	Tree *a1 = new Tree (1);
	Tree *a2 = new Tree (2);
	Tree *b1 = new Tree (3);
	Tree *b2 = new Tree (4, a1, a2);
	Tree *b3 = new Tree (5);
	Tree *b4 = new Tree (6);
	Tree *c1 = new Tree (7, b1, b2);
	Tree *c2 = new Tree (8, b3, b4);
	Tree *d1 = new Tree (9, c1, c2);

	a1->depth();  // 3
	a1->height(); // 0
	b1->depth();  // 2
	b1->height(); // 0
	b2->height(); // 1
	c1->depth();  // 1
	c1->height(); // 2
	c2->height(); // 1
    d1->depth();  // 0
	d1->height(); // 3

	// b2->L == a1, b2->R == a2, b3->L == null, b3->R == null
	a1->changeParent (b3, false);
	// b2->L == null, b2->R == a2, b3->L == null, b3->R == a1
	a2->changeParent (b3, true);
	// b2->L == null, b2->R == null, b3->L == a2, b3->R == a1
	a1->depth();  // 3
	b2->height(); // 0
	c1->height(); // 1
	b3->height(); // 1
	c2->height(); // 2

	delete d1;
	
*/

