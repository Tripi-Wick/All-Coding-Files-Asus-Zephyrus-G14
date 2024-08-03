// EJS == Embedded Java Script Templates
// It is a simple templating language that lets you generate HTML markup with plain java script
// EJS is internally by default required by express so no need to require it again
// EJS help us to render the responses
// EJS expects to find all the views in the views folder
// Server tries to find views folder in the directory form where it is started 
// in view folder we save our files in ejs format.

const express = require('express');
const app = express();
let port = 8080;

const path = require('path');       // This is a package which helps us to set nd edit path

app.set("view engine", 'ejs')      // This helps to set up renderer as ejs.
 
app.set("views", path.join(__dirname,'/views'))     // This helps to locate views folder if the server is started form any other place

app.listen(port,()=>{
    console.log('Server is listening');
})

app.get('/',(req,res)=>{
    console.log('Req Logged');
    res.send("This is the root directory");
});

app.get('/home',(req,res)=>{
    console.log('Req Logged');
    res.render('01_home.ejs');                        //Used to send a big file to be rendered on  the webpage with help of ejs or 
})