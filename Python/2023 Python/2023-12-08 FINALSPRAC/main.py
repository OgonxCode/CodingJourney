
# date: 2023-12-07
# purpose manage inventory of a small store the program should
# allow users to add and remove items from the store, check inventory
# check stock levels and generate reports
import products

invSystem = products.ProdClass("empty",0,0)
def addProduct():
    go = True
    while go:
        try:
            productName = input("please enter the product name: ")
            if productName.isdigit():
                raise ValueError
            stock = input("please enter the amount of product: ")
            if stock.isalpha():
                raise ValueError
            price = input("please enter the price amount: ")
            if price.isalpha():
                raise ValueError

            return productName, stock, price

        except ValueError:
            print("you did not enter a valid value please try again")
        except:
            print("Something went wrong")


def dictonary():

    productName = invSystem.getProduct()
    stock = invSystem.getStock()
    price = invSystem.getPrice()

    product = {
        # NAME, STOCK, PRICE
        "Product": productName,
        "stock": stock,
        "Price": price
    }

    return product

def file(productList):
    data = open("marketInv.txt",'a')
    data.write(str(productList))
    data.close()
def main():

    product_list = []

    go = True
    while go:

        try:
            addAnother = input("would you like to add another product yes or no: ")
            if addAnother.strip().lower() != "yes" and addAnother.strip().lower() != "no":
                raise ValueError
            elif addAnother.strip().lower() == "no":
                break

            details = addProduct()
            invSystem.setProduct(details[0])
            invSystem.setStock(details[1])
            invSystem.setPrice([2])

            product_list.append(dictonary())


        except ValueError:
            print("You did not enter a correct value please try again ")
        except:
            print("something went wrong ")

    print(product_list)
    file(product_list)


main()