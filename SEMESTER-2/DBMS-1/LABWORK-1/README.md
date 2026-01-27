# 📘 DBMS-1 Labwork-1 (Oracle SQL)

This repository contains **Labwork-1** of the subject **DBMS-1** for **BCA Semester-2**.  
The practical is implemented using **Oracle Database SQL** as per the Practical_Statement_1.

---



## 📂 Files Included
- `labwork1.sql` – SQL script containing:
  - Table creation
  - Data insertion
  - Required SQL queries

---

## 🗂️ Tables Created
The following tables are created as per the problem statement:

1. **DEPOSIT**
   - ACTNO
   - CNAME
   - BNAME
   - AMOUNT
   - ADATE

2. **BORROW**
   - LOANNO
   - CNAME
   - BNAME
   - AMOUNT

3. **BRANCH**
   - BNAME
   - CITY

4. **CUSTOMERS**
   - CNAME
   - CITY

---

## 📝 Operations Performed

### ✔ Table Creation
All required tables are created using `CREATE TABLE` statements with proper Oracle datatypes such as:
- `VARCHAR2`
- `NUMBER`
- `DATE`

### ✔ Data Insertion
Data is inserted into each table using `INSERT INTO` statements as provided in the lab manual.

### ✔ Queries Executed
The following SQL queries are performed:

1. Describe the structure of tables
2. Display all records from each table
3. Retrieve account numbers and deposit amounts
4. Find depositors with amount greater than 4000
5. List customers who opened accounts after a specific date
6. Display customers belonging to Bombay city

---

## 🛠️ Tools & Technologies
- **Database:** Oracle Database
- **Language:** SQL
- **Environment:** SQL*Plus 

---

## ✅ Status
- ✔ Labwork-1 Completed
- ✔ Suitable for academic evaluation and GitHub showcase