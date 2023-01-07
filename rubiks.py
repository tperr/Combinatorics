import random
colors = ("Red", "Green", "Blue", "Yellow", "White", "Orange")
print("How many rotations?")
rotations = int(input())

turns = []
invTurns = []

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