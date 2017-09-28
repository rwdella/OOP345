#include "CString.h"
#include "Process.h"


int main(int argc, char* argv[]) {
	
	std::cout << "Command Line : ";
	for (int i = 1; i < argc; i++) {
		std::cout << argv[i] << " ";
	}

	if (argc == 2) { //Takes abolute path as an argc
		std::cout << std::endl << "Insufficient number of arguments(min 1)" << std::endl;
		return 1;
	}

	std::cout << std::endl << "Maximum number of characters stored : " << MAX << std::endl;

	for (int i = 2; i < argc; i++) { //Takes abolute path as an argc
		process(argv[i]);
	}

	return 0;
}