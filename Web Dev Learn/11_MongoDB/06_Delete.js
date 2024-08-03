const mongoose = require('mongoose');

async function main() {
    mongoose.connect('mongodb://127.0.0.1:27017/test')
}

main().then((res)=>{console.log("Connection Successful")}).catch((err)=>{console.log("Error Occurred",err)});

const userSchema = new mongoose.Schema({
    name: String,
    email: String,
    age: Number
})

const User = mongoose.model('User',userSchema);

// // Delete one
// User.deleteOne()
// // Delete Many
// User.deleteMany()
// // same as delete one but gives output
// User.findOneAndDelete()

// // Delete by id
User.findByIdAndDelete('66ab85bf39928e45f86c2679',{next:true})
.then((res)=>{
    console.log(res);
})
.catch((ere) => {
    console.log(err);
})
