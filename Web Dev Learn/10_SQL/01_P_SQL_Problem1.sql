create database college;

use college;

create table teacher(
	id int primary key,
    name text not null,
    subject text,
    salary int default(0)
    );
    
insert into 
teacher( id, name, subject, salary)
values
(23, 'ajay', 'math', 50000),
(47, 'bharat', 'english', 60000),
(18, 'chetan', 'chemisty', 45000),
(9, 'divya', 'physics', 75000);

select * from teacher;

ALTER table teacher
modify column name varchar(50),
modify column subject varchar(50);


select name from teacher
where salary > 55000;

alter table teacher
change column salary ctc int;

update teacher
set ctc = ctc + ctc*0.25;

alter table teacher
add column city varchar(50) default('Gurgaoun'); 


alter table teacher
drop column ctc;

