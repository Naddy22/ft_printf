/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoisan <namoisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:54:07 by namoisan          #+#    #+#             */
/*   Updated: 2023/11/08 10:54:37 by namoisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_unsigned(unsigned int n, int fd);
size_t	ft_strlen(const char *s);
void	ft_putnbr_base(unsigned long nbr, char *base);
int		ft_putchar(char c);
int		ft_putnbr_unsigned_size(int nbr);
int		ft_putnbr_size(int nbr);
int		ft_putstr(char *str);
int		ft_putnbr_base_size(unsigned long nbr, char *base);
int		ft_check_pourcent(char type, va_list args);

#endif
