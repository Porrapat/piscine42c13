/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	void	*result;

	result = NULL;
	if (root->left)
		result = btree_search_item(root->left, data_ref, cmpf);
	if (!result && cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (!result && root->right)
		result = btree_search_item(root->right, data_ref, cmpf);
	return (result);
}
