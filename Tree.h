#ifndef TREE_H
#define TREE_H

class Node {
public: 
    int data;
    Node* left;
    Node* right;
    Node(int value);
};

class Tree { 
public: 
    Node* root; 
    
    Tree(); 
    ~Tree(); // Added to free all nodes as per your lab requirements
    
    Node* insert(Node* n, int v);
    bool search(Node* n, int v);
    Node* findMin(Node* n);
    Node* deleteNode(Node* n, int v);
    
    void inOrder(Node* n);
    void preOrder(Node* n);
    int height(Node* n);
    void levelOrder(); // Modified to take 0 parameters as per lab spec
    
private:
    void destroyTree(Node* n); // Helper for the destructor
};

#endif