import LapCard from "./01_LaptopCard";
import './02_LaptopCardBox.css'

export default function LapCardBox() {
    return (
        <div className="lapCardBox">
            <LapCard det={{ name: 'Logitech MX Master', feat: '8000 DPI', info: '5 Programmable Buttons', realPrice: 12495, discountedPrice: 8999 }} />
            <LapCard det={{ name: 'Apple Pencil (2nd Gen)', feat: 'Intuitive Touch Surface', info: 'Designed for iPad Pro', realPrice: 11900, discountedPrice: 9199 }} />
            <LapCard det={{ name: 'Zebronics', feat: 'Designed for iPad Pro', info: 'Intuitive Touch Surface', realPrice: 1599, discountedPrice: 899 }} />
            <LapCard det={{ name: 'Protonic Toad', feat: 'Wireless Mouse 2.4GHz', info: 'Optical Orientation', realPrice: 599, discountedPrice: 278 }} />
        </div>
    );
}