import Pizzas

# class PizzaMenu will contain objects that will create and store the pizzas
class PizzaMenu:
    
    def __init__(self):  
    
        # intializes attributes
        self.pizza_objs = []
        

    # SC7 createPizza accepts arguments for the pizza details
    # SC7 creates Pizza objects and adds it to a data structure
    def createPizza(self, symbol, name, price, active):
        
        # creates pizza menu objects
        pizza = Pizzas.Pizzas(symbol, name, price, active)
        print(pizza)
        # appends them to the list of pizza objects
        self.pizza_objs.append(pizza)

        
    # getInventoryTVL accepts no arguments
    # gets the total value of all the pizza types stored in the structure
    def getInventoryTVL():  

        return
    # str accepts no arguments
    # returns the completed required output to PizzaOrderControl
    def __str__():
        
        return
