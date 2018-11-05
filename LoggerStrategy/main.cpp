#include "Logger.h"

int main()
{
	Logger log;
	log.log_message("do nothing");
	log << "do nothing 2";
	ConsolLogger consoleLoger;
	log.set_strategy(&consoleLoger);
	log.log_message("Console");
	log<<"Console 2";
	SimpleFileLogger lf;
	log.set_strategy(&lf);
	log.log_message("simple file");
	log<<"simple file 2";
	TimedFileLogger tfl;
	log.set_strategy(&tfl);
	log.log_message("timed file");
	log<<"timed file 2";

}