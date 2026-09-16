Mini Search Engine (C++ CLI)
A lightweight command-line search tool built in C++ that scans local text files, evaluates query term frequency, and ranks documents by relevance. This project demonstrates core C++ programming concepts, file stream operations, string processing, and basic algorithmic sorting without external library dependencies.

Features
File Processing & Scanning: Reads .txt files directly using std::ifstream.

String Normalization: Converts search terms and document text to lowercase for case-insensitive matching.

Match Counting & Scoring: Calculates relevance scores based on total keyword occurrences across target documents.

Result Ranking: Stores file scores in a std::vector and sorts them in descending order using std::sort.

Clean CLI Output: Displays formatted search results along with calculated match scores.
