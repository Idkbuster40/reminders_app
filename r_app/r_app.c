#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gtk/gtk.h>
#include "reminders.h"

int l_app(int argc, char **argv) { //Launches the application.
	GtkApplication *app;
	app = gtk_application_new(APP_ID, G_APPLICATION_HANDLES_OPEN); //Create a new app using GTK.
	g_signal_connect(app, "activate", G_CALLBACK(g_module_start), NULL); //STUOOOOOBID. CREATE ZE APP.
	g_signal_connect(app, "open", G_CALLBACK(g_module_open), NULL); //101010 - Handles opening.
	int a_status = g_application_run(G_APPLICATION(app), argc, argv); //See if the app is running or not.
/*	if (!a_status() = 0;) { //If not running
		perror("Not running."); //Print this.
		break; //Don't go further.
	} */
	g_object_unref(app); /* After done */ //Stole from friend's code.
}

int open_window() {
	
}


// bum.farto.tortureapp.reminders



// int launch_gui(int argc, char **argv) {
//     /* Launches the GUI of the application */
//     GtkApplication *app; /* Application object, used for creating windows */
//     app = gtk_application_new(APP_ID, G_APPLICATION_HANDLES_OPEN); /* Create a new app */
//     g_signal_connect(app, "activate", G_CALLBACK(app_start), NULL); /* Connect app to start callback  */
//     g_signal_connect(app, "open", G_CALLBACK(handle_open), NULL); /* Here, handle the opening of files */
//     int status = g_application_run(G_APPLICATION(app), argc, argv); /* Run application */
//     g_object_unref(app); /* After done */
// 
//     return status;
// }



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
