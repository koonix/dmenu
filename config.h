/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* which layout to set the keyboard to while dmenu is running. the layout will be
 * restored to it's previous state after dmenu's exit. layouts start from zero.
 * negative values mean disable this feature. */
static int xkblayout = 0;

static const unsigned int alpha = 0xff;
static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "peep:size=12" , "Symbols Nerd Font:size=10", "JoyPixels:size=16" };
static const char *prompt      = NULL; /* -p  option; prompt to the left of input field */

/* specify default colors */
static char cbg[] = "#000000";
static char cfg[] = "#777777";

/* specify colors to read from xresources */
XCOLORS
    XLOAD( cbg, "*.background" );
    XLOAD( cfg, "*.color2"     );
XCOLORS_END

static const char *colors[SchemeLast][2] = {
    /*                         fg       bg        */
    [SchemeNorm]           = { cfg,     cbg        },
    [SchemeNormHighlight]  = { cfg,     cbg        },
    [SchemeSel]            = { "white", "#005577"  },
    [SchemeSelHighlight]   = { "cyan",  "#005577"  },
    [SchemeOut]            = { "black", "darkcyan" },
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel]  = { OPAQUE, alpha },
    [SchemeOut]  = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
