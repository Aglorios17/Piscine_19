

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 13:45:38 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/18 21:34:00 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char ft_choixtableau(int argc, char **argv)
{
	int a;
	
	a = 0;
	while (argv[1][a])
	{
		if (argv[1][a] <= 8)
		{
			a = a + 2;
			tab[a];
			a++;
		}	
		if (argv[1][a] > 8 && argv[1][a] <= 16)
		{
			a = a + 2;
			tab[a];
			a++;
		}	
		if (argv[1][a] > 16 && argv[1][a] <= 24)
		{
			a = a + 2;
			tab[a];
			a++;
		}			
		if (argv[1][a] > 24 && argv[1][a] <= 32)
		{
			a = a + 2;
			tab[a];
			a++;
		}
	}
}

int grille(int argc, int argv)
{
	int cpt;
	int a;
	int b;
	int first_a;
	int first_b;

	a = 0;
	b = 0;
	while (grille_init[a][b] != 0)
	{
		if (b == 4)
		{
			b = 0;
			a++;
		}
		else
			b++;
	}
	first_a = a;
	first_b = b;
}

void putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokutest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 08:01:58 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/18 21:33:57 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h> 

int	test(int puzzle[][4], int row, int col, int num)
{
	int rowstart = (row/2) * 2;
	int colstart = (col/2) * 2;
	int a = 0;
	int b;

	while (a <= 9)
	{
		if (puzzle[row][a] == num)
			return (0);
		if (puzzle[a][col] == num)
			return (0);
		if (puzzle[rowstart + (a % 2)][colstart + (a/2)] == num)
			return (0);
}
		a++;
	}
	return (1);
}

int fillsudoku(int puzzle[][4], int row, int col)
{
	int a;

	if (row < 4 && col < 4)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 4)
				return fillsudoku(puzzle, row, col + 1);
			else if ((row + 1) < 4)
				return fillsudoku(puzzle,row + 1, 0);
			else
				return (1);
		}
		else
		{
			while(a < 4)
			{
				if (test(puzzle, row,col, a + 1))
				{
					puzzle[row][col] = a + 1;
					if ((col + 1) < 4)
					{
						if (fillsudoku((puzzle, row, col + 1))
								return (1);
						else
							puzzle[row][col] = 0;
					}
					else 
						return (1);
				}
				a++;
			}
		}
		return (0);
	}
	else 
		return (1);
}

int main()
{
	int a = 1;
	int b;
	int puzzle[4][4] = {{1, 2, 3, 4},
						{2, 0, 0, 0},
						{3, 0, 0, 0},
						{4, 1, 0, 3}};
	if (fillsudoku(puzzle, 0, 0))
	{
		while (a < 5)
		{
			printf("' '%d", puzzle[a - 1][b -1]);
			printf("' '\n");
			a ++;
		}
	}
	else 
		printf("\n\nERROR\n\n");
		return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:25:42 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/18 21:33:06 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <unistd.h>
#include <stdio.h>

void return_error()
{
	write(1, "Error\n", 6);
}

char tableau(char *carre)
{	
	carre = "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n";

	int a;

	a = 0;
	while (carre[a] != '\0')
	{
		write (1, &carre[a], 1);
		a++;
	}
}

int main(int argc, char **argv)
{	
	int a;

	a = 0;
	if (argc != 2)
		return_error();
		return(0);
	while (argv[1][a] != '\0')
		a++;
	if (a != 31)
		return_error();
		return(0);
	a = 0;
	while (a < 31)
	{
		if (argv[1][a] > '0' && argv[1][a] < '5' )
			a = a + 2;
		else
			return_error();
			return (0);
			a = 31;
	}
	a = 1;
	while (a < 16)
	{
		if (argv[1][a] == ' ')
			a = a + 2;
		else
			return_error();
			return(0);
			a = 16;
	}
	write(1, "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n", 32); 	

}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scammara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 02:51:17 by scammara          #+#    #+#             */
/*   Updated: 2019/08/18 12:45:07 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <unistd.h>
#include <strings.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_row1left(int x, int y, char *tab)
{
	int curseur;

	curseur = -1;
	while (curseur++ < x - 1)
	{
		if ((y == 0 && curseur == 0))
			ft_putchar(tab[0]);
		else if (curseur == 1)
			ft_putchar(tab[1]);
		else if (curseur == 2)
			ft_putchar(tab[2]);
		else if (curseur == 3)
			ft_putchar(tab[3]);
	}
}

void	ft_col1up(int x, char *tab)
{
	int curseur;

	curseur = -1;
	while (curseur++ < x - 1)
	{
		if (curseur == 0 || curseur == x - 1)
			ft_putchar(tab[1]);
		else
			ft_putchar(tab[3]);
	}
}

void	rush(int x, int y)
{
	char	*tab;
	int		line;

	line = -1;
	tab = "1234 ";
	if (x <= 0 || y <= 0)
		return;

	while (line++ < y - 1)
	{
		if (line == 0 || line == y - 1)
			ft_row1left(x, line, tab);
		else
			ft_col1up(x, tab);
		ft_putchar('\n');
	}
}

int		main(void)
{
	rush(4, 4);
}
*/

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableautest2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 12:45:19 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/18 16:10:22 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

int	ft_tableau(tab[4][4])
{
	dest[16]

	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 4)
	{
		while (b < 4)

	}
}

char *carre

carre = "0 0 0 0\n0 0 0 0\n0 0 0 0\n0 0 0 0\n"

int a;

a = 0;

while (carre[a] != '\0')
{
	write (1, &carre[a], 1);
	a++;
}


// rtfm strcpy
// **carre 2 dimension 
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:10:33 by aglorios          #+#    #+#             */
/*   Updated: 2019/08/18 21:33:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

char tableau(char *carre)
{
	int a;

	a = 0;
	while (carre[a])
	{	
		if (a <= 7)
		{	
			write(1, &carre[a], 1);
			a++;
		}
		else if (a == 8)
		{
				write(1, '\n', 2);
				a++;
		}
		else if (a >= 8)
			if (a <= 15)
			{
				write(1, &carre[a], 1);
				a++;
			}
		else if (a == 16)
		{
				write(1, '\n', 2);
				a++;
		}
		else
			return (0);
	}
}

int main(void)
{
	char carre[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	tableau(carre);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokusolver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-hel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 13:53:29 by qvan-hel          #+#    #+#             */
/*   Updated: 2019/08/18 20:41:17 by qvan-hel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
​
#include "sudoku.h"
​
int main()
{
	int ** puzzle;
​
	puzzle = createPuzzle();
	
	printPuzzle(puzzle);
​
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-hel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:10:24 by qvan-hel          #+#    #+#             */
/*   Updated: 2019/08/18 20:41:12 by qvan-hel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
​
#include "sudoku.h"
​
int ** createPuzzle()
{
	int ** puzzle;
	int i;
	int j;
	int array[4][4]= {0, 0, 0, 0,
					  0, 0, 0, 0,
					  0, 0, 0, 0,
					  0, 0, 0, 0 };
	
	puzzle = (int**)malloc(sizeof(int*)*4);
​
	i = 0;
	while (i < 4)
	{
		puzzle[i] = (int*)malloc(sizeof(int)*4);
		i++;
		{
			j = 0;
			while (j < 4)
			{
				puzzle[i][j] = array[i][j];
				j++;
			}
		}
	}
​
	return puzzle;
}
​
void	printPuzzle(int ** puzzle)
{
	int i;
	int j;
	
	printf(" ");
	i = 0;
	while (i < 4)
	{
		i++;
		{
			j = 0;
			while (j < 4)
			{
				j++;
				{
					printf(" %d ", puzzle[i][j]);
					if (((j + 1) % 4) == 0)
					{
						printf("|");
					}
				}
			}
		}
		printf("\n");
		if (((i + 1) % 4) == 0)
		{
			printf("----\n");
		}
		
	}
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokusolve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qvan-hel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:00:51 by qvan-hel          #+#    #+#             */
/*   Updated: 2019/08/18 20:42:51 by qvan-hel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
​
#include <stdio.h>
#include <stdlib.h>
​
int ** createPuzzle();
void	printPuzzle(int ** puzzle);
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scammara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 02:51:17 by scammara          #+#    #+#             */
/*   Updated: 2019/08/18 16:54:25 by scammara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
​
#include <unistd.h>
#include <strings.h>
​
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
​
void	ft_row1left(int x, int y, char *tab)
{
	int curseur;
​
	curseur = -1;
	while (curseur++ < x - 1)
	{
		if ((y == 0 && curseur == 0))
			ft_putchar(tab[0]);
		else if (curseur == 1)
			ft_putchar(tab[3]);
		else if (curseur == 2)
			ft_putchar(tab[2]);
		else if (curseur == 3)
			ft_putchar(tab[3]);
	}
}
​
void	ft_col1up(int x, char *tab)
{
	int curseur;
​
	curseur = -1;
	while (curseur++ < x - 1)
	{
		if (curseur == 0 || curseur == x - 1)
			ft_putchar(tab[1]);
		else
			ft_putchar(tab[3]);
	}
}
​
void	rush(int x, int y)
{
	char	*tab;
	int		line;
​
	line = -1;
	tab = "1234 ";
	if (x <= 0 || y <= 0)
		return;
​
	while (line++ < y - 1)
	{
		if (line == 0 || line == y - 1)
			ft_row1left(x, line, tab);
		else
			ft_col1up(x, tab);
		ft_putchar('\n');
	}
}
​
int		main(void)
{
	rush(7, 4);
}
*/
