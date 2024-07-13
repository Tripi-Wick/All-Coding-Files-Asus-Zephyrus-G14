// Used to export things of this file to other file
// It by default exports as an object
const sum = (a,b) => a+b ;
const mul = (a,b) => a*b ;
const g = 9.8;

// WAYS TO EXPORT 
// way 1
// module.exports = "hello";

// way 2
// let obj = {
//     sum : sum,
//     mul : mul,
//     g : g,
// }
// module.exports = obj;

// way 3
// module.exports = {
//     sum : sum,
//     mul : mul,
//     g : g,
// }


// way 4
exports.sum = (a,b) => a+b ;
exports.mul = (a,b) => a*b ;
exports.g = 9.8;

// exports = 'g' // this does not work as js identify it as a variable not as an object 