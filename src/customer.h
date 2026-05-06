/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   customer.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkij <selk11@proton.me>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:03:41 by selkij            #+#    #+#             */
/*   Updated: 2026/05/06 15:39:04 by selkij           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUSTOMER_H
# define CUSTOMER_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct s_customer
{
	char	name[15];
	char	phone_number[10];
};

void	new_customer(const char name[15], const char phone_number[10]);

#endif // !CUSTOMER_H
