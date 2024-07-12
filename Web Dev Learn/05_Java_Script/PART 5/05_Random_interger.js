let rand = Math.random(); // Gives random number between [0,1)

rand = rand * 10;  // To make it from [0,10)

rand = Math.floor(rand); // TO make it integer

rand = rand + 1; // To make it from [1,10]

console.log(rand);


// solution in one line
rand = Math.floor(Math.random()*10) + 1;
console.log(rand);
