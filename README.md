### C- Binary Trees


`C Language`
`Group Project`
`Data Structure`

## Introduction
A binary tree is a hierarchical data structure composed of nodes, where each node has at most two children: a left child and a right child. These children are also nodes, and they form sub-trees rooted at the left and right children of the parent node.

The topmost node in a binary tree is called the root, and nodes with no children are called leaves.

## Types of Binary Trees
* Binary Search Tree (BST):
Follows a specific ordering of nodes, where the left child is less than the parent, and the right child is greater. Efficient for search, insertion, and deletion operations.

* AVL Tree:
A self-balancing Binary Search Tree. Maintains balance during insertion and deletion to ensure logarithmic time complexity for operations.

* Max Binary Heap:
Follows the max-heap property, where each node has a value greater than or equal to its children. Used in priority queues.

## Data Structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree
`typedef struct binary_tree_s bst_t;`

### AVL Tree
`typedef struct binary_tree_s avl_t;`

### Max Binary Heap
`typedef struct binary_tree_s heap_t;`


### Print Function
To match the examples in the tasks, you are given this function

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction.
