const mongoose = require("mongoose");

async function main() {
    await mongoose.connect('mongodb://127.0.0.1:27017/test');
}

main()
    .then((res) => { console.log("Connection Successful") })
    .catch((err) => { console.log("Error Occurred : ", err) });


const userSchema = new mongoose.Schema({
    name: String,
    email: String,
    age: Number
})

const User = mongoose.model('User', userSchema);

const user1 = new User({
    name: 'Adam',
    email: 'first_human@heaven.com',
    age: 0
})
// If here any other field which is not in the schema is added here then no error will be thrown but mongoose will not recognize or add it

User.insertMany([
    { name: 'Eve', email: 'first_woman@heaven.com', age: 0 },
    { name: 'Cain', email: 'first_killer@heaven.com', age: 0 },
    { name: 'Abel', email: 'first_dead@heaven.com', age: 0 },
])
    .then((res) => {
        console.log(res);
    })
    .catch((ere) => {
        console.log(err);
    })

user1.save();

// By default mongoose adds an id and version to every document obj
// By default it does not saves the object in the db we gotta explicitly save the things at the end of the document using async function save
// We can write async function out of main function cause that is handled by mongoose -- THis is called Operation Buffering
// i.e. mongoose gives us permission to start using models immediately, without waiting for it to establish connection to MongoDB
