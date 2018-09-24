#include <iostream>
using namespace std;

int main() {
    int num_lines = 6;
    string code[num_lines];
    code[0] = "#include <iostream>\n";
    code[1] = "";
    code[2] = "int main() {\n";
    code[3] = "    std::cout << \"Hello, world!\n\" << std::endl;\n";
    code[4] = "    return 0;\n";
    code[5] = "}\n";

    for (int i = 0; i < num_lines; i++) {
        cout << code[i] << endl;
    }
    return 0;
}
