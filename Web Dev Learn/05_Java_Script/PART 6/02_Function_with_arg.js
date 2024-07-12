function amb(arg1, arg2){
    console.log(`arg1 = ${arg1}, arg2 =  ${arg2}`);
}

amb('trash',4);
amb(4);
amb('trash');

// Functions in js automatically identifies the type of arg
// We can miss out any number of args from last i.e. right side
// All arguments will be accepted from left hand side.


// Functions can have default arguments too in js 

function amb(arg1='FOol', arg2=2){
    console.log(`arg1 = ${arg1}, arg2 =  ${arg2}`);
}
amb();