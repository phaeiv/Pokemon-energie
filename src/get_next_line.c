#include "include/include.h"

int	my_strlen(char const *str)
{
	int compteur = 0;

	while (str[compteur] != '\0')
		compteur ++;
	return (compteur);
}

char	*my_strcat(char *dest, char *src)
{
	int lenght = my_strlen(dest);
	int i = 0;
	int j = 0;
	char *new = malloc(sizeof(char) * (lenght + my_strlen(src) + 2));

	for (;dest[i] != '\0'; i++)
		new[i] = dest[i];
	for (;src[j] != '\0'; j++)
		new[j + i] = src[j];
	new[j + i] = '\0';
	return (new);
}

char	*sorting_buffer(int i, char *str, var_t *var)
{
	char *tmp = malloc(sizeof(char) * (READ_SIZE + 1));
	int j = 0;

	i++;
	while (i < var->result) {
		tmp[j] = str[i];
		i++;
		j++;
	}
	var->result = j;
	return (tmp);
}

char	*save_new_buffer(char *tmp, var_t *var, char *str)
{
	int i = 0;
	char *new = malloc(sizeof(char) * (var->result + 2));

	for (i = 0; i < var->result && var->a == 0; i++) {
		new[i] = tmp[i];
		if (tmp[i] == '\n' || tmp[i] == '\0') {
			new[i] = '\0';
			var->buffer = sorting_buffer(i, var->buffer, var);
			str = my_strcat(str, new);
			var->a++;
			return (str);
		}
	}
	new[i] = '\0';
	str = my_strcat(str, new);
	free(new);
	return (str);
}

char	*get_next_line(int fd)
{
	static int nb_line = 0;
	static var_t var;
	char *str = malloc(1);
	var.a = 0;
	if (nb_line == 0) {
		var.buffer = malloc(sizeof(char) * (READ_SIZE + 1));
		if (fd == -1 || var.buffer == NULL)
			return (NULL);
		nb_line++;
	}
	str[0] = '\0';
	str = save_new_buffer(var.buffer, &var, str);
	while (var.a == 0) {
		var.result = read(fd, var.buffer, READ_SIZE);
		if (var.result == 0)
			return (NULL);
		str = save_new_buffer(var.buffer, &var, str);
	}
	return (str);
}
