/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: im_ane <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 00:39:54 by im_ane            #+#    #+#             */
/*   Updated: 2024/07/05 00:40:52 by im_ane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'z'))
		return (1024);
	return (0);
}
/*#include <stdio.h>
int main ()
{
	int	result;

    result = ft_isalpha(')');
    if(result)
    printf("%c is alphabetic",')');
    else
    printf("%c is not alphabetic",')');
}
*/
