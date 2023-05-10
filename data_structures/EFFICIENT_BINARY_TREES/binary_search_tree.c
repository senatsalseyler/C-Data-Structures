// write a program to create a binary search tree and perform all the
// operations discussed in the preceding sections

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *tree;
void create_tree(struct node *);
struct node *insert_element(struct node *, int);
void preorder_traversal(struct node *);
void inorder_traversal(struct node *);
void postorder_traversal(struct node *);
struct node *find_smallest_element(struct node *);
struct node *find_largest_element(struct node *);
struct node *delete_element(struct node *, int);
struct node *mirror_image(struct node *);
int total_nodes(struct node *);
int total_external_nodes(struct node *);
int total_internal_nodes(struct node *);
int height(struct node *);
struct node *delete_tree(struct node *);

int main()
{
    int option, val;
    struct node *ptr;
    create_tree(tree);

    do
    {
        printf("\n ***** MAIN MENU *****");
        printf("\n 1. Insert Element");
        printf("\n 2. Preorder Traversal");
        printf("\n 3. Inorder Traversal");
        printf("\n 4. Postorder Traversal");
        printf("\n 5. Find the smallest element");
        printf("\n 6. Find the largest element");
        printf("\n 7. Delete an element");
        printf("\n 8. COunt the total number of nodes");
        printf("\n 9. Count the toatal number of external nodes");
        printf("\n 10. Count the toatal number of internal nodes");
        printf("\n 11. Determine the height of the tree");
        printf("\n 12. Find the mirror image of the tree");
        printf("\n 13. Delete the tree");
        printf("\n 14. EXIT");
        printf("\n Enter your option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                printf("\n Enter the value of the new node: ");
                scanf("%d", &val);
                tree = insert_element(tree, val);
                break;

            case 2:
                printf("\n The elements of the tree are: \n");
                preorder_traversal(tree);
                break;

            case 3:
                printf("\n The elements of the tree are: \n");
                inorder_traversal(tree);
                break;

            case 4:
                printf("\n The elements of the tree are: \n");
                postorder_traversal(tree);
                break;

            case 5:
                ptr = find_smallest_element(tree);
                printf("\n The smallest element is: %d", ptr -> data);
                break;

            case 6:
                ptr = find_largest_element(tree);
                printf("\n The largest element is: %d", ptr -> data);
                break;

            case 7: 
                printf("\n Enter the element to be deleted: ");
                scanf("%d", &val);
                tree = delete_element(tree, val);
                break;
            
            case 8:
                printf("\n Total number of nodes: %d", total_nodes(tree));
                break;

            case 9:
                printf("\n Total number of external nodes: %d", total_external_nodes(tree));
                break;
            
            case 10:
                printf("\n Total number of internal nodes: %d", total_internal_nodes(tree));
                break;

            case 11:
                printf("\n The height of the tree: %d", height(tree));
                break;

            case 12:
                tree = mirror_image(tree);
                break;

            case 13:
                tree = delete_tree(tree);
                break;
        }
    } while (option != 14);
    return 0;
}

void create_tree(struct node *tree)
{
    tree = NULL;
}

struct node *insert_element(struct node *tree, int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = val;
    ptr -> left = NULL;
    ptr -> right = NULL;

    if(tree == NULL)
    {
        tree = ptr;
        tree -> left = NULL;
        tree -> right = NULL;
    }

    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while(nodeptr != NULL)
        {
            parentptr = nodeptr;
            if(val < nodeptr -> data)
            {
                nodeptr = nodeptr -> left;
            }
            else
            {
                nodeptr = nodeptr -> right;
            }
        }

        if(val < parentptr -> data)
        {
            parentptr -> left = ptr;
        }
        else
        {
            parentptr -> right = ptr;
        }

        return tree;
    }
}

void preorder_traversal(struct node *tree)
{
    if(tree != NULL)
    {
        printf("%d\t", tree -> data);
        preorder_traversal(tree -> left);
        preorder_traversal(tree -> right);
    }
}

void inorder_traversal(struct node *tree)
{
    if(tree != NULL)
    {
        inorder_traversal(tree -> left);
        printf("%d\t", tree -> data);
        inorder_traversal(tree -> right);
    }
}

void postorder_traversal(struct node *tree)
{
    if(tree != NULL)
    {
        postorder_traversal(tree -> left);
        postorder_traversal(tree -> right);
        printf("%d\t", tree -> data);
    }
}

struct node *find_smallest_element(struct node *tree)
{
    if((tree == NULL) || (tree -> left == NULL))
    {
        return tree;
    }
    else
    {
        return find_smallest_element(tree -> left);
    }
}

struct node *find_largest_element(struct node *tree)
{
    if((tree == NULL) || (tree -> right == NULL))
    {
        return tree;
    }
    else
    {
        return find_largest_element(tree -> right);
    }
}

struct node *delete_element(struct node *tree, int val)
{
    struct node *cur, *parent, *suc, *psuc, *ptr;
    if(tree -> left == NULL)
    {
        printf("\n The tree is empty");
        return tree;
    }
    parent = tree;
    cur = tree -> left;

    while(cur != NULL && val != cur -> data)
    {
        parent = cur;
        cur = (val < cur -> data)? cur -> left : cur -> right;
    }

    if(cur == NULL)
    {
        printf("\n The value to be deleted is not present in the tree");
        return(tree);
    }

    if(cur -> left == NULL)
    {
        ptr = cur -> right;
    }
    else if(cur -> right == NULL)
    {
        ptr = cur -> left;
    }

    else
    {
        psuc = cur;
        cur = cur -> left;
        while(suc -> left != NULL)
        {
            psuc = suc;
            suc = suc -> left;
        }

        if(cur == psuc)
        {
            suc -> left = cur -> right;
        }

        else
        {
            suc -> left = cur -> left;
            psuc -> left = suc -> right;
            suc -> right = cur -> right;
        }
        ptr = suc;
    }
    if(parent -> left == cur)
    {
        parent -> left = ptr;
    }
    else
    {
        parent -> right = ptr;
    }
    free(cur);
    return tree;
}

int total_nodes(struct node *tree)
{
    if(tree == NULL)
    {
        return 0;
    }
    else
    {
        return total_nodes(tree -> left) + total_nodes(tree -> right) + 1;
    }
}

int total_external_nodes(struct node *tree)
{
    if(tree == NULL)
    {
        return 0;
    }
    else if((tree -> left == NULL) && (tree -> right == NULL))
    {
        return 1;
    }
    else
    {
        return (total_external_nodes(tree -> left) + total_external_nodes(tree -> right));
    }
}

int total_internal_nodes(struct node *tree)
{
    if((tree == NULL) || (tree -> left == NULL) && (tree -> right == NULL))
    {
        return 0;
    }
    else
    {
        return (total_internal_nodes(tree -> left) + total_internal_nodes(tree -> right) + 1);
    }
}

int height(struct node *tree)
{
    int left_height, right_height;

    if(tree == NULL)
    {
        return 0;
    }
    else
    {
        left_height = height(tree -> left);
        right_height = height(tree -> right);
        if(left_height > right_height)
        {
            return (left_height + 1);
        }
        else
        {
            return (right_height + 1);
        }
    }
}

struct node *mirror_image(struct node *tree)
{
    struct node *ptr;
    if(tree != NULL)
    {
        mirror_image(tree -> left);
        mirror_image(tree -> right);
        ptr = tree -> left;
        ptr -> left = ptr -> right;
        tree -> right = ptr;
    }
}

struct node *delete_tree(struct node *tree)
{
    if(tree != NULL)
    {
        delete_tree(tree -> left);
        delete_tree(tree -> right);
        free(tree);
    }
}