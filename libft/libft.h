/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:54:38 by mpinson           #+#    #+#             */
/*   Updated: 2016/12/06 13:26:23 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list			*ft_lstnew(void const *content, size_t content_size);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				absolut(int i);
int				ft_iterative_power(int nb, int power);
int				ft_recursive_factorial(int nb);
char			*ft_strjoin_free(char *s1, char*s2, int mode);

char			*ft_strstr(char *str, char *to_find);
char			*ft_strchr(char *s, int c);
char			*ft_strnstr(char *str, char *to_find, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncat(char *dest, const char *src, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dest, const char *src);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strchr(char *s, int c);
size_t			ft_strlcat(char *dest, const char *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
void			*ft_memcpy(const void *s1, const void *s2, size_t n);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
void			*ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
char			*ft_strrev(char *str);
char			**ft_strsplit(char const *str, char c);
char			*ft_strtrim(char const *s);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f)(char *));
int				ft_strequ(char const *s1, char const *s2);
void			ft_putchar_fd(char c, int fd);

char			*ft_itoa(int n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char			*ft_strrchr(const char *str, int c);

#endif