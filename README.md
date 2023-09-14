# libft
the first project of 42 cadet. The project is about understanding the way these function work by creating **my own library**.

# Table of contents
- [Mandatory Part](#mandatory-part)
	- [part 1 - Libc functions](#part-1---libc-function)
	- [part 2 - Additional functions](#part-2---additional-function)
- [Bonus Part](#bonus-part)
- [Author](#author)
## Mandatory part
### Part 1 - Libc function
Redoing a set of functions from libc. My ft_function will have the same prototypes and implement the same behaviors as the originals.

function name | prototype | return value | Description
------------- |----------- |------------- |----------- |
| [ft_atoi](ft_atoi.c)            | `int ft_atoi(const char *str)`    | Converted integer value         | Converts a string `str` to an integer. |
| [ft_bzero](ft_bzero.c)          | `void ft_bzero(void *s, size_t n)` | None                            | Sets the first `n` bytes of the memory area pointed to by `s` to zero. |
| [ft_calloc](ft_calloc.c)        | `void *ft_calloc(size_t count, size_t size)` | Pointer to allocated memory  | Allocates memory for an array of `count` elements, each of `size` bytes, and initializes the memory to zero. |
| [ft_isalnum](ft_isalnum.c)     | `int ft_isalnum(int c)`             | Zero for false, non-zero for true | Tests if the character is an alphanumeric character (a-z A-Z and 0-9).         |
| [ft_isalpha](ft_isalpha.c)     | `int ft_isalpha(int c)`             | Zero for false, non-zero for true | Tests for any character for which `isupper` or `islower` is true (a-z and A-Z). |
| [ft_isascii](ft_isascii.c)     | `int ft_isascii(int c)`             | Zero for false, non-zero for true | Tests if the character is an ASCII character (0-127).                         |
| [ft_isdigit](ft_isdigit.c)     | `int ft_isdigit(int c)`             | Zero for false, non-zero for true | Tests if the character is a decimal digit character (0-9).                   |
| [ft_isprint](ft_isprint.c)     | `int ft_isprint(int c)`             | Zero for false, non-zero for true | Tests if the character is an ASCII printable character (32-126).              |
| [ft_memchr](ft_memchr.c)        | `void *ft_memchr(const void *s, int c, size_t n)` | Pointer to the first occurrence of `c` | Locates the first occurrence of byte `c` in the memory area `s`. |
| [ft_memcmp](ft_memcmp.c)        | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Comparison result | Compares the first `n` bytes of memory areas `s1` and `s2`. |
| [ft_memcpy](ft_memcpy.c)        | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Pointer to the destination `dest` | Copies `n` bytes from the memory area `src` to `dest`. |
| [ft_memmove](ft_memmove.c)      | `void *ft_memmove(void *dest, const void *src, size_t n)` | Pointer to the destination `dest` | Copies `n` bytes from the memory area `src` to `dest`, handling overlapping memory regions correctly. |
| [ft_memset](ft_memset.c)        | `void *ft_memset(void *s, int c, size_t n)` | Pointer to the memory area `s` | Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`. |
| [ft_strchr](ft_strchr.c)        | `char *ft_strchr(const char *s, int c)` | Pointer to the first occurrence of `c` | Locates the first occurrence of character `c` in the string `s`. |
| [ft_strdup](ft_strdup.c)        | `char *ft_strdup(const char *s)`    | Pointer to the duplicated string | Duplicates the string `s` by allocating memory for a new copy. |
| [ft_strlcat](ft_strlcat.c)      | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Total length of the resulting string | Appends the string `src` to the end of `dst`, ensuring that the resulting string is null-terminated and not longer than `size-1` bytes. |
| [ft_strlcpy](ft_strlcpy.c)      | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | Length of the source string | Copies the string `src` to `dst`, ensuring that the destination is null-terminated and not longer than `size-1` bytes. |
| [ft_strnstr](ft_strnstr.c)      | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Pointer to the first occurrence of `needle` | Locates the first occurrence of the substring `needle` in the string `haystack`, with a maximum length of `len`. |
| [ft_strrchr](ft_strrchr.c)      | `char *ft_strrchr(const char *s, int c)` | Pointer to the last occurrence of `c` | Locates the last occurrence of character `c` in the string `s`. |
| [ft_strncmp](ft_strncmp.c)      | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Comparison result | Compares the first `n` bytes of strings `s1` and `s2`. |
| [ft_strlen](ft_strlen.c)        | `size_t ft_strlen(const char *s)`    | Length of the string `s`       | Computes the length of the string `s` (excluding the null-terminator). |
| [ft_tolower](ft_tolower.c)      | `int ft_tolower(int c)`             | Converted lowercase character  | Converts an uppercase character to its lowercase equivalent. |
| [ft_toupper](ft_toupper.c)      | `int ft_toupper(int c)`             | Converted uppercase character  | Converts a lowercase character to its uppercase equivalent. |

### Part 2 - Additional function
In this second part, it is a set of function that are either not in the libc or that are part of it in a dirfferent form.

function name | prototype | return value | Description
------------- |----------- |------------- |----------- |
| [ft_substr](ft_substr.c)         | `char *ft_substr(char const *s, unsigned int start, size_t len)` | A new dynamically allocated string | Allocates and returns a substring from the string `s` starting at index `start` with a maximum length of `len`. |
| [ft_strjoin](ft_strjoin.c)       | `char *ft_strjoin(char const *s1, char const *s2)`             | A new dynamically allocated string | Allocates and returns a new string resulting from concatenating `s1` and `s2`. |
| [ft_strtrim](ft_strtrim.c)       | `char *ft_strtrim(char const *s1, char const *set)`            | A new dynamically allocated string | Allocates and returns a new string that is a copy of `s1` with leading and trailing characters from the `set` removed. |
| [ft_split](ft_split.c)           | `char **ft_split(char const *s, char c)`                      | An array of strings                | Allocates and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. |
| [ft_itoa](ft_itoa.c)             | `char *ft_itoa(int n)`                                         | A new dynamically allocated string | Allocates and returns a new string representing the integer `n`.               |
| [ft_strmapi](ft_strmapi.c)       | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | A new dynamically allocated string | Allocates and returns a new string that is the result of applying the function `f` to each character in `s`. |
| [ft_striteri](ft_striteri.c)     | `void ft_striteri(char *s, void (*f)(unsigned int, char *))`    | None                               | Applies the function `f` to each character of the string `s` with its index as an argument. |
| [ft_putchar_fd](ft_putchar_fd.c) | `void ft_putchar_fd(char c, int fd)`                           | None                               | Writes the character `c` to the given file descriptor `fd`.                     |
| [ft_putstr_fd](ft_putstr_fd.c)   | `void ft_putstr_fd(char *s, int fd)`                           | None                               | Writes the string `s` to the given file descriptor `fd`.                        |
| [ft_putnbr_fd](ft_putnbr_fd.c)   | `void ft_putnbr_fd(int n, int fd)`                             | None                               | Writes the integer `n` to the given file descriptor `fd`.                       |

## Bonus part
function name | prototype | return value | Description
------------- |----------- |------------- |----------- |
| [ft_lstadd_back](ft_lstadd_back.c) | `void ft_lstadd_back(t_list **lst, t_list *new)`    | None                         | Adds the element `new` to the end of the linked list `lst`.                   |
| [ft_lstadd_front](ft_lstadd_front.c) | `void ft_lstadd_front(t_list **lst, t_list *new)` | None                         | Adds the element `new` to the beginning of the linked list `lst`.             |
| [ft_lstclear](ft_lstclear.c)   | `void ft_lstclear(t_list **lst, void (*del)(void *))` | None                        | Clears the linked list `lst` and frees the memory of each node using the provided `del` function. |
| [ft_lstdelone](ft_lstdelone.c) | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | None                       | Deletes a single element `lst` from the linked list and frees its memory using the provided `del` function. |
| [ft_lstiter](ft_lstiter.c)     | `void ft_lstiter(t_list *lst, void (*f)(void *))`    | None                         | Iterates through the linked list `lst` and applies the function `f` to each element. |
| [ft_lstlast](ft_lstlast.c)     | `t_list *ft_lstlast(t_list *lst)`                   | Pointer to the last element  | Returns a pointer to the last element in the linked list `lst`.               |
| [ft_lstmap](ft_lstmap.c)       | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | New list or `NULL` on failure | Iterates through the linked list `lst` and applies the function `f` to each element, creating a new list with the results. |
| [ft_lstnew](ft_lstnew.c)       | `t_list *ft_lstnew(void *content)`                 | New element or `NULL` on failure | Creates a new list element with the provided `content` and initializes the rest of the structure. |
| [ft_lstsize](ft_lstsize.c)     | `int ft_lstsize(t_list *lst)`                      | Number of elements in the list | Counts and returns the number of elements in the linked list `lst`.          |

##### Author
Napat Palavathanakul (intra : nappalav)
[github.com/ppenquinn](https://github.com/ppenquinn)



