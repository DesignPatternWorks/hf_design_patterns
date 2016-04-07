The state pattern allows an object to alter its behavior when its internal state changes. The object will appear to change its class.

In general, think of the strategy Pattern as a flexible alternative to sublclassing; if you use inheritance to define the behavior of a class then you're stuck with that behavior even if you need to change it. With strategy you can change the behavior by composing with a diffeerent object.

Think of the state Pattern as an alternative to putting lots of conditionals in your context; by encapsulating the behaviors within state objects, you can simply change the state object in context to change its behavior