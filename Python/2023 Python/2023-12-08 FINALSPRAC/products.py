class ProdClass:
    def __init__(self, product, stock, price):
        self.__ProdName = product
        self.__stock = stock
        self.__ProdPrice = price


    def getProduct(self):
        return self.__ProdName

    def setProduct(self,newProduct):
        self.__ProdName = newProduct

    def getStock(self):
        return self.__stock

    def setStock(self, newStock):
        self.__stock = newStock


    def getPrice(self):
        return self.__ProdPrice

    def setPrice(self, newPrice):
        self.__ProdPrice = newPrice


