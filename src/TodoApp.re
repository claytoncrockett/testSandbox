
[% bs.raw {| require('../public/mystyle.css') |}];
let component = ReasonReact.statelessComponent("TodoApp");

let make = _children => {
  ...component,
  render: _self =>
    <div className="app">
      <div className="title">
        (ReasonReact.stringToElement("Clayton Crockett"))
      </div>
    </div>,
};
