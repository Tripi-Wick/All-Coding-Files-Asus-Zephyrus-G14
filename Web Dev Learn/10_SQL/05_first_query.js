const mysql = require('mysql2');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'college',
    password: '1234567890'
});

let q = 'show tables';

try{
    connection.query(q,(err,res)=>{
        if (err) throw err;
        console.log(res);
    });}
catch(err){
    console.log(err);
}

connection.end();
