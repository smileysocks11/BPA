# class pizzas will contain objects to be created
class Pizzas:

    def __init__(self, symbol, name, price, active):  

        self.symbol = symbol
        self.name = name
        self.price = price
        self.active = active
        

    # returns a value calculated from pizza price and inventory count 
    def getValue(self):  
    
        estimated = price * inventory
        
        return estimated
    
    def printPizzaType(self):  
    
        return
    
    # SC11  returns the output of the pizza information
    def __str__(self):
    
        return 'Pizza Type Symbol: ' + self.symbol + '\n\tPizza Name: ' + self.name +'\n\tUnit Price: ' + str(self.price) + '\n\tActive Inventory: ' + str(self.active) 

        
  
