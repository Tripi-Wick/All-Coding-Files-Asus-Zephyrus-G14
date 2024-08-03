// All are requests are https text based requests so that ever sever can use them.
// Express converts these req to an object (parsing)
// res convert the response as an application/JSON representation when the response is an array or an object
// when the response is a string then it sets the content type to text/html
// We can send only one response to a request

const express = require('express');
const app = express();
let port = 8080;

app.listen(port,()=>{
    console.log("Server is ON");
})

app.use((req,res)=>{                       //req and res are two objects //use is used to take any req and give a response to it
    console.log("Request Received");
    // console.log(req);  
    res.send("We acknowledge you");                           
    res.send("<h1>We acknowledge you</h1>");                           
    res.send({1:'We acknowledge you'});                        
})