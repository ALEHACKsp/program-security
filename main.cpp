#include <iostream>
#include <Windows.h>

#include "security.h"

int main()
{
    std::printf("[    security    ] not everything was coded by me so credits to guy..");

	hide_thread();
	
	check_debug_flags();
	
	getchar();

	return 0;
}
