import React from "react";

function EvenHandle() {
  function clickHandler() {
    console.log("Button Clicked");
  }
  return (
    <div>
      <button onClick={clickHandler}>Event</button>
    </div>
  );
}

export default EvenHandle;
