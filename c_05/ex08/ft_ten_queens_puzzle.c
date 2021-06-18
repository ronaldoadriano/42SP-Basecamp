/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edfelipe <edfelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:58:59 by edfelipe          #+#    #+#             */
/*   Updated: 2021/06/18 16:59:05 by edfelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb / 2;
	if (nb < 2)
		return (0);
	while (nb % i != 0 || i == 1)
	{
		if (i == 1)
			return (1);
		i--;
	}
	return (0);
}