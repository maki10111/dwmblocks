//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
//	 {"",	"music",	0,	11},
	{"",	"pacpackages",	0,	8},
//	{"",	"news",		0,	6},
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
//	{"",	"torrent",	20,	7},
	{"", 	"mailbox",	20,	0},
	{"",	"memory",	5,	0},
//	{"",	"cpu",		10,	18},
	/* {"",	"moonphase",	18000,	17}, */
//	{"",	"weather",	18000,	5},
//	{"",	"disk",		60,	1},
	{"",	"volume",	1,	10},
	{"",	"pingbar",	5,	0},
//	{"",	"battery",	5,	3},
	{"",	"clock",	60,	0},
//	{"",	"internet",	1,	10},
//	{"", "randombg",	0,     5},


};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
