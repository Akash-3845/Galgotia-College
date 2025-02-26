import React, { Component } from "react";

export class ChildComponent extends Component {
  render() {
    return (
      <div>
        <button onClick={() =>this.props.GreetHander('child')}>Hey Message Reader</button>
      </div>
    );
  }
}

export default ChildComponent;
