const mongoose = require('mongoose');
async function main() {
    await mongoose.connect('mongodb://127.0.0.1:27017/test');
}

main()
    .then((res)=>{console.log("Connection Successful")})
    .catch((err)=>{console.log("Error Occurred : ", err)});


// Schema is like a js object which is used define the structure of js documents 
const userSchema = new mongoose.Schema({
    name : String,
    email : String,
    age : Number
})


// in mongoose collections are made like classes from model function 
// it is used to create documents which are like objects in js
// in mongoose we write the name of the collection as singular and it automatically makes it plural

const User = mongoose.model('User',userSchema);

