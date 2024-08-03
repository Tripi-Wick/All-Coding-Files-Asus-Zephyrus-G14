// It is the process of selecting a path for the traffic in a network or between or across multiple networks
// Basically here we tell what response should be given if specific route is given after the domain
// Root route is / 
// It is not mandatory that / will be given to show root route, it is pre understood
// Get takes two arguments path and callback 

const express = require('express');
const app = express();
let port = 8080;

app.listen(port,()=>{
    console.log("Server is listing");
})

app.get('/home',(req,res)=>{          //get is used to take a get req of specified route and give a response
    console.log("Req Received");
    res.send("<h1>YOU ARE HOME</H1>")
})
app.get('/edit',(req,res)=>{          
    console.log("Req Received");
    res.send("<h1>YOU ARE in Edit MENU</H1>")
})
app.get('/duck',(req,res)=>{       
    console.log("Req Received");
    res.send("<h1>you are ducking your self</H1>")
})
app.get('*',(req,res)=>{                // * is used to set a default response for any other request
    console.log("Req Received")
    res.send("<hr><h1>You Entered Invalid Route</h1><hr>")
})

app.post('*',(req,res)=>{               //post is used to take a post req of specified route and give a response
    console.log("Req Received");
    res.send("<hr><h1>You Entered a POST REQ</h1><hr>");
})