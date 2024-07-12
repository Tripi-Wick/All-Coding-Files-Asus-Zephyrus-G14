// Q1
arr = [1,2,3,4];
console.log(arr);
let sq_sum = arr.map((i)=>(i*i)).reduce((res,i)=>(res+i));
let avg = arr.reduce((res,i)=>(res+i))/arr.length;
console.log(sq_sum);
console.log(avg);

// Q2
let nrr = arr.map(function(i){
    return i+5;
});
console.log(nrr);

// Q3
let srr = ['a','b','c','d'];
let n_srr = srr.map(function(i){return i.toUpperCase()});
console.log(n_srr)

// Q4
// function doubleAndReturnArgs (ar,...arg){
//     return ar.concat(arg.map((i)=>(i*2)));
// }
// console.log(doubleAndReturnArgs([1,2,3],4,5,6));
// Another way by use of spread.
// Way 1
// const doubleAndReturnArgs =  (ar,...arg)=>[...ar,...arg.map((i)=>i*2)]
// Way 2
function doubleAndReturnArgs (ar,...arg){
        return [...ar,...arg.map((i)=>i*2)]
}
console.log(doubleAndReturnArgs([1,2,3],4,5,6));


// Q5   
let obj1 ={
    a : '1',
    b : '2',
    c : '3',
    d : '4'
}
let obj2 ={
    e : '5',
    f : '6',
    g : '7',
    h : '8'
}

function mergeObjects(o1,o2){
    return{...o1,...o2}
}
console.log(mergeObjects(obj1,obj2));