const express = require('express');
const app = express();
const path = require('path');
let port = 8080;

app.set('view engine','ejs');
app.set('views',path.join(__dirname,'\\views'))

app.listen(port,()=>{
    console.log("Server is listening");
})

app.get('/roll',(req,res)=>{
    let num = Math.ceil(Math.random()*6);
    res.render('03_Conditional_Statements.ejs',{num})
})