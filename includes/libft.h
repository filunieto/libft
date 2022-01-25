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

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int ft_tolower(int c);
int ft_upper(int c);
int	ft_strlen(char *str);


int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t size);

char	*ft_strncat(char *dest, const char *src, size_t size);

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, const char *src, size_t size);


#endif
