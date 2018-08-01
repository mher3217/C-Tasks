#include <iostream>
#include <string>
#include <fstream>
#include <boost\any.hpp>
#include <boost/filesystem.hpp>
#include <vector>
#include <iterator>
using namespace boost::filesystem;

int main(int argc, char* argv[])
{
	path p(argc > 1 ? argv[1] : ".");
	std::vector<directory_entry> v; // To save the file names in a vector.
    int i = 0;
	while (true) {
		std::cout<< "Please insert\n ls(fail name)\t mkdir(new)\t rm(remove)\t new_direct(insert this C:\\Program Files)" << std::endl;
		std::string a;
		std::cin >> a;
		std::cout << std::endl;


		if(a == "new_direct"){
			std::cin >> p;
		}

		else if(is_directory(p) && a == "ls") {
			copy(directory_iterator(p), directory_iterator(), back_inserter(v));
			std::cout << p << " is a directory containing:\n";
			std::cout << std::endl;
			std::cout << std::endl;
			for (i ;  i < v.size();  ++ i )
			{
				std::cout << v[i] << std::endl;
			}

		}

		else if(a == "mkdir"){
			std::string k;
			std::cout << "insert file name: ";
			std::cin >> k;
			
			std::ofstream fout(k); 
			fout.close();	
		}
		else if(a == "touch"){
			const path path("C:\\my_\\Head\\Head");
			create_directories(path);
		}
		else if(a == "rm"){	
			std::string k;
			std::cin >> k;
			remove(k);
		}
		else{
			break;
		}
	}
    
	
	return 0;
}
