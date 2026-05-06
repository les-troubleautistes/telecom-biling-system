/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 23:43:20 by alexis_marech     #+#    #+#             */
/*   Updated: 2026/05/06 23:51:48 by alexis_marech    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "record.h"
#include "payment.h"

void displayMenu()
{
    printf("\n1. Add New Record\n");
    printf("2. View List of Records\n");
    printf("3. Modify Record\n");
    printf("4. View Payment\n");
    printf("5. Delete Record\n");
    printf("6. Exit\n");
}

int	main(void)
{
	int		choice;
	char	phone_number[15];

	while (1)
	{
		displayMenu();
		printf("Enter your choice: ");
		scanf("%d", &choice);
		if (choice == 1)
			addRecord();
		else if (choice == 2)
			viewRecords();
		else if (choice == 3)
		{
			printf("\nEnter phone number to modify record: ");
			scanf("%s", phone_number);
			modifyRecord(phone_number);
		}
		else if (choice == 4)
		{
			printf("\nEnter phone number to view payment: ");
			scanf("%s", phone_number);
			viewPayment(phone_number);
		}
		else if (choice == 5)
		{
			printf("\nEnter phone number to search record: ");
			scanf("%s", phone_number);
			searchRecord(phone_number);
		}
		else if (choice == 6)
		{
			printf("\nEnter phone number to delete record: ");
			scanf("%s", phone_number);
			deleteRecord(phone_number);
		}
		else if (choice == 7)
			return (0);
		else
			printf("\nInvalid choice! Please try again.\n");
	}
	return (0);
}
