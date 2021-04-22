# Arduino files for Arbotix-M

## Installation

- Clone this repo into (not under!) ~/Arduino:
```
cd ~/
git clone git@github.com:ZiyunClaudeWang/Arduino_setup.git Arduino
```

- [Download the latest Arduino
  IDE](https://www.arduino.cc/en/software). No need to install it,
  just untar the .tar.xz file and run it with ./arduino.

- Start the arduino IDE and set the right board under ``Tools -> Board
  -> ArbotiX Std``

- Under ``Tools -> Port`` set the port to ``/dev/ttyUSB0`` (or
  ``/dev/ttyUSB1``).

- Test that the board works by uploading the blinking-LED-sketch under
  ``File -> Examples -> ArbotiX -> arbotix -> ArbotiXBlink``. Click on
  the upload button (right arrow next to the check mark)

- Open and upload ROS sketch: ``File -> Sketchbook -> ArbotiX Sketches -> ros``.
