#include "tree.h"
#include <string>

// Constructor implementation
tree::tree(std::string _s) {
    s = _s;
    left = nullptr;
    right = nullptr;
}

// Getter for data
std::string tree::getData() {
    return s;
}

// Getter for left child
tree* tree::getLeft() {
    return left;
}

// Getter for right child
tree* tree::getRight() {
    return right;
}

// Setter for left child
void tree::setLeft(tree* _left) {
    left = _left;
}

// Setter for right child
void tree::setRight(tree* _right) {
    right = _right;
}


// destructor
tree::~tree() {
    if(left != nullptr) {
        delete left;
    }
    if(right != nullptr) {
        delete right;
    }
}

tree* tree::clone() {
    tree* myclone = new tree(s);
    if(left != nullptr) {
        myclone->setLeft(left->clone());
    }
    if(right != nullptr) {
        myclone->setRight(right->clone());
    }
    return myclone;
}

