const mysql = require('mysql2');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'college',
    password: '1234567890'
});

// let q = 'insert into student (name, roll_no, city, marks, grade) values (?,?,?,?,?)';  //? is used to enter data later
let q = 'insert into student (name, roll_no, city, marks, grade) values (?)';  //? is used to enter data later

//Method 1
// let data = ['Divi','101','Chandigarh','99','A'];  

//Method 3
// let data = [
//     ['Sam','102','Faro','69','D'],
//     ['Rips','104','Delhi','96','A'],
// ];

try{
    // connection.query(q, data, (err,res)=>{
    connection.query(q, [data], (err,res)=>{
        if (err) throw err;
        console.log(res);
    });}
catch(err){
    console.log(err);
}


try{
    connection.query('select * from student', (err,res)=>{
        if (err) throw err;
        console.log(res);
    });}
catch(err){
    console.log(err);
}


connection.end();