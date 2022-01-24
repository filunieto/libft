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

int	ft_isalpha(char c);
int	ft_isalnum(char c);
int	ft_isascii(int c);
int	ft_isdigit(char c);
int	ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);

#endif
