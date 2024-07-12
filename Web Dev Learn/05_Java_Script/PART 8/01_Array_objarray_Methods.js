let arr = [1,2,3,4];
let orr = [
    {        a : 1,        b : 2,        c : 3,    },
    {        a : 4,        b : 5,        c : 6,    },
    {        a : 7,        b : 8,        c : 9,    }
]; 

// forEach Method --> old way for for of method, used to perform a function on every element 
arr.forEach(function(em){console.log(em);})
arr.forEach((em)=>{console.log(em);})

orr.forEach((em) => {
    console.log(em.a);
})
orr.forEach(function(i){
    console.log(i.b);
})


// map method --> same as foreach just it applies function on every element and then return a new array of soln
let nrr = arr.map(function(em){return em*em});
let mrr = orr.map(function(em){return em.a*em.a});
console.log(nrr);
console.log(mrr);


// filter method --> It is same as map method it just don't modify the old array just check it like a if statement if its true it adds it to the new array if not then not. It returns true or false and then add or leaves the element
let xrr = arr.filter(function(em){return em%2==0});
let yrr = orr.filter(function(em){return em.a%2!=0});   //works this way too
console.log(xrr);
console.log(yrr);


// Every method --> Returns a single true value if every elements fulfills the condition (like a logical and statement)
console.log([2,4,6].every((em)=>{return em%2==0}))
console.log([2,4,5].every((em)=>{return em%2==0}))   //works this way too

// Some method --> Returns a single true value even if single element fulfills the condition (like a logical or statement)
console.log([2,4,6].some((em)=>(em%2==0)))
console.log([2,4,5].some((em)=>(em%2==0)))
console.log([1,3,5].some((em)=>(em%2==0)))  //works this way too

// Reduce method --> Returns a single value acc to the reducer function. it has two arguments accumulator and element
console.log([1,2,3,4,5,6,7,8,9,10].reduce((res,i)=>(res+i)))
