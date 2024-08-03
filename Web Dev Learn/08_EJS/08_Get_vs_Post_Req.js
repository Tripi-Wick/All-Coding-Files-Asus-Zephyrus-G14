// When data is sent using post, it is stored in req body
// By default it has no data type hence it is undefined
const exp = require('constants');
const express = require('express');
const { rename } = require('fs');
const path = require('path');
const app = express();
let port = 8080;

// So to use it we gotta explicitly define the data type to js to use it
// This is used to declare urlencoded format i.e. parse data
app.use(express.urlencoded({extends:true}));

// THis is used for json format
app.use(express.json())

app.set('view engine','ejs');
app.set('views',path.join(__dirname,'views'));

app.use(express.static(path.join(__dirname,'public')))

app.listen(port);

// Used to get some response
// data is sent in query strings (limited,string data type,visible in url)
app.get('/get',(req,res)=>{
    let {n,p} = req.query;
    console.log(req.query);
    res.render('08_get.ejs',{n,p});
})

// used to post something i.e. send something i.e. data  (for create/write/update)
// Data send via request body (data can be of any type)

app.post('/post',(req,res)=>{
    let {n,p} = req.body;
    res.render('08_post.ejs',{n,p});
})