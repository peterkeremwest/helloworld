from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE genres = 'Comedy'")

row = rows[0]
for row in rows:
    print(rows[0])
