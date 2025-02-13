#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void extract_logs(const string &filename, const string &date) {
    ifstream log_file(filename);
    if (!log_file) {
        cerr << "Error: Unable to open log file!" << endl;
        return;
    }

    string output_filename = "output/output_" + date + ".txt";
    ofstream output_file(output_filename);
    if (!output_file) {
        cerr << "Error: Unable to create output file!" << endl;
        return;
    }

    string line;
    while (getline(log_file, line)) {
        if (line.substr(0, 10) == date) { // Check if the log starts with the input date
            output_file << line << endl;
        }
    }

    cout << "Logs for " << date << " saved to " << output_filename << endl;

    log_file.close();
    output_file.close();
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Usage: ./extract_logs <YYYY-MM-DD>" << endl;
        return 1;
    }

    string date = argv[1];
    string log_file_path = "test_logs.txt"; // Change this if needed

    extract_logs(log_file_path, date);
    return 0;
}
