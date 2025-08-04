#  C - Binary Trees

<p align="center"><img src="https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExZXEwdmYzYW80anV1cTQ4Y20xbW0wang0M2w2bnR6b21laXNlcGp6cSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/rgcKLJ2V76iGlzlJGe/giphy.gif" alt="arbre" /><!-- markdownlint-disable-line MD033 --></p>  

Tascks 

##  0. New node

Write a function that creates a binary tree node

    Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
    Where parent is a pointer to the parent node of the node to create
    And value is the value to put in the new node
    When created, a node does not have any child
    Your function must return a pointer to the new node, or NULL on failure

   gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node


##  1. Insert left

Write a function that inserts a node as the left-child of another node

    Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
    Where parent is a pointer to the node to insert the left-child in
    And value is the value to store in the new node
    Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
    If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
alex@/tmp/binary_trees$ ./1-left

## 2. Insert right
mandatory

Write a function that inserts a node as the right-child of another node

    Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
    Where parent is a pointer to the node to insert the right-child in
    And value is the value to store in the new node
    Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
    If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

## 3. Delete
mandatory

Write a function that deletes an entire binary tree

    Prototype: void binary_tree_delete(binary_tree_t *tree);
    Where tree is a pointer to the root node of the tree to delete
    If tree is NULL, do nothing
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del

