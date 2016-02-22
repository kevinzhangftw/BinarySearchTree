//
//  BinarySearchTree.hpp
//  BinarySearchTree
//
//  Created by Kai Zhang on 2016-02-22.
//  Copyright © 2016 Kai Zhang. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <stdio.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
    
};

class BinarySearchTree{
    public:
    BinarySearchTree();
    BinarySearchTree(int);
    ~BinarySearchTree();
    void insert(int);
    void deleteNode(int);
    node* search(int);
    
    
    
};

#endif /* BinarySearchTree_hpp */
