
type state = {
  count: int,
  hover: bool,
  mouseX: int,
  mouseY: int,
};

type action =
  | Hover
  | MouseMove(ReactEventRe.Mouse.t);

let component = ReasonReact.reducerComponent("EventTracking");

let make = _children => {
  ...component,

  initialState: () => { count: 0, hover: false, mouseX: 0, mouseY: 0 },

  reducer: (action, state) =>
  switch (action) {
  | Hover => ReasonReact.Update({ ...state, hover: !state.hover })
  | MouseMove(event) => ReasonReact.Update({ ...state, mouseX: state.mouseX + 1})
  },

    render: self =>{
      let hoverString = "Hover State => " ++ string_of_bool(self.state.hover);


      <div className="statistics" onMouseEnter={_event => self.send(Hover)} onMouseLeave={_event => self.send(Hover)} onMouseMove={event => self.send(MouseMove(event))}>
        <p>
          (ReasonReact.stringToElement(hoverString))
        </p>
        <p>
          (ReasonReact.stringToElement(string_of_int(self.state.mouseX)))
        </p>
      </div> 
    },
};
