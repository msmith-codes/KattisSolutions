#include <iostream>

int main() 
{
    std::string line;
    std::getline(std::cin, line);
    
    std::string lowerStr;
    for(char c : line) {
        lowerStr += tolower(c);
    }

    std::string result;
    for(char c : lowerStr) {
        switch(c) {
            case 'a': result += "@"; break;
            case 'b': result += "8"; break;
            case 'c': result += "("; break;
            case 'd': result += "|)"; break;
            case 'e': result += "3"; break;
            case 'f': result += "#"; break;
            case 'g': result += "6"; break;
            case 'h': result += "[-]"; break;
            case 'i': result += "|"; break;
            case 'j': result += "_|"; break;
            case 'k': result += "|<"; break;
            case 'l': result += "1"; break;
            case 'm': result += "[]\\/[]"; break;
            case 'n': result += "[]\\[]"; break;
            case 'o': result += "0"; break;
            case 'p': result += "|D"; break;
            case 'q': result += "(,)"; break;
            case 'r': result += "|Z"; break;
            case 's': result += "$"; break;
            case 't': result += "']['"; break;
            case 'u': result += "|_|"; break;
            case 'v': result += "\\/"; break;
            case 'w': result += "\\/\\/"; break;
            case 'x': result += "}{"; break;
            case 'y': result += "`/"; break;
            case 'z': result += "2"; break;
            default: result += c; break;
        } 
    }

    std::cout << result << std::endl;
}
