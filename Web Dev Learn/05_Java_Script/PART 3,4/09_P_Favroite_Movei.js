const favMovie = "JJK";
let guess= prompt("Enter your guess of mine fav movie.");

while( (guess!=favMovie) && (guess!='end') ){
    guess= prompt("Enter your guess of mine fav movie.");

    if(guess==favMovie){
        console.log("You guessed it right.");
    } 
    else console.log("Wrong Answer");
}