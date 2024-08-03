// This is the most optimal solution 
// In general we keep names of classes with capital letters
// Constructor is a special method used to initialize and create a new function
// Functions defined in an class are automatically prototypes

class Cr_shl_reg{
    constructor(name, roll, cla){
        this.name = name;
        this.roll_num = roll;
        this.class = cla
    }
    intro() {
        console.log('My name is : ', this.name);
    }
}      

let tis = new Cr_shl_reg('Très',21,'I');
console.log(tis);
tis.intro();