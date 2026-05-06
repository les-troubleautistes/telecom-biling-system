/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   customer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selkij <selk11@proton.me>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:02:44 by selkij            #+#    #+#             */
/*   Updated: 2026/05/07 00:00:23 by alexis_marech    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "customer.h"
#include <string.h>

t_customer	customers[100];
int			customerCount = 0;

void	new_customer(const char name[15], const char phoneNumber[10])
{
	struct s_customer	customer;

	strcpy(customer.name, name);
	strcpy(customer.phoneNumber, phoneNumber);
	printf("Got %s with num %s\n", customer.name, customer.phoneNumber);
}
