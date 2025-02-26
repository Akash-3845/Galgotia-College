import React from "react";

function Person(props) {
  return (
    <div>
      <h2>
        My Name is{props.person.name} and I am {props.person.age} year old, My
        skill is
        {props.person.skill}
      </h2>
    </div>
  );
}

export default Person;
