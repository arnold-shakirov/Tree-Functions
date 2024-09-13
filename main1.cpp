#include "tree.h"
#include <iostream>

void preorder(tree *root) {
    std::cout << root->getData() << " ";
    tree *left = root->getLeft();
    std::cout << left->getData() << " ";
    tree *right = root->getRight();
    std::cout << right->getData() << " ";
    tree *left_left = root->getLeft()->getLeft();
    std::cout << left_left->getData() << " ";
    tree *left_right = root->getLeft()->getRight();
    std::cout << left_right->getData() << " ";
    tree *left_right_left = root->getLeft()->getRight()->getLeft();
    std::cout << left_right_left->getData() << " ";
    tree *left_right_right = root->getLeft()->getRight()->getRight();
    std::cout << left_right_right->getData() << " ";
    
}

int main() {
    // Create the leaves of the tree
    tree *node4 = new tree("4");
    tree *node2 = new tree("2");
    tree *node3 = new tree("3");

    // Create the * node, which is the right child of the root +
    tree *nodeTimes = new tree("*");
    nodeTimes->setLeft(node2);
    nodeTimes->setRight(node3);

    // Create the root + node
    tree *rootPlus = new tree("+");
    rootPlus->setLeft(node4);
    rootPlus->setRight(nodeTimes);

    delete nodeTimes;

    tree *nodeDivide = new tree("/");
    rootPlus->setRight(nodeDivide);




    // The tree is now constructed in memory with rootPlus as the root

    // For demonstration purposes: traverse the tree and print the nodes
    std::cout << "Root: " << rootPlus->getData() << std::endl;
    std::cout << "Left Child of Root: " << rootPlus->getLeft()->getData() << std::endl;
    std::cout << "Right Child of Root: " << rootPlus->getRight()->getData() << std::endl;

    tree *rootClone = rootPlus->clone();
    delete rootPlus;

    // For demonstration purposes: traverse the tree and print the nodes
    std::cout << "Root: " << rootClone->getData() << std::endl;
    std::cout << "Left Child of Root: " << rootClone->getLeft()->getData() << std::endl;
    std::cout << "Right Child of Root: " << rootClone->getRight()->getData() << std::endl;

    // Don't forget to delete the nodes to prevent memory leaks
    delete rootClone;

    return 0;
}

