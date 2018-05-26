/*
** EPITECH PROJECT, 2017
** task10
** File description:
** my str isnum
*/
#include "include/include.h"

int	my_str_isnum(char const *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i += 1;
	}
	return (1);
}
