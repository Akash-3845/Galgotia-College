import React, { Component } from "react";
import ChildComponent from "./ChildComponent";

export class ParentComponent extends Component {
  constructor(props) {
    super(props);

    this.state = {
      firstName: "Aman",
    };
    this.GreetMessage = this.GreetMessage.bind(this);
  }
  GreetMessage(childName) {
    alert(`Hello ${this.state.firstName} from ${childName}`);
  }
  render() {
    return (
      <div>
        <ChildComponent GreetHander={this.GreetMessage} />
      </div>
    );
  }
}

export default ParentComponent;
