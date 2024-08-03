const mongoose = require('mongoose');

async function main (){
    mongoose.connect('mongodb://127.0.0.1:27017/test');
}

main().then((res)=>{console.log("Connection Successful")}).catch((err)=>{console.log("Error Occurred",err)});

const userSchema = new mongoose.Schema({
    name: String,
    email: String,
    age: Number
})

const User = mongoose.model('User',userSchema);

// Used to update first occurrence of the property
// User.updateOne({name:'Adam'},{age:'100'})
// .then((res)=>{
//     console.log(res);
// })
// .catch((ere) => {
//     console.log(err);
// })

// Used to update all occurrences of the property
// User.updateOne({name:'Adam'},{age:'0'})
// .then((res)=>{
//     console.log(res);
// })
// .catch((ere) => {
//     console.log(err);
// })

// User.find({name:'Adam'})
// .then((res)=>{
//     console.log(res);
// })
// .catch((ere) => {
//     console.log(err);
// })

// Same as update but better cause also gives the result
// by default these shows the value prior update but to toggle that we have to change 1 property
// User.findOneAndUpdate({age:{$eq:0}},{age:1000})
// .then((res)=>{
//     console.log(res);
// })
// .catch((ere) => {
//     console.log(err);
// })


User.findOneAndUpdate({age:{$eq:1000}},{age:0},{new:true})
.then((res)=>{
    console.log(res);
})
.catch((err) => {
    console.log(err);
})

// Used to update by id
// User.findByIdAndUpdate();