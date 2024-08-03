const express = require('express');
const app = express();
let port = 8080;

app.listen(port, ()=>{
    console.log("Server is listing");
})

app.get("/search",(req,res)=>{
    console.log("Req Received");
    console.log(req.query);              //This is where are query gets stored. It is also an object
    let {q,id} = req.query;
    if(!q){
        res.send(`Empty Query sent`);
    }
    res.send(`This a response for query: ${q}, id: ${id}`);
})