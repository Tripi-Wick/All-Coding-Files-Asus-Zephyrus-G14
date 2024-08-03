const express = require('express');
const app = express();
const path = require('path');
let port = 8080;

app.set('views',path.join(__dirname,'/views'));
app.set('view engine','ejs');

app.listen(port,()=>{
    console.log('Server is listening');
})

app.get("/info",(req,res)=>{
    console.log("Req is GOT");
    res.render('02_Interpolation.ejs');
})

app.get("/demo",(req,res)=>{                       //You send data by write it as an object after the file name in the render function
    let ran = Math.ceil(Math.random()*10);
    console.log("Req is GOT");
    // Different ways to write the data as an obj
    // res.render('02_Data_Passing.ejs',{demo:ran});
    // res.render('02_Data_Passing.ejs',{ran:ran});
    res.render('02_Data_Passing.ejs',{ran});        // It considers the key and value are the same
})
