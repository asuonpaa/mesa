#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <cassert>
#include <sstream>

extern "C" {

    static void COVPOINT2(std::string msg)
    {    
        static bool init = false;
        static std::map<std::string, bool> filter;

        if (!init) {
            std::ifstream infile("covfilter.txt");
            std::string s;

            while (infile >> s) {

                filter[s] = true;
            }

            infile.close();

            init = true;
        }


        static std::map<std::string, bool> already_printed;

        if (already_printed.count(msg) == 0 && (filter.empty() || filter.count(msg) != 0)) {
            std::cout << "COV: " << msg << std::endl;
            already_printed[msg] = true;
        }
    }

    void COVPOINT(const char* msg)
    {
        COVPOINT2(msg);
    }
}

