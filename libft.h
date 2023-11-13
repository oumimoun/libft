/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */

/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:49:37 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/06 14:51:07 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int ft_strlen(const char *str);
int ft_atoi(char *str);
int ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memset(void *ptr, int value, size_t num);
void ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

char    *ft_strdup(const char *s1);
void    *ft_memmove(void *dest, const void *src, size_t len);

void	*ft_calloc(size_t count, size_t size);
void    *ft_memcpy(void *dest, const void *src, size_t n);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
char    *ft_strjoin(char const *s1, char const *s2);

char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif
