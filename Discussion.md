# Discussion.md

## Solutions Considered
- **Sequential Read**: Reads file line by line and extracts relevant entries (Chosen approach).
- **Memory Mapping (mmap)**: Faster, but not portable across all OS.
- **Indexing**: Requires preprocessing, not feasible in this case.

## Final Solution Summary
- Used a **line-by-line approach** with `std::ifstream` for efficiency.
- Ensured **minimal memory usage** by avoiding full file loading.
- Created an `output/` directory to store filtered logs.

## Steps to Run
1. Compile: `g++ -O2 extract_logs.cpp -o extract_logs`
2. Run: `./extract_logs YYYY-MM-DD`
3. Output is stored in `output/output_YYYY-MM-DD.txt`
