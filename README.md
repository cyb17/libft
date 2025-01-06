# Libft

A small library containing common functions coded in C.

### Mandatory
1. Functions for Character Classification and Conversion

These functions deal with analyzing or modifying single characters:

    ft_isalpha: Checks if a character is an alphabetic character.
    ft_isdigit: Checks if a character is a digit.
    ft_isalnum: Checks if a character is alphanumeric (letter or digit).
    ft_isascii: Checks if a character is part of the ASCII set.
    ft_isprint: Checks if a character is printable (including space).
    ft_toupper: Converts a lowercase letter to uppercase.
    ft_tolower: Converts an uppercase letter to lowercase.

2. Functions for String Manipulation

These functions operate on C strings:

    ft_strlen: Calculates the length of a string.
    ft_strlcpy: Copies a string into a buffer with size limitation.
    ft_strdup: Duplicates a string by allocating the necessary memory and copying its content.
    ft_strlcat: Appends a string to a buffer with size limitation.
    ft_strchr: Finds the first occurrence of a character in a string.
    ft_strrchr: Finds the last occurrence of a character in a string.
    ft_strncmp: Compares two strings up to a given number of characters.
    ft_strnstr: Finds the first occurrence of a substring in a string, within a given size.

3. Functions for Memory Operations

These functions handle low-level memory blocks:

    ft_memset: Fills a block of memory with a specified value.
    ft_bzero: Zeros out a block of memory.
    ft_calloc: Allocates memory for an array and initializes all elements to zero.
    ft_memcpy: Copies memory from one location to another.
    ft_memmove: Similar to memcpy, but handles overlapping memory regions.
    ft_memchr: Locates the first occurrence of a value in a memory block.
    ft_memcmp: Compares two memory blocks.

4. String Manipulation and Memory Allocation

These functions operate on strings or handle memory allocation related to strings:

    ft_substr: Creates a substring from a given string starting at a specific index and up to a specified length.
    ft_strjoin: Concatenates two strings into a newly allocated string.
    ft_strtrim: Removes specified characters from the beginning and end of a string.
    ft_split: Splits a string into an array of strings using a specified delimiter.
    ft_strmapi: Creates a new string by applying a function to each character of the given string, passing its index and character to the function.

Special Utility Function

    ft_atoi: Converts a string to an integer. Is useful for string-to-number conversion.
    ft_itoa: Converts an integer into a string representation.
    ft_striteri: Applies a function to each character of a string, passing its index and address of the character for in-place modification.

5. File Descriptor Operations

These functions interact with file descriptors:

    ft_putchar_fd: Writes a single character to the specified file descriptor.
    ft_putstr_fd: Writes a string to the specified file descriptor.
    ft_putendl_fd: Writes a string followed by a newline to the specified file descriptor.
    ft_putnbr_fd: Writes an integer to the specified file descriptor.

### Bonus

Linked List Manipulation

These functions are specifically designed to handle operations on singly linked lists, such as adding, removing, or iterating through elements.

        ft_lstnew: Creates a new node with a given content and initializes the next pointer to NULL.
        ft_lstadd_front: Adds a node at the beginning of the list.
        ft_lstadd_back: Adds a node at the end of the list.
        ft_lstsize: Returns the total number of nodes in the list.
        ft_lstlast: Retrieves the last node of the list.
        ft_lstiter: Iterates over the list and applies a function to the content of each node.
        ft_lstdelone: Frees a single node, using a custom function to delete its content.
        ft_lstclear: Deletes and frees all nodes from a list, starting from a given node, and sets the initial pointer to NULL.
        ft_lstmap: Applies a function to each node's content and creates a new list from the results. Frees nodes with a custom function if allocation fails.

### How to use it
```
  git clone this repository
  cd libft/
```
for using mandatory functions
```
  make
```
for using mandatory AND bonus functions
```
  make bonus
```
then you will get a static library : libft.a  
include libft.h in your c program
```
#include "path/directory/containing/libft.h"
```
include libft.a when compiling your c program
```
gcc main.c libft.a -o my_program
```
