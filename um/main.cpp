#include <iostream>
#include <windows.h>
#include "../main/driver/driver.h"


int main() 
{
	Ioctl.find_km();
	Ioctl.process_id = Ioctl.fing_game_pid(L"FortniteClient-Win64-Shipping.exe");

	Ioctl.base_addy = Ioctl.find_game_image();

	Ioctl.cr3 = Ioctl.fetch_cr3();

	std::cout << "base: " << Ioctl.base_addy;
	std::cout << "cr3: " << Ioctl.cr3;
}
