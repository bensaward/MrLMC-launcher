#include <stdio.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include "screen.h"
#include <screen.h>

void init_screen()
{
  LAUNCHER_WINDOW=gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title(GTK_WINDOW(LAUNCHER_WINDOW), "MrLMC's Launcher");
  gtk_window_set_default_size(GTK_WINDOW(LAUNCHER_WINDOW), LAUNCHER_WIDTH, LAUNCHER_HEIGHT);
  gtk_window_set_position(GTK_WINDOW(LAUNCHER_WINDOW), GTK_WIN_POS_CENTER);
}


