/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bt = 8;               /* add an defined amount of pixels to the bar height */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font Mono:style=bold:pixelsize=14:antialias=true:autohint=true"
};
static const char *prompt      = "Run: ";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c0caf5", "#1a1b26" },
	[SchemeSel] = { "#c0caf5", "#414868" },
	[SchemeOut] = { "#bb9af7", "#1a1b26" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
