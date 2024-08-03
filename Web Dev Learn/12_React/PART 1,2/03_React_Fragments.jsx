// We can render multiple files by wrapping it in a div tag but it takes space so jsx gives us power to wrap them between an empty tag <></> hence no new tag will be created.
// These tags are known as react fragments



// Component with Wrapping 
function Title() {
    return (
        <>
            <h1>Hello There !!</h1>
            <h1>You didn't expected me did you ?</h1>
        </>
    );
}

export default Title