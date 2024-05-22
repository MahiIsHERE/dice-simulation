# dice-simulation
dice simulation using Arduino &amp; JK-flipflop in Proteus



-- UNO DICE

COMPONENTS & SUPPLIES
- LED  ×7
- Arduino UNO  ×1
- Resistor  ×7
- Button  ×1

CODE
     In code, first, we should define pin number for each button & LED & also write any information we need.
     Second, we’ll go for the setup() function, which includes pin modes & will run once.
     Then, we have to write dice states’ functions & loop() function. Dice states tell us how the LEDs will work when we call the function. It has “digitalWrite”, so we can specify led states by LOW or HIGH.
     And finally, there’s loop() function, which will run the code inside repeatedly.



-- UP - DOWN JK FF DICE

COMPONENTS & SUPPLIES
- LED  ×7
- DClock  ×1
- JK flip flop  ×3
- Resistor  ×7
- Button  ×2
- Logic state  ×1
- Logic probe (not necessary)  ×3
- AND/OR/NOT gates  ×18  ×6  ×6

DIAGRAM
     First, we modeled the counter by JK flip flop. It counts from 0 to 7, as we can see the binary types by logic probes. When the logic state is 0, it works as up-counter & when it’s 1, it works as down-counter.
     Second, we defined each LED’s state by logic gates.
     Finally, each output state got connected to its LED with a resistor. The cathode of  LEDs should be connected to the ground.

RUN
     To run the project and see the states, we have to push the button of the counter & it will show states randomly!
