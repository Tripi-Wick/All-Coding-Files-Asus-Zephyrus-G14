// When multiple var is there
const sum = (a,b) => {
    return a+b;
}

// When single var is there
const print = a => {
    console.log(a);
    }
    
// When zero var is there
const prt = () => {
    console.log(a);
}

const cube = (a,b,c) => {
    return a*b*c;
}


// In arrow function to make it more compact and remove return keyword we write like this
// In this return statement is implicitly defined

const mul =  (a,b) => (a*b);
console.log(sq(2,3))
// The smallest way
const sq = a => a*a;
