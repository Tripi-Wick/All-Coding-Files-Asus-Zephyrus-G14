// Sates are the builtin react objects that store data or information about the react component
// A components state can be changes over time but when it does the component is re-rendered

// Normally we can't use a variable to store a value when it is altered then to display the new value it in react Because react renders the page and change in any variable doesn't trigger re-rending
// Hence states are special objects used to store variables and then trigger re rendering when the value of those variable changes

// This proves our above statement 

export default function Counter () {
    let count = 0;

    function handleClick(){
        countInc();
    }

    function countInc() {
        count++;
        console.log(count)
    }

    return (
        <>
            <h1>Count = {count}</h1>
            <button onClick={handleClick}>Inc Count</button>
        </>
    )
}