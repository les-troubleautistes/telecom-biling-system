/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   customer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkij <selk11@proton.me>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:02:44 by selkij            #+#    #+#             */
/*   Updated: 2026/05/06 15:40:53 by selkij           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "customer.h"

void	new_customer(const char name[15], const char phone_number[10])
{
	struct s_customer	customer;

	strcpy(customer.name, name);
	strcpy(customer.phone_number, phone_number);
	printf("Got %s with num %s\n", customer.name, customer.phone_number);
}
