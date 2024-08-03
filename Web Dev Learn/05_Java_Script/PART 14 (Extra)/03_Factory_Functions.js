// These are the functions that create objs
// These are also not that much optimal solution to create objects because the functions in it doesn't become prototype functions

function cr_shl_reg(name, roll, cla){
    const obj = {
        name : name,
        Roll_No : roll,
        Grade : cla,
        intro(){
            console.log('My name is : ', this.name);
        }
    }
    return obj;
}

let tis = cr_shl_reg('Très',21,'I');
console.log(tis);
tis.intro();