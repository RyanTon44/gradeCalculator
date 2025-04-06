import React, { useState } from 'react';

import './App.css';

function App() {
  return (
    <div className="App">
      <h1>Grade Calculator</h1>
      <p></p>

<div className="flex flex-col items-center">
  <h2>Assignment Grades</h2>
  <div className="card bg-base-300 rounded-box grid h-20 grow place-items-center">
    <input type="text" placeholder="Assignment 1 Grade" className="input" />
    <div className="divider"></div>
    <input type="text" placeholder="Assignment 2 Grade" className="input" />
    <div className="divider"></div>
    <input type="text" placeholder="Assignment 3 Grade" className="input" />
    <div className="divider"></div>
    <input type="text" placeholder="Assignment 4 Grade" className="input" />


  <h2>Weights</h2>
  <div className="card bg-base-300 rounded-box grid h-20 grow place-items-center space-y-10">
    <input type="text" placeholder="Assignment 1 Weight" className="input" />
    <div className="divider"></div>
    <input type="text" placeholder="Assignment 2 Weight" className="input" />
    <div className="divider"></div>
    <input type="text" placeholder="Assignment 3 Weight" className="input" />
    <div className="divider"></div>
    <input type="text" placeholder="Assignment 4 Weight" className="input" />
        </div>
      </div>
    </div>
    <button className="btn btn-soft space-y-10">Calculate Final Grade</button>
  </div>
  );
}

export default App;