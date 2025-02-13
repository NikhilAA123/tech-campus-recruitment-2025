#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // For system()

void extractLogs(const std::string& date) {
    std::ifstream inFile("logs.txt");  // Ensure "logs.txt" exists
    if (!inFile) {
        std::cerr << "Error: Cannot open log file.\n";
        return;
    }

    system("mkdir -p output");  // Create output directory (macOS/Linux)

    std::ofstream outFile("output/output_" + date + ".txt");

    std::string line;
    while (std::getline(inFile, line)) {
        if (line.compare(0, date.size(), date) == 0) {
            outFile << line << '\n';
        }
    }

    inFile.close();
    outFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./extract_logs YYYY-MM-DD\n";
        return 1;
    }

    extractLogs(argv[1]);
    return 0;
}
