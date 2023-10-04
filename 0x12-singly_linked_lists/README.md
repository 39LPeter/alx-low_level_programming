# 0x12. C - Singly linked lists
#
>A linked list is a linear collection of data elements whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence. In its most basic form, each node contains: data, and a reference (in other words, a link) to the next node in the sequence.
#
>Singly linked lists contain nodes which have a data field as well as 'next' field, which points to the next node in line of nodes. Operations that can be performed on singly linked lists include insertion, deletion and traversal.
#
>The head of a linked list is a reference to the first node of the list1234. It can be a variable that stores the address of the first node, or a dummy node that points to the first node. The head is used to access the elements of the list and perform operations on it. The head itself does not contain any data, only a link to the next node. If the list is empty, the head is null.
#
>The tail of a linked list is a reference to the last node of the list12345. It can be a variable that stores the address of the last node, or a node that points to null. The tail is used to add elements to the end of the list and perform operations on it. The tail itself may contain data and a link to the previous node (if it is a doubly linked list). If the list is empty, the tail is null.

Some implementations pass a pointer to pointer parameter to allow changing the head pointer directly instead of returning the new one. Thus you could write:

```
// note that there's no return value: it's not needed
void push(struct node** head, int data)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=*head;
    *head = newnode; // *head stores the newnode in the head
}
```

```
// and call like this:
push(&head,1);
```

The implementation that doesn't take a pointer to the head pointer must return the new head, and the caller is responsible for updating it itself:

```
struct node* push(struct node* head, int data)
{
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    return newnode;
}
```

```
// note the assignment of the result to the head pointer
head = push(head,1);
```

If you don't do this assignment when calling this function, you will be leaking the nodes you allocate with malloc, and the head pointer will always point to the same node.

The advantage should be clear now: with the second, if the caller forgets to assign the returned node to the head pointer, bad things will happen.

#### In this project, I practiced building and using singly linked lists in C while learning when and why to use linked lists versus arrays.

## Test_Files :heavy_check_mark:

* [Test_Files](./Test_Files): Folder of test files. Provided by Holberton School.

## Header File :file_folder:

* [lists.h](./lists.h): Header file containing definitions and prototypes for all
types and functions written for the project.

| Type/File          | Definition/Prototype                                                                   |
| ------------------ | -------------------------------------------------------------------------------------- |
| `struct list_s`    | <ul><li>`char *str`</li><li>`unsigned int len`</li><li>`struct list_s *next`</li></ul> |
| `typedef list_t`   | `struct list_s`                                                                        |
| `0-print_list.c`   | `size_t print_list(const list_t *h);`                                                  |
| `1-list_len.c`     | `size_t list_len(const list_t *h);`                                                    |
| `2-add_node.c`     | `list_t *add_node(list_t **head, const char *str);`                                    |
| `3-add_node_end.c` | `list_t *add_node_end(list_t **head, const char *str);`                                |
| `4-free_list.c`    | `void free_list(list_t *head)`                                                         |

## Tasks :page_with_curl:

* **0. Print list**
  * [0-print_list.c](./0-print_list.c): C function that prints all the
  elements of a `list_t` list.
    * If `str` is `NULL`, the function prints `[0] (nil)`.

* **1. List length**
  * [1-list_len.c](./1-list_len.c): C function that returns the number of elements
  in a linked `list_t` list.

* **2. Add node**
  * [2-add_node.c](./2-add_node.c): C function that adds a new node at the
  beginning a of a `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **3. Add node at the end**
  * [3-add_node_end.c](./3-add_node_end.c): C function that adds a new node at
  the end of a linked `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **4. Free list**
  * [4-free_list.c](./4-free_list.c): C function that frees a `list_t` list.

* **5. The Hare and the Tortoise**
  * [100-first.c](./100-first.c): C function that prints `You're beat! and
  yet, you must allow,\nI bore my house upon my back!\n` before the `main`
  function is executed.

    ![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/cfff66c5-0051-45de-95be-2a51678d91c3)


* **6. Real programmers can write assembly code in any language**
  * [101-hello_holberton.asm](./101-hello_holberton.asm): 64-but assembly program
  that prints `Hello, Holberton` followed by a new line using only the
  `printf` function witout interrupts.


