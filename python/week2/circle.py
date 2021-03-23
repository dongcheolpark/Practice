import turtle as t 

t.shape('turtle')
t.shapesize(2)
t.speed(0)
t.width(2)


t.color("chocolate")
for n in range(10):
    t.circle(70)
    t.penup()
    t.fd(30)
    t.pendown()

t.exitonclick()