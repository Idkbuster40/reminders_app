#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <gtk/gtk.h>
#include "reminders.h"

void opn_window(GtkApplication *app, gpointer *dot_reminders) { //Opens the app and has a pointer for the .reminders file placed in ~
	  GtkWidget *w; //w = window 

  w = gtk_application_window_new (app); //Create a new window with the app
  gtk_window_set_title (GTK_WINDOW (w), "Forget Me Not"); //Set the title of the app to be "Reminders App" TODO: Give a better name for this app.
  gtk_window_set_default_size (GTK_WINDOW (w), 500, 300); //Make it a small window.
  gtk_widget_show_all (w); //Show all in the window.
}

int l_app(int argc, char **argv) { //Launches the application. 
	f_reminders(); //Check for file existence.
	GtkApplication *app; //Gtkapp
	app = gtk_application_new(APP_ID, G_APPLICATION_HANDLES_OPEN); //Create a new app using GTK.
	g_signal_connect(app, "activate", G_CALLBACK(opn_window), NULL); //This creates the app while opening the window.
//TODO: Undo comment later	g_signal_connect(app, "open", G_CALLBACK(g_module_open), NULL); //101010 - Handles opening.
	int a_status = g_application_run(G_APPLICATION(app), argc, argv); //See if the app is running or not.
    if (a_status != true) { //If not running
		perror("Not running properly, please put the issue on the github repo \nhttps://github.com/Idkbuster40/reminders_app/issues \n LOG:\n "); //Print this.
		return 1; //Don't go further. Return 1 to show there is an error.
	} 
	g_object_unref(app); /* After done */ //Stole from friend's code.
	
	return a_status;
}

/*----------------------------It will be better for your sanity if you ignore the stuff below.----------------------------*/

// switch {
// 	case;
// 	break;
// }


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
