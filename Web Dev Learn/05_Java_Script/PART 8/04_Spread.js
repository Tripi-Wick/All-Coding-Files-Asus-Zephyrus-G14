// Spread is used input all the elements of the object or the array one by one, it is written with 3 dots
arr = [1,2,3,4,5,6];
let orr = [
    {            },
    {        a : 4,        b : 5,        c : 6,    },
    {        a : 7,        b : 8,        c : 9,    }
]; 


console.log(...arr);
console.log(...orr);

//// For Array
console.log(Math.min(...arr));
let srr = arr;    //Does not create a new array
let mrr = [...arr];   //Created a new array
console.log(mrr==arr);
console.log(srr==arr);

let sum_rr = [...arr,...mrr]   //Can be used to combine array
console.log(sum_rr);

//// For Object Arrays
let nrr = orr;    //Does not create a new object
let xrr = [...orr];   //Created a new object
console.log(xrr==orr);
console.log(nrr==orr);

let yrr = {...arr}  //Can be used to transform array to obj ,, in this index becomes key and value become value
let zrr = {...'Duck You'}  //Can be used to transform string to obj ,, in this index becomes key and value become value

console.log(yrr)
console.log(zrr)


//// For Objects
let obj1 = {    a : 1,    b : 2,    c : 3}
let obj2 = {    d : 4,    e : 5,    f : 6}

let obj_cpy = {...obj1};
console.log(obj_cpy);

let obj_cpy_2 = {...obj2, city:'x'}  //Can also put more values
let new_obj = {...obj1, ...obj2}  //can be used to merge objs
console.log(obj_cpy_2);
console.log(new_obj);