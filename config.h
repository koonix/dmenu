/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "peep:size=12" , "Symbols Nerd Font:size=10", "JoyPixels:size=16" };
static const char *prompt      = NULL; /* -p  option; prompt to the left of input field */
#if defined __has_include && __has_include ("/tmp/wal-dmenu.h")
#include "/tmp/wal-dmenu.h"
#endif
#ifndef PYWAL
static const char *colors[SchemeLast][2] = {
    /*                fg         bg      */
    [SchemeNorm] = { "#666666", "#000000" },
    [SchemeSel]  = { "#aaaaaa", "#252525" },
    [SchemeSelHighlight]  = { "#aaaaaa", "#252525" },
    [SchemeNormHighlight] = { "#666666", "#000000" },
    [SchemeOut] = { "#000000", "#00ffff" },
};
#endif
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
