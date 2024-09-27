/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 00:39:54 by im_ane            #+#    #+#             */
/*   Updated: 2024/08/21 21:40:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}
/*#include <stdio.h>
int main ()
{
	int	result;

    result = ft_isalpha(')');
    if(result)
    printf("is alphabetic\n");
    else
    printf("is not alphabetic\n");
    return (0);
}
*/
