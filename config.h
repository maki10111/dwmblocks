//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"music",	0,	7},
	{"",	"pacpackages",	0,	6},
	{"", 	"mailbox",	0,	5},
	{"",	"freemem",	5,	4},
	{ "",	"pingbar",	2,	3},
	{"",	"volume",	0,	2},
	{"",	"clock",	60,	1},


};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
