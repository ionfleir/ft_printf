#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int		f;
    int		p;
    
    ft_printf("Characters: %c %c %c %c %c %c\n", 'a', 99, 125 + 1, -1, 200, '\0');
    printf("Characters: %c %c %c %c %c %c\n", 'a', 99, 125 + 1, -1, 200, '\0');
    if (f == p)
		ft_printf("OK\n");
    return (0);
}
