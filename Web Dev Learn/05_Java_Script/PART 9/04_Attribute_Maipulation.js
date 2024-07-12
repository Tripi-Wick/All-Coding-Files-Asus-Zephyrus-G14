// Get Attribute --> Used to get the value of the attribute
console.log(document.querySelector('img').getAttribute("src"));

// Set Attribute --> Used to set the value of the attribute, (attribute name, new value)
document.querySelector('img').setAttribute('src','https://th.bing.com/th/id/OIP.toQOoSHKyVHdpt_zlM2tpAHaGX?rs=1&pid=ImgDetMain');

// If we use this to change the class name or id name then the styling we had given to it would be reset to default. So we must think twice before changing the specificities.