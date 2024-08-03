const express =  require("express");
const app = express();
const path = require('path');
let port = 8080;

// App.use is used to use the static files
// App.set is used to set the values

app.set('view engine','ejs');
app.set('views',path.join(__dirname,'views'));

app.use(express.static(path.join(__dirname,'public')));

app.listen(port);

app.get('/',(req,res)=>{
    res.render('07_includes');
})

// In this we create a new folder in views named as includes