const { faker } = require('@faker-js/faker');

const mysql = require('mysql2');

const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'college',
    password: '1234567890'
});

// try {
//     connection.query('create table user(id int unique, username varchar(50), email varchar(50))',(err,res)=>{
//         if(err) throw err;
//         console.log(res);
//     });
// }catch(err){
//     console.log(err);
// }

let data = [];

createRandomUser = () => {
    return [
        faker.string.uuid(),
        faker.internet.userName(),
        faker.internet.email(),
    ]
};

for (let i = 0; i < 100; i++) {
    data.push(createRandomUser());
}

// try {
//     connection.query('alter table user modify column id varchar(100) unique;', ( err,res) => {
//         if (err) throw err;
//         console.log(res);
//     });
// } catch (err) {
//     console.log(err);
// }
// try {
//     connection.query('insert into user(id, username, email) values ?;', [data], (err,res) => {
//         if (err) throw err;
//         console.log(res);
//     });
// } catch (err) {
//     console.log(err);
// }

try {
    connection.query('select * from user', (err,res) => {
        if (err) throw err;
        console.log(res);
    });
} catch (err) {
    console.log(err);
}

connection.end();