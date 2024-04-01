import sqlite3 as lite
import sys
con=None

con=lite.connect('Company.db')
with con:
    cur=con.cursor ()
    cur.execute ("DROP TABLE IF EXISTS EMPLOYEE")
    cur.execute ("""CREATE TABLE EMPLOYEE (FIRST_NAME CHAR(20),LAST NAME CHAR (20),EmP_ID INT NOT NULL, Designation CHAR(20), AGE INT, GENDER CHAR (1), Income FLOAT) """)
    values=[('Ira', 'Ahmed',1,'Student',21,'F',100000), ('Arian', 'Ahmed',2,'Student',20, 'M',300000), ('samba', 'Ahmed',3, 'student',21,'F',100500)]
    cur.executemany ("INSERT INTO EMPLOYEE values(?,?,?,?,?,?,?)",values)
    sql="Select * from EMPLOYEE where Income <'td'" (200000)
    cur.execute (sql)
    results=cur.fetchall()
    for rows in results:
        print (rows)
  
con.close()