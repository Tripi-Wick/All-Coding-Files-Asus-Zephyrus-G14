const express = require('express');  // It returns a function
  
const app = express();  // which returns an object which helps us to do sever side programming

// console.dir(app);

let port = 8080;        // It is a logical endpoint of a network connection which by webserver and client to exchange info. Basically its the place where info exchange takes place and these two connect. Some ports like 3000 and 8080 are available to set up local host

app.listen(port, ()=>{                           // Used to listen any request send to the server
    console.log("Server is listing now");
})
