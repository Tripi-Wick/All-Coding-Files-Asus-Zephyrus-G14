// Its just a stack that keep track of which nested/ called function is currently on

function one () {
    return 1;
}

function two () {
    return one() + 1;
}

function three () {
    console.log(two()+one());
}

three();  

// Stack Logs for three()
// three()
// two() one()
// one() 


// JS is single Threaded i.e. it can do only one thing at a time,,, args like set timeout i.e. waiting is done by the browsers which is written in cpp which is multithreaded