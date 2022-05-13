#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int linkedlist()
{
    struct node{
        int value;
        struct node* next;
    };
    typedef struct node temp;
    temp *head = NULL;
    temp *tmp;
    temp *answer;
    int value;

    printf("Display:\n");
    temp *temporary = head;
    while (temporary != NULL)
    {
        printf("%d -", temporary-> value);
        temporary = temporary -> next;
    }
    for (int i=0;i<5;i++)
    {
        printf("Creation of a new node");
        temp *answer = malloc(sizeof(temp));
        answer->value = value;
        answer-> next = NULL;
        return answer;

        tmp-> answer;
        tmp->next = head;
        head = tmp;
    }
    return 0;
}

int stackfunction()
{
    int top;
    int stack_len=5;
    int empty=-1;
    int stack[stack_len];
    top= empty;

    int c, value, x;

    printf("Choose a specific function:\n1.Push\n2.Pop\n3.Print");
    scanf("%d",&c);
    if (c==1)
    {
        if (top >= stack_len -1)
        {
            printf("Full\n");
        }
        top ++;
        printf("Enter the element to be inserted:");
        scanf("%d",&x);
        stack[top] = value;
        printf("Successful push\n");
    } else if (c==2)
    {
        if (top == empty)
        {
            printf("Stack is empty\n");
        }
        printf("\nPopped element: %d", stack[top]);
        top--;
    }else if(c==3)
    {
        if (top == -1)
        {
            printf("Underflow.\n");
        } else{
            printf("\nElements in the stack are:\n");
            for (int i= top; i>=0; i--)
            {
                printf("%d\n", stack[i]);
            }
        }
    }
}

int tree()
{
    typedef  struct treenode{
        int value;
        struct treenode *left;
        struct treenode *right;
    } treenode;

    int c;
    int value;
    printf("Choose an operation:");
    scanf("%d", &c);
    if (c==1)
    {
        treenode* result = malloc(sizeof(treenode));
        if (result != NULL)
        {
            result->left = NULL;
            result-> right = NULL;
            result-> value = value;
        } return result;
        treenode *n1 = result;
        result = 10;
        treenode *n2 = result;
        result=11;
        treenode *n3 = result;
        result = 12;
        treenode *n4 = result;
        result = 13;
        treenode *n5 = result;
        result = 14;
        n1-> left = n2;
        n1->right = n3;
        n3->left = n4;
        n3->right = n5;
    }
    else if (c==2)
    {
        treenode *root;
        if (root = NULL)
        {
            printf("Empty\n");
            return;
        }
        printf("value = %d\n", root-> value);
        printf("left\n");
        root->left;
        printf("right\n");
        root->right;
        printf("complete\n");
    }
    else
    {
        printf("Wrong number\n");
    }
}

int binarysearchtree(){
    struct node {
      int key;
      struct node *left, *right;
    };

// Create a node
    int c;
    printf("1.Create a node\n2.Inorder traversal\n3.Insert a node\n4.Inorder successor\n4.Delete a node");
    printf("Choose an operation:");
    scanf("%d", &c);
    struct node *root = NULL;
    if (c==1)
    {
        //create a node
        int item;
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->key = item;
        temp->left = temp->right = NULL;
        return temp;
    }else if (c==2)
    {
        //inorder traversal
        struct node *root;
        if (root != NULL) {
        // Traverse left
        inorder(root->left);

        // Traverse root
        printf("%d -> ", root->key);

        // Traverse right
        inorder(root->right);
      }
    } else if(c==3)
    {
        //insert a node
        struct node *node;
        int key;
        if (node == NULL) return newNode(key);
        // Traverse to the right place and insert the node
        if (key < node->key)
        node->left = insert(node->left, key);
        else
        node->right = insert(node->right, key);
        return node;
    }
    else if(c==4)
    {
       // Find the inorder successor
       struct node *node;
       struct node *current = node;
       // Find the leftmost leaf
       while (current && current->left != NULL)
            current = current->left;
            return current;
    } else if(c==5)
    {
        // Deleting a node
        struct node *root;
        int key;
        if (root == NULL) return root;
        // Find the node to be deleted
        if (key < root->key)
            root->left = deleteNode(root->left, key);
        else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
    }
    return root;
    }
}


int queue()
{
    // C program for array implementation of queue
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a queue
struct Queue {
	int front, rear, size;
	unsigned capacity;
	int* array;
};

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue = (struct Queue*)malloc(
		sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = queue->size = 0;

	// This is important, see the enqueue
	queue->rear = capacity - 1;
	queue->array = (int*)malloc(
		queue->capacity * sizeof(int));
	return queue;
}

int c;
printf("1.Enqueue\n2.Dequeue\n3.Front\n4.Rear");
printf("Choose an operation:");
scanf("%d", &c);
struct Queue* queue = createQueue(1000);
if (c==1)
{
    int item;
    if ((queue->size == queue->capacity))
		return;
	queue->rear = (queue->rear + 1)
				% queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
	printf("%d enqueued to queue\n", item);
}else if (c==2)
{
    if ((queue->size == 0))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1)
				% queue->capacity;
	queue->size = queue->size - 1;
	return item;
	printf("%d dequeued from queue\n\n",dequeue(queue));
}
else if (c==3)
{
    printf("Front item is %d\n", front(queue));
    if ((queue->size == 0))
		return INT_MIN;
	return queue->array[queue->front];
}else if (c==4)
{
    printf("Rear item is %d\n", rear(queue));
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}
return 0;
}

// Driver code
int main() {
    linkedlist();
    stackfunction();
    tree();
    binarysearchtree();
    queue();
}
