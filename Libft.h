/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:58:31 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/31 07:14:55 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Libft_h
#define Libft_h
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *str);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putstr(char const *str);
void				ft_putstr_fd(const char *str, int fd);
char				*ft_strcat(char *s1, char *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s1, int s2);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcpy(char *dst, const char *src);
unsigned int		ft_strlen(const char *str);
char				*ft_strncat(char *s1, char *s2, size_t n);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s1, int n);
char				*ft_strstr(const char *s1, const char *s2);
char				ft_tolower(unsigned char c);
char				ft_toupper(unsigned char c);
void				ft_bzero(void *s, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void	*dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void	*b, int c, size_t len);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strdup(const char *src);
int					ft_atoi(const char *str);
int					ft_isspace(int c);
int					ft_iswspace(int c);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
char				*ft_strdup(const char *src);

#endif
