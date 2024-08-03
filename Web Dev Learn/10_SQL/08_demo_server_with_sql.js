// Setting Express
const express = require('express');
const path = require('path');
const app = express();
const methodOverride = require('method-override');
let port = 8080;
app.set('view engine','ejs');
app.set('views',path.join(__dirname,'/views'));
app.use(express.urlencoded({extended:true}));
app.use(methodOverride('_method'));


// Setting Mysql2
const mysql = require('mysql2');
const connection = mysql.createConnection({
    host : 'localhost',
    user : 'root',
    database : 'dbms_learn',
    password : '1234567890'
});

// Setting Faker
const {faker} = require('@faker-js/faker')

// Creating our table
// let q = 'create table user_db (id varchar(100) unique, username varchar(50) not null, email varchar(40) unique, password varchar(40) not null);';
// try{
//     connection.query(q,(err,result)=>{
//         if(err) throw err;
//         console.log(result);
//     });
// }catch(err){console.log('ERROR OCCURRED : ',err);}


// Adding Data using Faker
// let createUsers = ()=>{
//     return [
//     faker.string.uuid(),
//     faker.internet.userName(),
//     faker.internet.email(),
//     faker.internet.password(),
//     ]
// }

// let data = [];
// for(let i=0; i<100; i++){
//     data.push(createUsers());
// }

// let q = 'insert into user_db(id,username,email,password) values ?;'
// try{
//     connection.query(q,[data],(err,result)=>{
//         if(err) throw err;
//         console.log(result);
//     });
// }catch(err){console.log('ERROR OCCURRED : ',err);}


// Starting Server
app.listen(port,()=>{
    console.log('I am ON!');
})

// Making Home Page
app.get('/',(req,res)=>{
    q = 'select count(*) from user_db;'
    try{
        connection.query(q,(err,result)=>{
            if(err) throw err;
            let count = result;
            res.render('home.ejs',{count});
        });
    }catch(err){
        res.send('ERROR OCCURRED : ',err);
    }
})

app.get('/user',(req,res)=>{
    q = 'select * from user_db;'
    try{
        connection.query(q,(err,result)=>{
            if(err){throw err;}
            res.render('data.ejs',{result});
        })
    }catch(err){
        res.send('ERROR OCCURRED : ',err);
    }
})

app.get('/user/:id',(req,res)=>{
    q = 'select * from user_db where id = ?;'
    let {id} = req.params;
    connection.query(q,id,(err,result)=>{
        let data = result;
        res.render('edit.ejs',{data});
    })
})

app.patch('/user/:id',(req,res)=>{
    
})
// Ending the connection
// We don't require in this apis cause api ends dbms server ends itself
// connection.end();