let num = prompt("Enter the number from 1 to where u wanna take a guess");
let rand = Math.ceil(Math.random()*num);

let n = 1;

let guess;
alert(`Game Begins, You have to guess the generated number between 1 to ${num}`);

while(n<6){
    guess = prompt("Enter your guess : ");
    if(guess == rand){
        console.log(`You guess it in ${n} guesses`);
        break;
    }
    else{
        console.log(`Wrong Guess, Try again, number of guesses left = ${5-n}`);
        n++;
    }

    if(guess<rand) console.log("The number is larger, try bigger numbers")
    else console.log("The number is smaller, try smaller numbers")    
}
