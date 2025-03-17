#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gtk/gtk.h>
#include "reminders.h"

int l_app(int argc, char **argv) { //Launches the application.
	GtkApplication *app;
	app = gtk_application_new();
	window = gtk_application_window_new (app);
  	gtk_window_set_title (GTK_WINDOW (window), "Window");
  	gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);
  	gtk_widget_show_all (window);

	
}


// bum.farto.tortureapp.reminders



// void main_window(example *example, GtkApplication *app) {
//     /* Opens the main window */
//     
//     GtkWidget *window; /* The handle to the window widget */
//     window = gtk_application_window_new(app); /* Create a new window */
//     gtk_window_set_default_size(GTK_WINDOW (window), 1400, 800); /* Set window size */
// 
//     // Set the icon
//     GdkPixbuf *icon_image = gdk_pixbuf_new_from_file(path_join(DATA_FOLDER, "icon.png"), 0); /* Get image */
//     gtk_window_set_icon(GTK_WINDOW (window), icon_image); /* Set the icon */
// 
//     // Load the example to the window
//     main_window_load(example, window, 0); /* Load the example into the window */        
// }
