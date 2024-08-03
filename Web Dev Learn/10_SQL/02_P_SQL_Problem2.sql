use college;

create table student(
	name varchar(50) not null,
	roll_no tinyint primary key,
	city varchar(50),
	marks tinyint default(0)
) ;

insert into student
(roll_no, name, city, marks)
values
(110, 'adam','Delhi', 76),
(108, 'bob', 'Mumbai', 65),
(124, "casey", "Pune", 94),
(112, "duke", "Pune", 80);

select name from student
where marks>75;

select distinct city from student;

select city, max(marks) from student
group by city;


select avg(marks) from student;

alter table student
add column grade varchar(1);

update student
set grade = case
	when marks>80 then grade = 'O'
	when marks<=80 and marks>70 then grade = 'A'
end;