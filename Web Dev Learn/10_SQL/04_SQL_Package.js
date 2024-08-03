// Get the client
const mysql = require('mysql2');

//Used to sort connection
const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'college',
    password: '1234567890'
});

//Used to enter query
try{
    connection.query('select * from student',(err,res)=>{
        if (err) throw err;
        console.log(res);
    });}
catch(err){
    console.log(err);
}

//Used to end the connection
connection.end();
