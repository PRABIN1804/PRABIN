from sketchpy import canvas
import turtle
obj = canvas.sketch_from_svg("ganesh_ji.svg")
t = turtle.Turtle()
def pos(x,y):
    t.penup()
    t.goto(x,y)
    t.pendown()
t.pencolor("Red")
pos(200,200)
t.write("HAPPY",align="center",font=("Arial",40,"bold"))
pos(200,130)
t.write("GANESHA",align="center",font=("Arial",40,"bold"))
pos(200,60)
t.write("CHATURTHI",align="center",font=("Arial",40,"bold"))
obj.draw()
t.hideturtle()
turtle.done()
