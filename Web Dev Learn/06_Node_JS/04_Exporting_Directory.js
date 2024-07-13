// We gotta create a index.js file in that directory, it is like a index which holds all the data of the files in it as an array.
// When we import the directory req function looks for this index file

let test = require('./04_Require_Test_Dir');

console.log(test);
console.log(test[0]);
console.log(test[0].apple);
console.log(test[1].name);