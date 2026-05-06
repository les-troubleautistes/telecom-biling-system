/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis_marechal <michalex37@proton.me>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 23:48:16 by alexis_marech     #+#    #+#             */
/*   Updated: 2026/05/06 23:51:24 by alexis_marech    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECORD_H
# define RECORD_H

void	addRecord(void);
void	viewRecords(void);
void	modifyRecord(char *phone_number);
void	searchRecord(char *phone_number);
void	deleteRecord(char *phone_number);

#endif
