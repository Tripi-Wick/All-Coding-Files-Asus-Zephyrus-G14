// Extends is used to define the inheritance parent
// after constructor of child constructor of parent is called using super.

class Human{
    constructor(name,age){
        this.name = name;
        this.age = age;
    }
    hello(){
        console.log('Hello ',this.name);
    }
}

class Student extends Human{
    constructor(name, age, roll_Num){
        super(name,age);
        this.roll_Num = roll_Num;
    }
    fool(){
        console.log('I am a fool');
    }
}

class Teacher extends Human{
    constructor(name,age,id){
        super(name,age);
        this.id = id;
    }
    cool(){
        console.log('I think i m cool');
    }
}

let hum = new Human('sex','eternity');
let stud = new Student('rax',69,7);
let teach = new Teacher('dis',90,9978);

console.log(hum);
hum.hello();
console.log(stud);
stud.hello();
stud.fool();
console.log(teach);
teach.hello();
teach.cool();