/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                  /* -b option; if 0, dmenu appears at bottom */
static unsigned int lines = 0;          /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static int fuzzy = 1;                   /* -F option; if 0, dmenu doesn't use fuzzy matching */
static const unsigned int alpha = 255;  /* transparency; 0 to 255 */
static const char *prompt = NULL;       /* -p option; prompt to the left of input field */
static const int vertfull = 0;          /* indent vertical items to prompt length */

/* the keyboard layout to set the keyboard to while dmenu is running.
 * the layout will be restored to it's previous state after dmenu's exit.
 * layouts start from zero. set to a negative value to disable this feature. */
static int xkblayout = 0;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Signika Negative:size=13",
	":lang=fa:spacing=mono:size=12",
	"Symbols Nerd Font:size=10",
};

static const char normfg[]    = "#777777";
static const char bgcol[]     = "#0f161e";
static const char selbgcol[]  = "#30403f";
static const char *colors[SchemeLast][2] = {
	/*               fg          bg         */
	[SchemeNorm] = { normfg,     bgcol      },
	[SchemeSel]  = { "#d0d0d0",  selbgcol   },
	[SchemeOut]  = { "black",    "darkcyan" },
};

static const unsigned int alphas[SchemeLast][2] = {
	/*               fg      bg    */
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
	[SchemeOut]  = { OPAQUE, alpha },
};

/* fuzzy match parameters */
static const double matchparams[] = {
	[BoundaryBonus]      = 2.0, /* bonus given to boundary characters */
	[FirstPtrnCharBonus] = 2.0, /* bonus given to matches of the first character of the pattern */
	[ConsecBonusInc]     = 1.0, /* increase the bonus of consecutive matches by this amount per match */
	[FuzzyMultiplier]      = 8.0, /* preference of the actual fuzzy score */
	[ItemLengthMultiplier] = 2.0, /* preference of shorter items */
	[EarlyMatchMultiplier] = 1.0, /* preference of matches that start earlier */
};

/* boundary characters in fuzzy match */
static const char boundarychars[] = " \t-_/.,:;|\"";

/* characters not considered part of a word while deleting words; for example: " /?\"&[]" */
static const char worddelimiters[] = " \t-_`'\"()[]{}<>";

// vim:noexpandtab
