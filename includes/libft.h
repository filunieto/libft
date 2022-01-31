/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:49:19 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/21 11:49:19 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define	LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int ft_tolower(int c);
int ft_upper(int c);
int	ft_strlen(char *str);
int ft_atoi(const char *nptr);



int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t size);

char	*ft_strchr(const char *s, int c);
char	*ft_strncat(char *dest, const char *src, size_t size);

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, const char *src, size_t size);

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

char *strdup(const char *s);


#endif
