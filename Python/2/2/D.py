players = {"Петя": int(input()), "Вася": int(input()), "Толя": int(input())}
sorted_players = dict(sorted(players.items(), key=lambda x: x[1], reverse=True))
sorted_players_keys = list(sorted_players.keys())
# sorted_players_values=list(sorted_players.keys())
for i in range(len(sorted_players)):
    print(f"{i+1}. {sorted_players_keys[i]}")
