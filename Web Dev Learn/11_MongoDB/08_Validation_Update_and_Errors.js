const mongoose = require('mongoose');

async function main() {
    mongoose.connect('mongodb://127.0.0.1:27017/test')
}

main().then((res)=>{console.log("Connection Successful")}).catch((err)=>{console.log("Error Occurred",err)});

// We can make custom errors by writing it 
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
        min:[18,'YOU ARE TOO SMALL BASTARD, DUCK OFF']
    },
    sold:{
        type : Number,
        default : 0
    }    
})



const Book = new mongoose.model('Book',bookSchema);

// Schema validation is only imminent for insertion.
// By default the anything which is updated does not follow the validation to make follow that we gotta explicitly define that

Book.findOneAndUpdate({age:{$eq:96}},{age:0},{runValidators:true})
.then((res)=>{
    console.log(res);
})
.catch((err) => {
    // console.log(err);
    // console.log(err.errors);
    // console.log(err.errors.age);
    // console.log(err.errors.age.properties);
    console.log(err.errors.age.properties.message);
})

// This is how we can see errors in depth
// console.log(err.errors.category.properties.message);