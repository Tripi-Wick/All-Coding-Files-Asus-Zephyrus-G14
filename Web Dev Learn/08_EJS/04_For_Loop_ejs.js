const express = require('express');
const path = require('path');
const app = express();
let port = 8080;

app.set('view engine','ejs');
app.set('views',path.join(__dirname,'/views'))

app.listen(port,()=>{
    console.log("Server is ON");
})

app.get('/for',(req,res)=>{
    let arr = ['sukuna','toji','gojo','mahoraga'];
    res.render('04_For_loop.ejs',{arr});
})
