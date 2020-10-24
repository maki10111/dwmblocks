//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"music",			0,			9},
	{"",		"cpmon",			0,			8},
	{"",		"pacpackages",			300,			7},
	{"", 		"mailbox",			60,			6},
	{"",		"freemem",			5,			5},
	{"",		"blueteeth",			0,			10},
	{"",		"pingbar",			2,			4},
	{"",		"volume",			0,			3},
	{"",		"clock",			60,			2},
	{"",		"exitd",			0,			1},



};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ⏽ ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
