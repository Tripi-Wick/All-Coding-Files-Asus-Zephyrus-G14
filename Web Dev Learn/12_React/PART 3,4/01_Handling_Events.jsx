// In React to do something on a action we can just directly define it as a function
// we write the function name with handle 
let handleClick = () => {
    console.log("Plz More !!")
}

function handleMouseOver(){
    console.log("Plz More More !!")
}

export default function ClickButton() {
    return (
        <>
            <button onClick={handleClick} style={{ marginLeft: "47%", marginBottom:'20px', fontSize: "xxx-large" }}>Bust Me</button>
            <h1 onMouseOver={handleMouseOver} style={{ marginLeft: "48.5%", fontSize: "xxx-large" }}>Rub Me</h1>
        </>
    );
}