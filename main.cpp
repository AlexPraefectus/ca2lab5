#include <iostream>
#include <getopt.h>

static struct option long_options[] = {
        {"add",     no_argument, nullptr,  'a' },
        {"delete",  no_argument, nullptr,  'd' },
        {"verbose", no_argument,       nullptr,  'v' },
        {"create",  required_argument, nullptr, 'c'},
        {"file",    required_argument, nullptr,  'f' },
};

bool printedOpts[] = {false, false, false, false, false};

void printUnique(int optIndex){
    if (printedOpts[optIndex]) return;

    if (optarg) {
        std::cout << "Option: " << long_options[optIndex].name << " with value: " << optarg << std::endl;
    }else {
        std::cout << "Option: " << long_options[optIndex].name << std::endl;
    }
    printedOpts[optIndex] = true;
}

int main(int argc, char **argv) {
    std::cout << "Parsing args" << std::endl << "-----------" << std::endl;
    int rez = 0;
    int option_index;
    while (true){
        rez = getopt_long(argc, argv, "advc:maf:", long_options, &option_index);
        if (rez == -1) break;
        switch (rez){
            case 'a':
                printUnique(0);
                break;
            case 'd':
                printUnique(1);
                break;
            case 'v':
                printUnique(2);
                break;
            case 'c':
                printUnique(3);
                break;
            case 'f':
                printUnique(4);
                break;
            default:
                std::cout << "Got unknown option" << std::endl;
        }
    }
    std::cout << "-----------" << std::endl << "All options parsed";
    exit(EXIT_SUCCESS);
}