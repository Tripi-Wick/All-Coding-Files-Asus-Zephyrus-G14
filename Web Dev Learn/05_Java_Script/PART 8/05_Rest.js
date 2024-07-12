// It is opposite of spread, but with same syntax
// Its work is to combine all the multi inputs given to the function and store it in an array and use its methods on it.
// By default every function stores all the arguments in a collection called arguments.

function arg(...arg){   //rest
    console.log(arg);
    console.log(Math.min(...arg));  //spread
}

function sum(){
    console.log(arguments);    
}

arg(1,2,3,4,5);
sum(1,2,3,4);

// we can also add other arguments with this 
function min(mes, ...arg){
    console.log(mes);
    console.log(arg);
    return arg.reduce((res,el)=>{
        if(res>el) return el;
        else return res
    })
}
console.log(min('It is Brain Duck',1,2,-1));