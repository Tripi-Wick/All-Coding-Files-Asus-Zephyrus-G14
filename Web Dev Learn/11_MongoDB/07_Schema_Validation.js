const mongoose = require('mongoose');

async function main() {
    mongoose.connect('mongodb://127.0.0.1:27017/test')
}

main().then((res)=>{console.log("Connection Successful")}).catch((err)=>{console.log("Error Occurred",err)});

// Basically this is the actual way used to define restrictions
const bookSchema = new mongoose.Schema({
    name : {
        type: String,
        required: true
    },
    author:{
        type: String,
        minLength: 4
    },
    age:{
        type : Number,
        min:18
    },
    sold:{
        type : Number,
        default : 0
    }    
})
// there is a validation known as enum : ['a','b','c'], this means that input can be only a or b or c and nothing else. 

const Book = new mongoose.model('Book',bookSchema);

Book.insertMany([
    {name:'Harry Porter',author:"J.K Rollings",age:69,sold:10000},
    {name:'Shadow Hunters',author:"Two Mad People",age:88,sold:1000},
    {name:'Halo',author:"Bunge",age:34,sold:10000000},
    {name:'Fifty Shades of Grey',author:"Molester",age:96,sold:100}
])
.then((res) => {
    console.log(res);
})
.catch((ere) => {
    console.log(err);
})

