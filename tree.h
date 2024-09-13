#ifndef TREE_H
#define TREE_H

#include <string>

class tree {
    private:
        std::string s;
        tree *left;
        tree *right;

    public:
        tree(std::string _s);
        ~tree();
        std::string getData();
        tree *getLeft();
        tree *getRight();
        void setLeft(tree *_left);
        void setRight(tree *_right);
        tree *clone();
};

#endif

