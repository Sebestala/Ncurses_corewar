#include "libft/src/libft.h"
#include "libft/src/ft_printf/include/ft_printf.h"
#include <ncurses.h>
#define MAX_SIZE_WIN_Y 50
#define MAX_SIZE_WIN_X 50
int			main(void)
{




/*
	initscr();

	attron(A_NORMAL);
	printw("Texte sans mise en forme\n");

	attron(A_STANDOUT);
	printw("Texte en meilleur surlignement\n");
	attroff(A_STANDOUT);

	attron(A_REVERSE);
	printw("Texte en inversion video\n");
	attroff(A_REVERSE);

	attron(A_DIM);
	printw("Texte a moitie brillant\n");
	attroff(A_DIM);

	attron(A_BOLD);
	printw("Texte en gras\n");
	attroff(A_BOLD);

	attron(A_UNDERLINE);
	printw("Texte en souligne\n");
	attroff(A_UNDERLINE);

	attron(A_INVIS);
	printw("Texte invisible\n");
	attroff(A_INVIS);

	attron(A_UNDERLINE | A_BOLD); // Pour appliquer plusieurs type de mises en forme, on utilise l'opérateur unaire |
	printw("Texte en gras souligne\n");

	attron(A_NORMAL);
	refresh();
	getch();
	endwin();

*/

	   WINDOW	*win;
	   int		nb;
	   int		x;
	   int		y;
	   int		time;
	   char		c = 0;

	   y = 0;
	   x = 0;
	   nb = 45;
	//	setlocale(LC_ALL, "");
	initscr();
	noecho();
	printw("Hello world!\njwiehg");
	refresh();
	getch();
	move(0, 0);
	addstr("Well done");
	refresh();
	getch();
	clear();
	move(25, 17);
	addstr("Wallah");
	mvprintw(66, 52, "%.2x", nb);
	refresh();
	getch();
	win = newwin(MAX_SIZE_WIN_Y, MAX_SIZE_WIN_X + 1, 0, 0);
	box(win, ACS_DIAMOND, ACS_DIAMOND);
	wrefresh(win);
	y = 1;
	x = 2;
	mvwprintw(win,5, 3, "Le terminal actuel comporte %d lignes et %d colonnes\n", LINES, COLS);
	while (1 && y < MAX_SIZE_WIN_Y)
	{
	if (x >= MAX_SIZE_WIN_X - 1)
	{
		time = 0;
	x = 2;
	y++;
	}
	mvwprintw(win, y, x, "%.2x ", nb);
	wrefresh(win);
	cbreak();
	getch();
	x += 3;
		while (time < 1000000000)
		{
//			if (c == 'q')
//				exit(1);
			time++;
		}
	}
	endwin();
	return (0);
}
