// It is special object in node js which gives us info and control over current process
// .argv -> gives us an array contain command line args passed when node.js process was launched.

let pr = process.argv;
console.log(pr);

// To use these arguments

for(let i=2; i<pr.length; i++){
    console.log('hello ',pr[i]);
}