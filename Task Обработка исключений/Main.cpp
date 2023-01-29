#include"MyExeption.h"



int main() {

	setlocale(LC_ALL, "Russian");
	try
	{
		while (true)
			int* p = new int[std::numeric_limits<int>::max()];
	}
	catch (std::bad_alloc& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "done.\n";

	

	MyExeption e;	
	float a = 2, b = 0;
	try
	{
		std::cout << "x/y = " <<e.Func(e, a, b) << '\n';
		std::cout << "Gutten morgen\n";
	}
	catch (MyExeption& ex)
	{
		std::cout << "MyExeption error\n";
		std::cerr << ex.What() << '\n';
	}
	
	return 0;
}