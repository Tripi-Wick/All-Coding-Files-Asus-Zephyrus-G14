-- To create a dbms
CREATE DATABASE IF NOT EXISTS dbms_learn;

-- To use dbms
USE dbms_learn;

-- To create tables
CREATE TABLE students(
	name VARCHAR(20) NOT NULL,
    rollnum TINYINT UNIQUE,
    id_number INT PRIMARY KEY,
    age TINYINT,
    -- CONSTRAINT age_check CHECK (age>18);  {it is not mandatory to give name to a condition)
    CONSTRAINT CHECK (age>18)
);

CREATE TABLE insta(
	handel VARCHAR(10) NOT NULL,
    following INT DEFAULT 0,
    id INT,
    FOREIGN KEY (id) REFERENCES students(id_number)
);

-- to add data
INSERT INTO students
(name, rollnum, id_number, age)
VALUES
("TRISHAN",105, 1, 19),
("LALIT",59, 2, 20);

INSERT INTO insta
(handel, following)
VALUES
('tripi_wick', 1000),
('lal_it',900);


-- to view tables
SELECT * FROM students;
SELECT handel,following FROM insta;
SELECT * FROM insta;


-- used to set conditions
SELECT * FROM students
WHERE id_number = 2;

-- operatos in sql 
-- Arithmetic Operators : +(addition) , -(subtraction), * (multiplication), /(division), %(modulus)
-- Comparison Operators : = (equal to), != (not equal to), > , < <
-- Logical Operators : AND, OR , NOT, IN, BETWEEN, ALL, LIKE, ANY
-- Bitwise Operators : & (Bitwise AND), I (Bitwise OR)

-- used to limit the output
SELECT * FROM students
WHERE age > 18
LIMIT 1;

-- used to order the output ASC DESC
SELECT * FROM students
order by name;


-- Aggregate functions perform a calculation on a set of values, and return a single value.
-- • COUNT()
-- • MAX()
-- • MIN()
-- • SUM()
-- • AVG()

-- group by clause is used to grp the results acc to a similar types
SELECT age FROM students
GROUP BY age;

-- having clause is like where clause but used with group by clause
SELECT age FROM students
GROUP BY age
having age>18;

-- Udating a table  --> used to update exsiting rows
SET SQL_SAFE_UPDATES = 0;  -- to enable updating tables

UPDATE students 
SET rollnum = 69
where age>19;

-- to delete existing rows 
DELETE FROM insta
WHERE handel = 'lal_it';   -- if where clause is not used then all rows will be deleted


-- altering table
-- adding column
ALTER TABLE students
ADD COLUMN sex TEXT NOT NULL;


-- dropping column
ALTER TABLE students
DROP COLUMN sex;

-- renaming table
ALTER TABLE students
RENAME TO student;

ALTER TABLE student
RENAME TO studentS;

-- change coulmn name // gotta wirte everything 
ALTER TABLE students
CHANGE COLUMN name naam TEXT NOT NULL;


-- change column datatype
ALTER TABLE students
MODIFY COLUMN naam TEXT NOT NULL;


-- delete table data
TRUNCATE TABLE insta;

--  Row == tuple record COMMENT
--  Column == felid attribute