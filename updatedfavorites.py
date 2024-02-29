from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE genres = ?", favorite) #single question marks are used as placeholders.

print(rows[0]["n"])
