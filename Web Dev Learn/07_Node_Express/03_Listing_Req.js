const express = require('express');
const app = express();
let port = 8080;
app.listen(port,()=>{
    console.log("Server is on");
})

app.use((req,res)=>{                      // A method used to handle any type of request
    console.log("req received")
})