import React from "react";
import Person from "./Person";
function NameList() {
  const names = [
    { id: 1, name: "Aman", age: 20, skill: "React" },
    { id: 2, name: "Akash", age: 21, skill: "Angular" },
    { id: 3, name: "Amit", age: 22, skill: "Vue" },
  ];

  const personList = names.map((person) => (
    <Person key={person.id} person={person}></Person>
  ));
  return <div>{personList}</div>;
}

export default NameList;
