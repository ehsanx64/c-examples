/* 2012-03-08: xhello.c 
** X Window System `Hello world'
*/
#include <X11/Xlib.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void die(char *message);

int main () {	
	Display *xdisplay;
	Window xwindow;
	int xscreen;

	if (!(xdisplay = XOpenDisplay(0))) {
		die("Cannot open X display...");
	} else {
		printf("X Display opened...\n");
	}
	xscreen = DefaultScreen(xdisplay);
	xwindow = XCreateSimpleWindow(xdisplay, RootWindow(xdisplay, xscreen), 
			0, 0, 100, 50, 1, 0, 1);
	if (!xwindow) {
		die("Cannot create window...");
	} else {
		printf("Window created...\n");
	}
	XMapWindow(xdisplay, xwindow);
	XFlush(xdisplay);
	sleep(5);
	XCloseDisplay(xdisplay);
	exit(EXIT_SUCCESS);
}

void die(char *message) {
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

