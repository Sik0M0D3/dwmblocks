/* Modify this file to change what commands output to your statusbar, and recompile using the make command. */
/* Maximum character lenght of commands' output */
#define CMDLENGTH 124

static const Block blocks[] = {
    /*  Icon      Command             Interval      Signal    */
    {   "",       "sb-volume",        0,            10        },
    {   "",       "sb-network",       1,            6         },
    {   "",       "sb-clock",         60,           4         },
};

/* Sets delimiter between status commands. NULL character ('\0') means no delimiter. */
static char *delim = "";

/* Have dwmblocks automatically recompile and run when you edit this file in
 vim with the following line in your vimrc/init.vim: */

/* autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install
&& { killall -q dwmblocks;setsid dwmblocks & } */
