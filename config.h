/* Modify this file to change what commands output to your statusbar, and recompile using the make command. */
/* Maximum character lenght of commands' output */
#define CMDLENGTH       100

static const Block blocks[] = {
    /*Icon*/        /*Command*/         /*Update Interval*/     /*Update Signal*/
    {"",            "sb-volume",        0,                      10      },
    {"",            "sb-network",       1,                      4       },
    {"",            "sb-clock",         1,                      1       },
};

/* Sets delimiter between status commands. NULL character ('\0') means no delimiter. */
static char *delim = "";

/* Have dwmblocks automatically recompile and run when you edit this file in
 vim with the following line in your vimrc/init.vim: */

/* autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install
&& { killall -q dwmblocks;setsid dwmblocks & } */
