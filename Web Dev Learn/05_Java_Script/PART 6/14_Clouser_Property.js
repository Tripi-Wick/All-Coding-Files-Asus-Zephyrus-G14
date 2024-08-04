function outer() {
    var b = 10;
    function inner() {
        var a = 20;
        console.log(a + b);
    }
    return inner;
}

let inner = outer();

inner();


// This property says that if a inner function has access to the variables of a the outer function then js preserves the variables that inner function is using explicitly
