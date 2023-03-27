# Arduino first steps
> These are my firt steps into Arduino sketches. I started with an Arduino Day workshop at the ICTP SciFabLab in Trieste. I used an Arduino UNO board

![](img/header.png)

## Installation

You need the Arduino IDE to compile the sketches and send them to the Arduino board connected to your PC.

Linux:

```sh
$ sudo apt install "Arduino IDE v2"
```

_For other OS, please refer to the [Arduino Guide](https://www.arduino.cc/en/Guide)._

## Usage example

To run the sketches into the ex_* folders you just need to: 
  - Open the IDE and load one of them;
  - Choose the right Arduino board (It should detect It automatically after you plug the board in a USB port);
  - Click the arrow button on the top left of the page.

Note: On Linux you could need to add the permission to the USB port. It can be done with the command:

```sh
$ sudo chmod a+rw /dev/port_name
```

with the name of the port instead of `port_name`

_For more examples and usage, please refer to the [Arduino Documentation](https://docs.arduino.cc/)._
