const express = require('express');
const path  = require('path');
const app = express();
const { v4: uuidv4 } = require('uuid')           //Used to generate unique ids
const methodOverride = require('method-override');  //Used to over write default html verbs
const { Console } = require('console');
let port = 8080;

app.set('view engine','ejs');
app.set('views',path.join(__dirname,'/views'));
app.use(express.static(path.join(__dirname,'/public')));
app.use(express.urlencoded({extended:true}));
app.use(methodOverride('_method'));

let dataBase = [
    {
        id : uuidv4(),
        username : 'sukuna',
        content : "I'll kill you for no particular reason"
    },
    
    {
        id : uuidv4(),
        username : 'tripi_007',
        content : "Petals soaked in blood, Dead clinging to life,, Several distressing time's ahead, Numerous fighting past,, Both walking the same road, Dying every moment that lasts."
    },

    {
        id : uuidv4(),
        username : 'gow_kratos',
        content : "I WILL HAVE MY REVENGE"
    },
];

app.listen(port,()=>{
    console.log("Server is ON !!");
})

//Home Page
app.get('/',(req,res)=>{
    res.render('home.ejs');
})

// Page of posts
app.get('/posts',(req,res)=>{
    res.render('posts.ejs',{dataBase})
})

// Add New post
app.get('/posts/new',(req,res)=>{
    res.render('new.ejs');  
})
app.post('/posts',(req,res)=>{
    let {username,content} = req.body
    let id = uuidv4()
    dataBase.push({id,username,content});
    res.redirect('http://localhost:8080/posts');
})

// Post in Detail
app.get('/posts/:id',(req,res)=>{
    let {id} = req.params;
    let post = dataBase.find((p)=>id === p.id);         //Returns the object having that id
    // let post = dataBase.find((p)=>{return id === p.id}); //Same thing
    res.render('detail.ejs',{post})
})

// Edit Post
app.get('/posts/:id/edit',(req,res)=>{
    let {id} = req.params;
    let post = dataBase.find((p)=>id === p.id);
    res.render('edit.ejs',{post});  
})
app.patch('/posts/:id',(req,res)=>{   
    let cont = req.body.content; //This stores the new content in patch req
    let {id} = req.params;
    dataBase.find((p)=>id === p.id).content = cont;     
    res.redirect('/posts');
})


// Delete Post
app.delete('/posts/:id',(req,res)=>{
    let {id} = req.params;
    dataBase = dataBase.filter((p)=>id != p.    id);  // Returns a array of objects which dont have that id    
    res.redirect('/posts');
})