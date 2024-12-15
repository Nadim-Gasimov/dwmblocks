// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
/**/
/*static const Block blocks[] = {*/
/*    Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
/*    {"┇ ", "/home/nadim/.config/dwmblocks/wifi_status.sh", 10, 0},*/
/*    {"", "/home/nadim/.config/dwmblocks/keyboard_layout.sh", 1, 0},*/
/*    {"", "/home/nadim/.config/dwmblocks/weather.sh", 600, 1},*/
/*    {"", "/home/nadim/.config/dwmblocks/volume.sh", 1, 0},*/
/*    {" ", "date '+%d.%m'", 60, 0},*/
/*    {" ", "date '+%H:%M  '", 5, 0},*/
/*};*/
/**/
/*static char delim[] = " ┇ ";*/
/*static unsigned int delimLen = 5;*/

static const Block blocks[] = {
    /*    Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    /*{"⌨", "sb-kbselect", 0, 30},*/
    /*{"", "cat /tmp/recordingicon 2>/dev/null", 0, 9}, {"", "sb-tasks", 10,
       26},*/
    /*{"", "sb-music", 0, 11}, {"", "sb-pacpackages", 0, 8},*/
    /*{"", "~/.local/bin/sb-memory", 10, 14},*/
    /*{"", "~/.local/bin/sb-cpu", 10, 18},*/

    {" ┇ ", "/home/nadim/.config/dwmblocks/wifi_status.sh", 10, 0},
    {"", "/home/nadim/.config/dwmblocks/keyboard_layout.sh", 1, 0},
    {"", "~/.local/bin/sb-forecast", 600, 1},
    {"", "/home/nadim/.config/dwmblocks/volume.sh", 1, 0},
    {"", "~/.local/bin/sb-clock", 5, 0},
    /*{" ", "date '+%d.%m'", 60, 0},*/
    /*{" ", "date '+%H:%M  '", 5, 0},*/
};
/**/
/*// Sets delimiter between status commands. NULL character ('\0') means
   no*/
/*// delimiter.*/
static char *delim = " ┇ ";
/**/
// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd
// ~/.local/src/dwmblocks/; sudo make install && { killall -q
// dwmblocks;setsid dwmblocks & }
