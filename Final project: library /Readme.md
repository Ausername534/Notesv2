      Create a program that maintains an inventory of items and displays unique information about each item.

         1. Pick a problem domain that you are interested in modeling (e.g., books, movies, pets, sports teams...).

          2. Create the classes that model your domain. There must be at least one example of a class that is derived from a base class. For exam TextBook is derived from Book, TelevisionMovie is derived from Movie, AquaticPet is derived from Pet, BasketballTeam is derived from Team.

Hint: make sure you inherit with public, this will be important for step 5, for example:

class TelevisionMovie: public Movie
      3. Create a menu system similar to the following.

    Main menu: Select an option.

     1. Add item
     2. Remove item
      3. Display all items

Menu option 1: What type of item will be added?
1. Add item type 1
2. Add item type 2
3. Add item type 3

Menu option 2: Enter the index of the item that should be removed?

Menu option 3: Displaying all items...
 

4. Each class should have its own display function that is used to display an object of that class.
