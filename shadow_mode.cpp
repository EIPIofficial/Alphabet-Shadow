#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>

// ASCII font map - each character is 6 lines tall
std::map<char, std::vector<std::string>> ASCII_FONT = {
    {'a', {"  ███╗  ", " ██╔██╗ ", "███████║", "██╔══██║", "██║  ██║", "╚═╝  ╚═╝"}},
    {'b', {"██████╗ ", "██╔══██╗", "██████╔╝", "██╔══██╗", "██████╔╝", "╚═════╝ "}},
    {'c', {" ██████╗", "██╔════╝", "██║     ", "██║     ", "╚██████╗", " ╚═════╝"}},
    {'d', {"██████╗ ", "██╔══██╗", "██║  ██║", "██║  ██║", "██████╔╝", "╚═════╝ "}},
    {'e', {"███████╗", "██╔════╝", "██████╗ ", "██╔═══╝ ", "███████╗", "╚══════╝"}},
    {'f', {"███████╗", "██╔════╝", "██████╗ ", "██╔═══╝ ", "██║     ", "╚═╝     "}},
    {'g', {" ██████╗ ", "██╔════╝ ", "██║  ███╗", "██║   ██║", "╚██████╔╝", " ╚═════╝ "}},
    {'h', {"██╗  ██╗", "██║  ██║", "███████║", "██╔══██║", "██║  ██║", "╚═╝  ╚═╝"}},
    {'i', {"   ██╗  ", "   ██║  ", "   ██║  ", "   ██║  ", "   ██║  ", "   ╚═╝  "}},
    {'j', {"    ██╗ ", "    ██║ ", "    ██║ ", "██  ██║ ", "╚████╔╝ ", "╚════╝  "}},
    {'k', {"██╗  ██╗", "██║ ██╔╝", "█████╔╝ ", "██╔═██╗ ", "██║  ██╗", "╚═╝  ╚═╝"}},
    {'l', {"██╗     ", "██║     ", "██║     ", "██║     ", "███████╗", "╚══════╝"}},
    {'m', {"███╗   ███╗", "████╗ ████║", "██╔████╔██║", "██║╚██╔╝██║", "██║ ╚═╝ ██║", "╚═╝     ╚═╝"}},
    {'n', {"███╗  ██╗", "████╗ ██║", "██╔██╗██║", "██║╚████║", "██║ ╚███║", "╚═╝  ╚══╝"}},
    {'o', {" ██████╗ ", "██╔═══██╗", "██║   ██║", "██║   ██║", "╚██████╔╝", " ╚═════╝ "}},
    {'p', {"██████╗ ", "██╔══██╗", "██████╔╝", "██╔══╝  ", "██║     ", "╚═╝     "}},
    {'q', {" ██████╗ ", "██╔═══██╗", "██║   ██║", "██║   ██║", "╚██████╔╝", " ╚═══███╗"}},
    {'r', {"██████╗ ", "██╔══██╗", "██████╔╝", "██╔══██╗", "██║  ██║", "╚═╝  ╚═╝"}},
    {'s', {"███████╗", "██╔════╝", "███████╗", "╚════██║", "███████║", "╚══════╝"}},
    {'t', {"████████╗", "╚══██╔══╝", "   ██║   ", "   ██║   ", "   ██║   ", "   ╚═╝   "}},
    {'u', {"██╗   ██╗", "██║   ██║", "██║   ██║", "██║   ██║", "╚██████╔╝", " ╚═════╝ "}},
    {'v', {"██╗   ██╗", "██║   ██║", "██║   ██║", "╚██╗ ██╔╝", " ╚████╔╝ ", "  ╚═══╝  "}},
    {'w', {"██╗    ██╗", "██║    ██║", "██║ █╗ ██║", "██║███╗██║", "╚███╔███╔╝", " ╚══╝╚══╝ "}},
    {'x', {"██╗  ██╗", "╚██╗██╔╝", " ╚███╔╝ ", " ██╔██╗ ", "██╔╝ ██╗", "╚═╝  ╚═╝"}},
    {'y', {"██╗   ██╗", "╚██╗ ██╔╝", " ╚████╔╝ ", "  ╚██╔╝  ", "   ██║   ", "   ╚═╝   "}},
    {'z', {"███████╗", "╚══███╔╝", "  ███╔╝ ", " ███╔╝  ", "███████╗", "╚══════╝"}},
    {'+', {"        ", "   ██╗  ", " ██████╗", " ╚═██╔═╝", "   ╚═╝  ", "        "}},
    {'-', {"        ", "        ", "███████╗", "╚══════╝", "        ", "        "}},
    {'_', {"        ", "        ", "        ", "        ", "███████╗", "╚══════╝"}},
    {' ', {"        ", "        ", "        ", "        ", "        ", "        "}},
    {'0', {" ██████╗ ", "██╔═████╗", "██║██╔██║", "████╔╝██║", "╚██████╔╝", " ╚═════╝ "}},
    {'1', {" ██╗", "███║", "╚██║", " ██║", " ██║", " ╚═╝"}},
    {'2', {"██████╗ ", "╚════██╗", " █████╔╝", "██╔═══╝ ", "███████╗", "╚══════╝"}},
    {'3', {"██████╗ ", "╚════██╗", " █████╔╝", " ╚═══██╗", "██████╔╝", "╚═════╝ "}},
    {'4', {"██╗  ██╗", "██║  ██║", "███████║", "╚════██║", "     ██║", "     ╚═╝"}},
    {'5', {"███████╗", "██╔════╝", "███████╗", "╚════██║", "███████║", "╚══════╝"}},
    {'6', {" ██████╗ ", "██╔════╝ ", "███████╗ ", "██╔═══██╗", "╚██████╔╝", " ╚═════╝ "}},
    {'7', {"███████╗", "╚════██║", "    ██╔╝", "   ██╔╝ ", "   ██║  ", "   ╚═╝  "}},
    {'8', {" █████╗ ", "██╔══██╗", "╚█████╔╝", "██╔══██╗", "╚█████╔╝", " ╚════╝ "}},
    {'9', {" █████╗ ", "██╔══██╗", "╚██████║", " ╚═══██║", " █████╔╝", " ╚════╝ "}},
    {':', {"      ", "  ██╗ ", "  ╚═╝ ", "      ", "  ██╗ ", "  ╚═╝ "}},
    {'"', {" ██╗██╗ ", " ██║██║ ", " ╚═╝╚═╝ ", "        ", "        ", "        "}},
    {'\'', {"  ██╗   ", "  ██║   ", "  ╚═╝   ", "        ", "        ", "        "}},
    {'.', {"        ", "        ", "        ", "        ", "  ██╗   ", "  ╚═╝   "}},
    {'/', {"     ██╗", "    ██╔╝", "   ██╔╝ ", "  ██╔╝  ", " ██╔╝   ", "██╔╝    "}},
    {'|', {"  ██╗   ", "  ██║   ", "  ██║   ", "  ██║   ", "  ██║   ", "  ╚═╝   "}},
    {'\\', {"██╗     ", "╚██╗    ", " ╚██╗   ", "  ╚██╗  ", "   ╚██╗ ", "    ╚═╝ "}},
    {'!', {"  ██╗   ", "  ██║   ", "  ██║   ", "  ╚═╝   ", "  ██╗   ", "  ╚═╝   "}},
    {'[', {"████╗", "██╔═╝", "██║  ", "██║  ", "████╗", "╚═══╝"}},
    {']', {"████╗", "╚═██║", "  ██║", "  ██║", "████║", "╚═══╝"}},
    {'=', {"         ", " ██████╗ ", " ╚═════╝ ", " ██████╗ ", " ╚═════╝ ", "         "}},
};

// Convert hex color to RGB and return ANSI escape code
std::string hexToAnsi(const std::string& hex, bool bg) {
    std::string h = hex[0] == '#' ? hex.substr(1) : hex;
    int r = std::stoi(h.substr(0, 2), nullptr, 16);
    int g = std::stoi(h.substr(2, 2), nullptr, 16);
    int b = std::stoi(h.substr(4, 2), nullptr, 16);
    return "\033[" + std::string(bg ? "48" : "38") + ";2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m";
}

// Generate gradient colors
std::vector<std::string> generateGradient(const std::string& start, const std::string& end, int steps) {
    std::vector<std::string> colors;
    int r1 = std::stoi(start.substr(1, 2), nullptr, 16), g1 = std::stoi(start.substr(3, 2), nullptr, 16), b1 = std::stoi(start.substr(5, 2), nullptr, 16);
    int r2 = std::stoi(end.substr(1, 2), nullptr, 16), g2 = std::stoi(end.substr(3, 2), nullptr, 16), b2 = std::stoi(end.substr(5, 2), nullptr, 16);
    
    for (int i = 0; i < steps; i++) {
        double f = (steps == 1) ? 0.0 : static_cast<double>(i) / (steps - 1);
        char buf[8];
        snprintf(buf, sizeof(buf), "#%02X%02X%02X", 
                 static_cast<int>(r1 + (r2 - r1) * f),
                 static_cast<int>(g1 + (g2 - g1) * f),
                 static_cast<int>(b1 + (b2 - b1) * f));
        colors.push_back(buf);
    }
    return colors;
}

// Generate ASCII art
void generateAscii(const std::string& text, const std::string& start, const std::string& end, bool fg, bool bg) {
    std::vector<std::string> lines(6, "");
    
    for (char c : text) {
        char lc = std::tolower(static_cast<unsigned char>(c));
        auto it = ASCII_FONT.find(lc);
        if (it != ASCII_FONT.end()) {
            for (int i = 0; i < 6; i++) lines[i] += it->second[i];
        } else {
            for (int i = 0; i < 6; i++) lines[i] += "      ";
        }
    }
    
    auto colors = generateGradient(start, end, 6);
    const std::string reset = "\033[0m";
    
    for (int i = 0; i < 6; i++) {
        if (fg || bg) {
            if (fg) std::cout << hexToAnsi(colors[i], false);
            if (bg) std::cout << hexToAnsi(colors[i], true);
            std::cout << lines[i] << reset << std::endl;
        } else {
            std::cout << lines[i] << std::endl;
        }
    }
}

void printUsage(const char* name) {
    std::cout << "Usage: " << name << " [options] <text>\n\n"
              << "Options:\n"
              << "  -c, --color       Foreground gradient\n"
              << "  -b, --bg          Background gradient\n"
              << "  --start <hex>     Start color (default: #E62525)\n"
              << "  --end <hex>       End color (default: #000000)\n"
              << "  -h, --help        Show help\n\n"
              << "Examples:\n"
              << "  " << name << " hello\n"
              << "  " << name << " -c --start #00FF00 --end #0000FF hello\n";
}

int main(int argc, char* argv[]) {
    std::string text, start = "#E62525", end = "#000000";
    bool fg = false, bg = false;
    
    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "-c" || arg == "--color") fg = true;
        else if (arg == "-b" || arg == "--bg") bg = true;
        else if ((arg == "--start" || arg == "-s") && i + 1 < argc) start = argv[++i];
        else if ((arg == "--end" || arg == "-e") && i + 1 < argc) end = argv[++i];
        else if (arg == "-h" || arg == "--help") { printUsage(argv[0]); return 0; }
        else if (text.empty() && arg[0] != '-') text = arg;
    }
    
    if (text.empty()) {
        std::cout << "Enter text: ";
        std::getline(std::cin, text);
    }
    
    generateAscii(text, start, end, fg, bg);
    return 0;
}
