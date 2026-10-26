console.log("Hello, world!");
const greet = (name) => {
  return `Hello, ${name}!`;
};
console.log(greet("Alice"));

switch (new Date().getDay()) {
  case 0:
    console.log("Today is Sunday");
    break;
  case 1:
    console.log("Today is Monday");
    break;
}
