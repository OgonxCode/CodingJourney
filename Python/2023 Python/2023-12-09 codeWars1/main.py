class Ship:
    def __init__(self, draft, crew):
        self.draft = draft
        self.crew = crew


    def is_worth_it(self):
        crewWeight = self.crew * 1.5
        draft = self.draft
        realWeight = draft - crewWeight

        if  realWeight > 20:
            return True
        elif realWeight < 20:
            return False


    def main(self):

        self.is_worth_it()





