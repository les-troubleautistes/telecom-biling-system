/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   payment.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:31:41 by alexis_marech     #+#    #+#             */
/*   Updated: 2026/05/06 23:54:52 by alexis_marech    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
#include <string.h>

// Function to view payment for a customer
void	viewPayment(char phone_number[])
{
	int	i;

	i = 0;
	while (i < customerCount)
	{
		if (strcmp(customers[i].phoneNumber, phone_number) == 0)
		{
			printf("\nTotal Bill for %s: $%.2f\n",
				customers[i].name,
				customers[i].totalBill);
			return ;
		}
		i++;
	}
	printf("\nRecord not found!\n");
}
