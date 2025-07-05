void ft_putchar(char c);
void print_line(int x, char start, char mid, char end)
{
	int i;
	if (x <= 0)
		return;
	ft_putchar(start);
	i = 1;
	while (i < x - 1)
	{
		ft_putchar(mid);
		i++;
	}
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}
void rush(int x, int y)
{
	int j;
	if (x <= 0 || y <= 0)
		return;
	print_line(x, 'A', 'B', 'C');
	j = 1;
	while (j < y - 1)
	{
		print_line(x, 'B', ' ', 'B');
		j++;
	}
	if (y > 1)
		print_line(x, 'C', 'B', 'C');
}
