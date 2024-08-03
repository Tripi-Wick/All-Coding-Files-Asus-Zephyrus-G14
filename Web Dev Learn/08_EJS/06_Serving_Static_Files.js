// For this we use a default folder like views known as public
// It does not give folder else it gives all the files in it 

const express = require("express");
const app = express();
const path = require("path");
let port = 8080;

app.set('view engine','ejs');
app.set('views',path.join(__dirname,'/views'));
app.use(express.static(path.join(__dirname,'/public')));         // It is a middleware used to use static files i.e. folders. 
app.use(express.static(path.join(__dirname,'/public/js')));        

app.listen(port,()=>{
    console.log("PUT THOSE REQ IN I M ON");
})

app.get('/',(req,res)=>{
    console.log('OH YEAH!!');
    res.render('06_html.ejs')
})