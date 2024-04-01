import sqlite3 as lite
import sys

con = None
con = lite.connect("Company.db")
with con:
    cur = con.cursor()
    cur.execute("DROP TABLE IF EXISTS EMPLOYEE")
    cur.execute(
        """CREATE TABLE EMPLOYEE(FIRST_NAME char(20),
  LAST_NAME CHAR(20),
  Emp_ID INT NOT NULL,
  Designation CHAR(20),
  AGE INT,
  GENDER CHAR(1),
  INCOME FLOAT
   )"""
    )
    values = [
        ("Trishan", "Preet", 1, "Student", 21, "F", 10000),
        ("John", "Kaph", 2, "Student", 20, "M", 50000),
        ("Osha", "Kapok", 3, "Student", 22, "F", "10500"),
    ]
    cur.executemany("INSERT INTO EMPLOYEE values(?,?,?,?,?,?,?)", values)
    sql = "Select * from EMPLOYEE where Income<'%d'" % (20000)
    cur.execute(sql)
    results = cur.fetchall()
    for rows in results:
        print(rows)
con.close()
