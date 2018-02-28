# 201yams
projet sur lequel j'ai travaillé pendant une journée découverte à l'EPITECH Paris.

# pour compiler
```make re```

# pour nettoyer
```make flcean```

# format de ligne de commande
```.\201yams.exe de1 de2 de3 de4 de5 combinaison_c1(_c2)?```

den sont les valeurs obtenues avec le n ème dé 0 s'il n'est pas lancé
la combinaison peut être l'une des suivantes:
- paire_c1
- brelan_c1
- yahtzee_c1
- petite_suite_c1
- grande_suite_c1
- full_c1_c2 (full de c1 par c2 = brelan de c1 + paire de c2)
- carre_c1
avec c1 un chiffre 
c2 un deuxième chiffre

# valeur de retour
- 84 en cas d'erreur détéctée
- 0 en cas de succès et affiche la probabilité d'obtenir la combinaison en dernier paramètre au prochain tour en lancant maximum une fois tout les dés.
