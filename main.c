#include <stdio.h>

int	main(void)
{
	int		f;
	int		p;

	f = ft_printf("Characters: %c %c %c %c %c %c\n", 'a', 99, 125 + 1, -1, 200, '\0');
	p = printf("Characters: %c %c %c %c %c %c\n", 'a', 99, 125 + 1, -1, 200, '\0');
	if (f == p)
		ft_printf("OK\n");
	f = ft_printf("string: %s %s %s\n", "hola", "", (char *)0);
	p = printf("string: %s %s %s\n", "hola", "", (char *)0);
	if (f == p)
		ft_printf("OK\n");
	f = ft_printf("Integer: %i %i %i %i\n", 9, 100 + 20 + 3, -5, 0);
	p = printf("Integer: %i %i %i %i\n", 9, 100 + 20 + 3, -5, 0);
	if (f == p)
		ft_printf("OK\n");
	f = ft_printf("sombolo: %%\n");
	p = printf("simbolo: %%\n");
	if (f == p)
		ft_printf("OK\n");
	return (0);
}
