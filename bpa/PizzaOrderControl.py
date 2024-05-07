# SC1 imports class
import PizzaMenu

# reads the txt file and creates the PizzaMenu object
class PizzaOrderController:

    def __init__(self):
        
        pass
    
    def read_file(self):
        
        # SC4 opens file
        try:
            infile = open('PizzasText.txt', 'r')
            
            line = infile.readline()
            
            # SC3 loops through the file
            while line != '' and line != 'STOP\n':
                
                # SC2 stores the information as a PizzaMenu object
                pizza = PizzaMenu.PizzaMenu()
                
                # SC3 collects the pizza information
                
                symbol = line
                line = infile.readline()
                name = line
                line = infile.readline()
                price = line
                line = infile.readline()
                active = line
                
                # creates pizza objects
                pizza.createPizza(symbol, name, price, active)

                
                line = infile.readline()
                
            # closes the file
            infile.close()
            
        # SC5
        except:
            print('exit')
            
def main():
    test = PizzaOrderController()
    test.read_file()
    
main()

    