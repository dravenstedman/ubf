// UBF interpreter main file
#include <string>
#include <vector>
#include <cstring>
#include <iostream>

#include "tokenizer.hpp"

int main(int argc, char *argv[]){
}

void print_help(){
	// Prints the usage info
	std::cout << "Usage: ubf [args] [file]\n";
	std::cout << "Valid arguments:\n";
	std::cout << "\t-L  -  Compile to Lua\n";
	std::cout << "\t-h  -  Prints this help message\n";
	std::cout << "\t-v  -  Prints version\n";
	std::cout << "--- DEBUG OPTIONS ---\n";
	std::cout << "\t-d  -  Prints basic debug info\n";
	std::cout << "\t-dP - Prints detailed LFP debug info\n";
	std::cout << "\t-dI - Prints detailed UBF debug info\n";
	std::cout << "\t-dV - Prints verbose/detailed LFP and UBF info\n";
	std::cout << "\t-dS - After execution, dumps the entire stack into stdout\n";
}

void print_version(){
	std::cout << "UBF interpreter\nVersion 0.1\n\nDesigned and implemented by Draven Stedman.\n";
}
