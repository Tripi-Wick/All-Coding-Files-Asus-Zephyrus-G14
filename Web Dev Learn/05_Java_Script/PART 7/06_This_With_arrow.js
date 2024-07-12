// Scope of 'this' in functions is object scope i.e. they refer to the vars of the calling object i.e. scope of the object of the calling function itself.
// But in the no name functions or arrow functions 'this' have lexical scope i.e. they refer to the vars of their calling parent i.e. scope of their parent.


const obj = {
    name : 'tris',
    marks : 69,
    prop : this,  // Global scope because currently obj has global scope.

    // Example 1
    getName: function(){
        console.log(this);
        return this.name;    // Object Scope.
    },

    getMarks: ()=>{
        console.log(this);  //Parent's Scope   --> this 'this' can be equated to prop's 'this' 
        return this.name;
    },

    // Example 2
    getInfo_1 : function (){
        setTimeout(()=>{console.log(this)},2000)     // 'this' in it is in obj scope
    },
    
    getInfo_2 : function (){
        setTimeout(function(){console.log(this)},2000)      // 'this' in it is in window scope
    }

}

// Try these in browser console
// obj.prop;
// obj.getName();
// obj.getMarks();
// obj.getInfo_1();
// obj.getInfo_2();



// Basically in normal function 'this' refers to the vars that are available in the object in which this calling faction reside.  --> Hence obj scope
// And in case of arrow function 'this' refers to the vars available in the scope of immediate parent of its calling function.   --> Hence lexical scope