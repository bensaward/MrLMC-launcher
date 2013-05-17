/* Custom Minecraft Launcher written by MrLinuxMinecraft (Ben Saward [benjamin.saward@gmail.com])
 * 
 * This software is provided "AS IS" with no form of warranty expressed or implied. To run this
 * software is to recognise that the author is in no way responsible for any damage that may occur.
 * 
 * This code is licensed under GPLv3 and is available for modification/redistribution under the
 * terms outlined at http://www.gnu.org/licenses/gpl.html.
 * 
 */

#include <stdlib.h>
#include <stdio.h>
#include <login.h>
#include <download.h>
#include <screen.h>
#include <gtk/gtk.h>

int main (int argc, char *argv[])
{
  gtk_init(&argc, &argv);
  init_screen();
  gtk_widget_show(LAUNCHER_WINDOW);
}