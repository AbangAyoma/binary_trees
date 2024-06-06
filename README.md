# Binary Tree in C

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
- [Examples](#examples)

## Introduction
This repository contains an implementation of binary trees in C. Binary trees are essential data structures used for efficient data storage, manipulation, and retrieval. This implementation provides basic operations such as insertion, deletion, traversal, and searching.

## Features
- Insert nodes
- Delete nodes
- In-order, pre-order, and post-order traversal
- Search for a value in the tree
- Find the minimum and maximum values
- Calculate the height of the tree
- Print the tree in a structured format

## Installation
To use the binary tree implementation, clone the repository and compile the code using a C compiler.

```sh
git clone https://github.com/abangayoma/binary_tree.git
cd binary_tree
gcc -o binary_tree main.c binary_tree.c
```

## Usage
After compiling, you can run the binary tree program.

```sh
./binary_tree
```

You can modify `main.c` to test different functionalities and see examples of how to use the various functions provided in `binary_tree.c`.

## Functions
### Insertion
```c
void insert(Node** root, int value);
```
Inserts a value into the binary tree.

### Deletion
```c
Node* deleteNode(Node* root, int value);
```
Deletes a value from the binary tree.

### Traversal
```c
void inorderTraversal(Node* root);
void preorderTraversal(Node* root);
void postorderTraversal(Node* root);
```
Traverses the binary tree in in-order, pre-order, and post-order.

### Search
```c
Node* search(Node* root, int value);
```
Searches for a value in the binary tree.

### Min and Max
```c
int findMin(Node* root);
int findMax(Node* root);
```
Finds the minimum and maximum values in the binary tree.

### Height
```c
int height(Node* root);
```
Calculates the height of the binary tree.

### Print Tree
```c
void printTree(Node* root, int space);
```
Prints the binary tree in a structured format for easy visualization.

## Examples
Here is an example of how to use some of the functions in the `binary_tree.c` file:

```c_code
#include <stdio.h>
#include "binary_tree.h"

int main() {
    Node* root = NULL;

    insert(&root, 50);
    insert(&root, 30);
    insert(&root, 70);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 60);
    insert(&root, 80);

    printf("In-order traversal:\n");
    inorderTraversal(root);

    printf("\n\nDeleting 20\n");
    root = deleteNode(root, 20);
    printf("In-order traversal:\n");
    inorderTraversal(root);

    printf("\n\nSearching for 40:\n");
    Node* found = search(root, 40);
    if (found != NULL) {
        printf("Node found with value: %d\n", found->value);
    } else {
        printf("Node not found\n");
    }

    return 0;
}
```
