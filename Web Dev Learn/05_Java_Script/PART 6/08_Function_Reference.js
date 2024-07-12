let sum = function(a,b){
    return a+b;
}
console.log(sum(3,2));


// Here this a function with no name 
// It is same as declaring a variable, we it is not fixed we can change it later.
// It is creating a function as a variable. 
// So we can pass functions and return functions as an argument
sum = function(a,b){
    return a-b;
}
console.log(sum(3,2));