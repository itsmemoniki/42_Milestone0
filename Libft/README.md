*This project has been created as part of the 42 curriculum by msouza-c.*

# Description
Libft is a library with very useful functions that may be used in the future. This project's main goals are to compreehend exacly how each member function of the Libft library works by implementing them, as well as learning how to make a library itself.

## Functions
Libft contains a set of functions with different purpuses.

### Libc functions
Reimplementations of a set of functions from **libc**

#### Character check and manipulation:

| Function | Description |
| :- | :- |
| `ft_isalpha` | Check if c is alphabetical. |
| `ft_isdigit` | Check if c is digit. |
| `ft_isalnum` | Check if c is alphanumerical. |
| `ft_isascii` | Check if c is ASCII. |
| `ft_isprint` | Check if c is printable. |
| `ft_toupper` | Lower case to upper case char conversion. |
| `ft_tolower` | Upper case to lower case char conversion. |
| `ft_atoi` | Converts char to int. |

#### Memory manipulation

| Function | Description |
| :- | :- |
| `ft_memset` | Fills memory with byte. |
| `ft_bzero` | Fill memory with zero (0). |
| `ft_memcpy` | Copies memory without overlap. |
| `ft_memmove` | Copies memory that overlap. |
| `ft_memchr` | Finds first occurence of byte. |
| `ft_memcmp` | Compares byte by byte. |
| `ft_calloc` | Memory allocation of memory filled with zeroes. |
| `ft_strdup` | Duplicate a string with memory allocation. |

#### String manipulation

| Function | Description |
| :- | :- |
| `ft_strlen` | Counts length of string. |
| `ft_strlcpy` |Copies one string to another up to size. |
| `ft_strlcat` | Concatenates one string to another up to size. |
| `ft_strchr` | Finds c in a string. |
| `ft_strrchr` | Finds c in a string starting from the end. |
| `ft_strncmp` | Compare strings up to n. |
| `ft_strnstr` | Finds smaller string inside a string up to len. |


### Additional functions
MA - Functions that allocate memory using malloc().

| Function | Description |
| :- | :- |
| `ft_substr` | (MA) Creates a substring from a string. |
| `ft_strjoin` | (MA) Joins two strings into a new one. |
| `ft_strtrim` | (MA) Trims chars from the beginning and end of a string. |
| `ft_split` | (MA) Splits a string into a array of strings. |
| `ft_itoa` | (MA) Integer to char conversion. |
| `ft_strmapi` | (MA) Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character of a string |

#### Functions with file descriptor

| Function | Description |
| :- | :- |
| `ft_putchar_fd` | Outputs a character to the specified fd. |
| `ft_putstr_fd` | Outputs a string to the specified fd. |
| `ft_putendl_fd` | Outputs a string to the specified fd + newline. |
| `ft_putnbr_fd` | Outputs an integer to the specified fd. |

### Linked List
Linked lists are useful for memory and string manipulation. They use the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```
The members of the t_list struct are: 

• content: The data contained in the node.

• next: The address of the next node, or NULL if the current node is the last one

| Function | Description |
| :- | :- |
| `ft_lstnew` | Allocates memory and makes a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Takes a node and frees its content. |
| `ft_lstclear` | Deletes and frees the given node and all its successors; Set the pointer to the list to NULL. |
| `ft_lstiter` | Applies the function ’f’ to the content of each node. |
| `ft_lstmap` | Applies the function ’f’ to each node’s content; Creates
a new list resulting of the successive applications of the function ’f’. |


# Instructions

## Requirements
Your must have C and a C compiler installed (cc).

## Compilation
Go to the repositorie's root and run the following commands:

- make - builds libft.a;
- make clean - removes all .o files;
- make fclean - removes all .o files and libft.a;
- make re - runs fclean then make for a fresh recompile;


# Resources
This project was made with the help of other collegues (function explanation, catching bugs and brainstorming solutions), with the consultation of the websites below, and AI.
- geeksforgeeks.org
- stackoveflow.com

AI was used in this project for the explanation of code and debbuging. All code was made by the creator while being throughly studied and reviewed.
