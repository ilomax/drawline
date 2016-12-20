void	my_draw_lineX(t_my_framebuffer *framebuffer, sfVector2i from,
		      sfVector2i to, sfColor color)
{
  double	a;

  a = (to.y - from.y) / (to.x - from.x);
  from.y = a * from.x + (from.x - (a * from.y));
  while (from.x < to.x)
    {
      my_put_pixel(framebuffer, from.x, from.y, sfRed);
      from.y += a;
      from.x++;
    }
}

void	my_draw_lineY(t_my_framebuffer *framebuffer, sfVector2i from,
		      sfVector2i to, sfColor color)
{
  double	a;

  a = (to.x - from.x) / (to.y - from.y);
  from.y = a * from.y + (from.y - (a * from.x));
  while (from.y < to.y)
    {
      my_put_pixel(framebuffer, from.x, from.y, sfRed);
      from.x += a;
      from.y++;
    }
}

void	my_draw_line(t_my_framebuffer *buff,
		     sfVector2i from, sfVector2i to, sfColor)
{
  if (abs(to.x - from.x) >= abs(to.y - from.y))
    if (to.x >= from.x)
      my_draw_lineX(buff, from, to, color);
    else
      my_draw_lineX(buff, to, from, color);
  else
    if (to.y >= from.y)
      my_draw_lineY(buff, from, to, color);
    else
      my_draw_lineY(buff, to, from, color);
}
