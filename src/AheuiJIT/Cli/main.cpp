#include <AheuiJIT/Runtime/Runtime.h>

#include <codecvt>
#include <fstream>
#include <iostream>
#include <sstream>

std::string readFile(const char* filename) {
    std::ifstream wif(filename);
    std::stringstream wss;
    wss << wif.rdbuf();
    return wss.str();
}

int main(int argc, char* argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (argc < 2) {
        std::cout << "Usage " << argv[0] << " filename" << std::endl;
        return 1;
    }

    aheuijit::Runtime rt(std::cout, std::cin);
    std::string str = readFile(argv[1]);
    std::u16string codecode = aheuijit::covnert_utf8_to_utf16(str);
    return rt.run(codecode);
}
