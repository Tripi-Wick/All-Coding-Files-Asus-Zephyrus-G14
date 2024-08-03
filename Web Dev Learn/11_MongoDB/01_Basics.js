const mongoose = require('mongoose');

async function main() {
    await mongoose.connect('mongodb://127.0.0.1:27017/test');
}

main()
    .then((res)=>{console.log("Connection Successful")})
    .catch((err)=>{console.log("Error Occurred : ", err)});

// All functions in mongoose are mostly async