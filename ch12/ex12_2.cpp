

#include "ex12_2.h"
using namespace std;

int main() {
    const StrBlob csb{"hello", "world", "pezy"};
    StrBlob sb{"hello", "world", "Mooophy"};

    std::cout << csb.front() << " " << csb.back() << std::endl;
    // sb.back() = "pezy";
    std::cout << sb.front() << " " << sb.back() << std::endl;
    return 0;
}