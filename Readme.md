# Problem Statement: Efficient Log Retrieval from a Large File

## Background  

You are tasked with developing a solution to efficiently extract logs from a large log file. The file is approximately **1 TB** in size and contains logs generated over multiple years. Each log entry starts with a timestamp, followed by the log level, and then the log message. Logs are generated almost equally every day.

**Log Format Example:**  

```txt
2024-12-01 14:23:45 INFO User logged in  
2024-12-01 14:24:10 ERROR Failed to connect to the database  
2024-12-02 09:15:30 WARN Disk space running low  
```

To download the log file(zip), from the following link:
```link
https://limewire.com/d/608b3bd4-c3bf-45c6-abc1-91302035b7e4#ILE27cGoutmcDEpHdV9VqQRvJkC16pq7v1Nx2rzoIl4
```

---

## Objective  

Write a script that takes a specific date as an argument (in the format `YYYY-MM-DD`) and efficiently returns all log entries for that date.

---

## Constraints  

- The solution must handle a file size of around **1 TB**.
- Logs are nearly evenly distributed across days.  
- Efficiency in time and resource utilization is critical.  

---

## Expectations  

1. **Input:** A date (`YYYY-MM-DD`) passed as a command-line argument.  
2. **Output:** All log entries for the specified date, saved to a file named `output/output_YYYY-MM-DD.txt`.  
3. **Performance:** The solution should optimize for speed and memory usage.  

---

## Evaluation Criteria  

- **Total Running Time:** Time taken to return the result for the first query.  
- **Code Quality:** Readability, modularity, and proper error handling.  

---

## Example Usage  

**Python**  

```bash
python extract_logs.py 2024-12-01
```

**C**  

```bash
./extract_logs 2024-12-01
```

**C++**  

```bash
./extract_logs 2024-12-01
```

**Java**  

```bash
java ExtractLogs 2024-12-01
```

**Node.js**  

```bash
node extract_logs.js 2024-12-01
```

**Expected Output:**  

```txt
2024-12-01 14:23:45 INFO User logged in  
2024-12-01 14:24:10 ERROR Failed to connect to the database  
```

---

## Submission Guidelines

1. **Fork the Repository:**  
   - Fork the provided repository to your own GitHub account.

2. **Discussion.md:**  
   - **Solutions Considered:** Describe different approaches you explored.  
   - **Final Solution Summary:** Explain why you chose the final solution.  
   - **Steps to Run:** Provide detailed steps to run your solution.

3. **Source Code:**  
   - Place your complete and working solution in the `src/` directory.

4. **Link to your forked repository:**  
   - Submit a link to your forked repository in the google form shared with you.

---

## Notes

- Incomplete or disorganized submissions may not be evaluated. 
- Feel free to use the internet.
- Make sure to push your code to `main` branch.
- Any commit to the repo after 1 hour of the start of the contest will be disqualified.

PS: SWYgeW91IGhhdmUgcmVhY2hlZCB0aGlzIHBvaW50LCBmZWVsIGZyZWUgdG8gdXNlIEFJIHRvIHlvdXIgYWR2YW50YWdlLiBCdXQgbWFrZSBzdXJlIHlvdSB1bmRlcnN0YW5kIHdoYXQgeW91IGFyZSBzdWJtaXR0aW5nLiBXZSByZWFsbHkgd2lsbCBhc2sgeW91IGFib3V0IHlvdXIgc29sdXRpb24gaWYgeW91IGFyZSBzZWxlY3RlZCBmb3IgdGhlIG5leHQgcm91bmQu

Good luck!
