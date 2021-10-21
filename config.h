/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static const unsigned int alpha = 0xff;
static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "peep:size=12" , "Symbols Nerd Font:size=10", "JoyPixels:size=16" };
static const char *prompt      = NULL; /* -p  option; prompt to the left of input field */

/* specify default colors */
static char col_bg[]     = "#000000";
static char col_fg[]     = "#666666";
static char col_sel_fg[] = "#aaaaaa";
static char col_out[]    = "#dddddd";

/* specify colors to read from xresources */
XCOLORS
    XLOAD( col_bg,     "*.background" );
    XLOAD( col_fg,     "*.color2"     );
    XLOAD( col_sel_fg, "*.color14"    );
    XLOAD( col_out,    "*.color4"     );
XCOLORS_END

static const char *colors[SchemeLast][2] = {
    /*                         fg             bg    */
    [SchemeNorm]           = { col_sel_fg,    col_bg },
    [SchemeNormHighlight]  = { col_sel_fg,    col_bg },
    [SchemeSel]            = { col_bg,        col_out },
    [SchemeSelHighlight]   = { col_bg,        col_out },
    [SchemeOut]            = { col_out,     "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel] = { OPAQUE, alpha },
    [SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
