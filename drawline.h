#ifndef MY_H_
# define MY_H_

#include <SFML/Window/VideoMode.h>
#include <SFML/Window/Event.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>

# define SCR_HEI 1280
# define SCR_WID 720

typedef struct s_my_framebuffer
{
    sfUint8*	pixels;
    int	width;
    int	height;
}		           t_my_framebuffer;

void	my_draw_line(t_my_framebuffer *buff, sfVector2i from, sfVector2i to, sfColor);
void my_put_pixel(t_my_framebuffer *bf, int w, int h, sfColo color);

