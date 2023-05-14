//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  
  {"",  "packages",  1,  16}, 
  {"",  "memory", 1,  10},
  {"",  "internet",  60, 1},
  {"",  "cpu", 5,  4},
  {"",  "clocks", 5,  4},
  {"",  "xback", 1,  16},
  {"",  "batterychecks", 5,  4},
  {"",  "vol", 1,  16},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
