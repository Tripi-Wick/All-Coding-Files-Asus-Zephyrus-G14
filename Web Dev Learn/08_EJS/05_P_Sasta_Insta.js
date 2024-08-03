const express = require('express');
const app = express();
const path = require('path');
let port = 8080;

app.set('view engine','ejs');
app.set('views',path.join(__dirname,'views'));

app.listen(port,()=>{
    console.log("PUT THOSE REQ IN I M ON");
})

app.get('/ig/:username',(req,res)=>{
    console.log("OH YEAH!!")
    let {username} = req.params;
    const data = require('./05_P_Data.json');
    let id = data[username];
    if(id){
        res.render('05_P_Sasta_Insta.ejs',{id});
    }
    else(res.send('<h1>HA!! YOU SUCK NO SUCH PAGE EXISTS.</h1>'));

})
