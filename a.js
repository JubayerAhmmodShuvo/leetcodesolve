// const a = { x: 1, y: 2, z: 3 };
// const b = { x: 4 };
// const c = { y: 5 };
// const o = { ...a, ...b, ...c };
// console.log(o.x + o.y + o.z);
// const person = {
//   name: 'John',
//   age: 30,
// };
// const changePersonName = (person, name) => {
//   return {
//     ...person,
//     name,
//   };
// };
// changePersonName(person, "ksj");

// console.log(person.name);

const a = {
  property1: 10
};
const b = Object.freeze(a);
const c = { __proto__: b };
b.property1 = 10;
console.log(Object.is(a), Object.is(b, a), Object.is(c, b));

//Write a higher-order React component that will add 1 to each numeric property passed to the component.
