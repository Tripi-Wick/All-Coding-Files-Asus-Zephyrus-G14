export default function LapDesc({ name, feat, info }) {
    return (
        <>
            <h1>{name}</h1>
            <h2 style={{fontWeight:"normal"}}>{feat}</h2>
            <h4 style={{fontWeight:"normal"}}>{info}</h4>
        </>
    );
}