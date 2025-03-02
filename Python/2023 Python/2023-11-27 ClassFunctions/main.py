class youTubeVideo:



    def __init__(self, startingLikes , startingVeiws, startingTitle):
        if startingLikes > 0:
            self.__numLikes = startingLikes
        else:
            self.__numLikes = 0
            print("starting likes must be 0 ")
        if startingVeiws > 0:
            self.__numViews = startingVeiws
            self.__title = 0

    def likes(self):
        self.__numLikes += 1

    def views(self):
        self.__numViews += 1

    def title(self):
        self.__title = "this video"




    def videoCompiler(self, Utitle, Uviews, Ulikes):
        self.__title = Utitle
        self.__numViews = Uviews
        self.__numLikes = Ulikes



def main():
    viewCount = youTubeVideo()


main()
