/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:16:33 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/20 13:16:33 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ex00/ft_btree.h"

int		main(void)
{
	int		data;
	t_btree	*btree;

	data = 10;
	btree = btree_create_node((void *)&data);
	printf("btree->left: %p\n", btree->left);
	printf("btree->right: %p\n", btree->right);
	printf("btree->item: %d\n", *((int *)(btree->item)));
}
