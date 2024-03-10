# libs
## a C-Standard Library Remake
This is a extended version of the __libft__ project for [42Heilbronn](https://www.42heilbronn.de/de/curriculum/)'s curriculum, also containing the __ft_printf__ as well as the __get_next_line__ project, plus sume extra helpful functions.

## debug
added function to print out two dimentional char arrays
```
void	ft_print2(char **split);
```

## libft
#### free
added function to free two dimentianl char arrays
```
void	ft_free2(char **split);
```
#### list
functions to work with linked lists
````
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
````

#### memory
functions to work with memory
```
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
```

#### string
functions to work with strings
```
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strcmp(char *str1, char *str2);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *str);
int	ft_splitlen(char **split);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtok(char *s, const char *delim);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strdupn(char *s, int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);
char	**ft_splitdup(char **split);
char	**ft_splitjoin(char **split, char *str);
```
added functions are:

+ __splitdup__: call strdup on every member of a two dimentional array
+ __splitjoin__: call join a new member to a two dimentional array


## ft_printf
both ft_printf functions behave like the original one, handling `%c %s %d %i %p %u %x %X %%`, without flags

`int	ft_printf(const char *str, ...);`

`int	ft_printf(int fd, const char *str, ...);`

added function:

+ __ft_printf_fd__: writes to the passed fd

## get_next_line
`char	*get_next_line(int fd);`
