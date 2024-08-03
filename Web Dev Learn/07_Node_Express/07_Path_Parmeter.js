// Its a very tedious task to write path for every single route
// Hence we use path parameters as a variable to store the name of the route in the parameter object
// In req obj there is a obj called params, it stores the value of all the entered parameters
// : is used to define the parameter's name
const express = require('express');
const app = express();
let port = 8080;

app.listen(port,()=>{
    console.log("Server is Listing");
})

app.get("/",(req,res)=>{
    console.log("Req received");
    res.send("You are at the root");
})

app.get("/:username",(req,res)=>{
    console.log("Req received");
    console.log(req.params)         //params is the object where all the values of parameters are stores
    let {username} = req.params;      // name of key in the object and new object should be same
    res.send(`<h1>You are on the page of @${username}</h1>`);
})

app.get("/:username/:id",(req,res)=>{
    console.log("Req received");
    console.log(req.params)         
    let {username,id} = req.params;
    res.send(`<h1>You are on the page of @${username} with id:${id}</h1>`);
})