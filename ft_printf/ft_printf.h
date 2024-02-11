/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:10:55 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/11 13:38:28 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdlib.h>

void			ft_printf_linux_p(uintptr_t num, int *i, int *count);
void			ft_printf_macos_p(uintptr_t num, int *i, int *count);
int				ft_printf(const char *str, ...);
void			ft_printf_d(int num, int *i, int *count);
void			ft_printf_u(unsigned int num, int *i, int *count);
void			ft_printf_c(const int c, int *i, int *count);
void			ft_printf_s(const char *str, int *i, int *count);
void			ft_printf_x(int x_num, int *i, int *count);
void			ft_printf_capital_x(int num, int *i, int *count);
int				ft_itoa_base_x(int num);
int				ft_itoa_u(unsigned int n);
int				ft_itoa_d(int n);
int				ft_itoa_base_capital_x(int num);
uintptr_t		*ft_itoa_base_ptr(uintptr_t num);
void			ft_printf_percent(int *i, int *count);
int				ft_itoa_base_x(int num);
void			fill_arr(unsigned int *arr, unsigned int num);
void			write_arr_elements(unsigned int *arr, int *output,
					unsigned int num);
void			write_arr_elements_for_capital_x(unsigned int *arr, int *output,
					unsigned int num);
void			write_arr_elements_uintptr(uintptr_t *arr, int *output,
					uintptr_t num);
unsigned int	len_arr(unsigned int num);
unsigned int	len_arr_uintptr(uintptr_t num);

#endif