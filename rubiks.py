# used in place of randomness
# the assignment was to take a rubiks cube, mix it up, then to the opposite of what you just did to solve it
# relatively simple program

import random

colors = ("Red", "Green", "Blue", "Yellow", "White", "Orange")
turns = []
invTurns = []

print("How many rotations?")
rotations = int(input())

for i in range(rotations):
    rand = (int) (random.random() * 6)
    if random.random() > .5:
        turns.append("Turn " + colors[rand] + " clockwise")
        invTurns.insert(0, "Turn " + colors[rand] + " counter clockwise")
    else:
        turns.append("Turn " + colors[rand] + " counter clockwise")
        invTurns.insert(0, "Turn " + colors[rand] + " clockwise")

print("Follow these instructions to mess up")
for i in turns:
    print(i)
print("\nFollow these instructions to solve")
for i in invTurns:
    print(i)
