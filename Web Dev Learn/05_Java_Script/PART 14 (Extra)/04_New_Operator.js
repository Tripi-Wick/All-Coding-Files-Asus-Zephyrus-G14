// We can solve the last problem by using new operator nd constructor
// Here we use this so that when a new object is created it refers to it.

function cr_shl_reg(name, roll, cla){
    this.name = name;
    this.roll_num = roll;
    this.class = cla
}

// We use function here cause arrow function is a nameless function.
// This creates a more optimal soln but not the best        
cr_shl_reg.prototype.intro = function() {
    console.log('My name is : ', this.name);
}

let tis = new cr_shl_reg('Très',21,'I');
console.log(tis);
tis.intro();