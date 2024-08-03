const mongoose = require('mongoose');

async function main(){
    mongoose.connect('mongodb://127.0.0.1:27017/test');
}

main()
.then((res)=>{console.log("Connection Successful")})
.catch((err)=>{console.log('Error Occurred',err)})


const userSchema = new mongoose.Schema({
    name: String,
    email: String,
    age: Number
})

const User = mongoose.model('User', userSchema);

// User.find({_id:'66ab89c4c4e6de889f4991d2'})
// User.find({name:'Adam'})
// .then((res)=>{console.log(res)})
// .catch((err)=>{console.log('Error Occurred',err)})

// User.findById('66ab89c4c4e6de889f4991d2')
// // .then((res)=>{console.log(res)})
// .then((res)=>{console.log(res.name)})
// .catch((err)=>{console.log('Error Occurred',err)})


User.findOne({name:'Adam'})
.then((res)=>{console.log(res)})
.catch((err)=>{console.log('Error Occurred',err)})

// These does not return promises but these return queries but these are thenable