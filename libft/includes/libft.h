/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:33:55 by wdebotte          #+#    #+#             */
/*   Updated: 2022/04/04 10:46:47 by wdebotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include "ft_printf.h"
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//----- Strings Stock -----

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			is_whitespace(int c);

char		*ft_strdup(const char *s);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_substr(char const *str, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *str, char const *charset);
char		**ft_split(char const *str, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar(char c);
void		ft_putstr(const char *str);

//----- Memory Stock -----

int			ft_memcmp(const void *s1, const void *s2, size_t n);

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t size);
void		*ft_memmove(void *dst, const void *src, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);

//----- File Stock -----

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

int			is_ext_correct(const char *file, const char *ext);

char		*get_next_line(int fd);

//----- List Stock -----

int			ft_lstsize(t_list *lst);

void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));

t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstnew(void *content);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//----- Int Stock -----

int			ft_atoi_base(const char *str, const char *base);
int			ft_atoi(const char *str);

char		*ft_itoa_base(int nbr, char *base);
char		*ft_itoa(int n);

void		ft_putnbr(int nbr);
long int	ft_atoli(const char *str);

#endif
