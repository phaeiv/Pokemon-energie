#include "include/include.h"

game_t		*load_setting(game_t *game)
{
	int fd;
	fd = open("src/setting.txt", O_RDWR);
	sfVideoMode mode = {	atoi(get_next_line(fd)),
				atoi(get_next_line(fd)), 32};
	game->setting.mode = mode;
	game->Clock.Clock = sfClock_create();
	game->intro.color = sfColor_fromRGBA(255, 255, 255, 0);
	game->intro.text = sfText_create();
	game->intro.font = sfFont_createFromFile("font/Pokemon_Classic.ttf");
	sfText_setString(game->intro.text, "@ 2018      POKEMON");
	sfText_setFont(game->intro.text, game->intro.font);
	sfVector2f vect = {mode.width / 2 - 60, mode.width / 8 + 50};
	sfText_setPosition(game->intro.text, vect);
	sfText_setCharacterSize(game->intro.text, 10);
	game->game_time = 0.0;
	game->game_time = atof(get_next_line(fd));
	game->game_cene = 0;
	close(fd);
	return (game);
}

void		introduction(game_t *game)
{
	if (game->Clock.Second <= 4.0 && game->intro.color.a != 255)
		game->intro.color.a += 1;
	else if (game->Clock.Second >= 6.0 && game->intro.color.a != 0)
		game->intro.color.a -= 1;
	sfText_setColor(game->intro.text, game->intro.color);
	sfRenderWindow_drawText(game->setting.window, game->intro.text, NULL);
}

void		game_loop(game_t *game)
{
	while (sfRenderWindow_isOpen(game->setting.window))
	{
		game->Clock.Time = sfClock_getElapsedTime(game->Clock.Clock);
		game->Clock.Second = game->Clock.Time.microseconds / 1000000.0;
		while (sfRenderWindow_pollEvent(game->setting.window, &game->event))
	       	{
		       	if (game->event.type == sfEvtClosed)
		       		sfRenderWindow_close(game->setting.window);
		}
		sfRenderWindow_clear(game->setting.window, sfBlack);
		if (game->Clock.Second <= 7.0 && game->Clock.Second >= 3.0)
			introduction(game);
		if (acces_menu(game) == 1 && game->game_cene < 1 && game->Clock.Second >= 10.0)
			game->game_cene = 1;
		if (game->game_cene == 1)
			sfRenderWindow_clear(game->setting.window, sfWhite);
		game->game_cene = 0;
		sfRenderWindow_display(game->setting.window);
	}
}

int		main()
{
	game_t *game = malloc(sizeof(setting_t));
	game = load_setting(game);
	game->setting.window = sfRenderWindow_create(game->setting.mode, "teste", sfResize | sfClose, NULL);
	if (!game->setting.window)
		return EXIT_FAILURE;
	game_loop(game);
	sfRenderWindow_destroy(game->setting.window);
}
