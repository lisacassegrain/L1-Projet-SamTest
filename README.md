BUNKER Ilan, CASSEGRAIN Lisa, DANI Thibaut

SAMTEST

https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.afjkd.com%2F&psig=AOvVaw1fakX8ylEewZBqOocrjHy6&ust=1621695244303000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCOiy7OKD2_ACFQAAAAAdAAAAABAD![image](https://user-images.githubusercontent.com/84515836/119157156-2e7f1900-ba55-11eb-9cef-dcfed45e145d.png)

OBJECTIFS DU PROJET


La réouverture des bars et restaurants de nouveau au public, les regroupements massifs et précipités vont se produire. Il est donc essentiel de mesurer la quantité d’alcool présente dans l’air expiré pour savoir s’il est possible ou non de prendre le volant. 
Rappelons que la conduite sous l’emprise d’alcool est l’une des premières causes de mortalité sur les routes. Ici nous prenons l’exemple du whisky qui ne nous autorise plus à prendre le volant une fois 3 centilitres bus. C’est l’équivalent de 0,10 mg/l d’air expiré. Nous avons donc fixé le seuil à 20 dans notre programmation, c’est-à- dire la limite à ne pas dépasser en quantité d’air expiré et de sang. 
Il est davantage pratique d’obtenir le résultat par un son ou un LED que par la lecture d’une quantité.
 Si le bruit retentit et que les LED deviennent rouges, le taux d’alcoolémie est supérieur au seuil autorisé.  A l’inverse, si aucun bruit ne se manifeste et que les LED deviennent vertes, le test est considéré comme négatif. 

MATERIEL UTILISE


	Capteur MQ135 : Module de détection de gaz, qualité de l’air

	Buzzer d’alarme (sonore continu)

	Carte Arduino pro mini

	Fils, LED

	Tube à utiliser lors du soufflement

	Imprimante 3D Ultimaker 3

	Boite Samtest couvrant la carte et les branchements




DIFFERENTS BLOCS FONCTIONNELS DU PROJET 


Le capteur est relié à la carte Arduino par trois branchements :
	Un relié à l’entrée Analog In A0

	 Un relié à l’alimentation 3.3V 

	 Le dernier relié au GND de l’Arduino  
Le buzzer est relié à la carte Arduino par trois branchements également : 
	  Un relié au GND 

	 Un relié à l’alimentation 3.3V 

	Le dernier relié à la sortie D0 

A l’intérieur du capteur, un dispositif fait varier la tension (au VCC) et sera lue par l’entrée Analog In
AnalogRead convertit la tension en valeur numérique qu’on pourra exploiter pour l’afficher sur un traceur série et déclencher une alarme si la valeur lue est supérieure au seuil que nous avons rentré dans le programme. La valeur du seuil est fixée à 20 ici. 
Une fois le code téléversé, nous ouvrons le traceur série. Au repos, sans détection de fumée et vapeur d’alcool, la valeur est comprise entre 4 et 5. Il n’ya pas besoin de boire beaucoup pour que le capteur réagisse, une gorgée suffit. Lors du test, la valeur est maintenant égale à 40.

PLAN D’EXECUTION


	Schéma du circuit (branchements) 

	Réalisation des branchements entre la carte et le capteur

	Rédaction du code (établissement du seuil, if, AnalogRead…)

	Lecture sur le traceur série

	Mise en place d’un buzzer pour alerter le dépassement du seuil

	Nouveaux branchements

	Création d’un tube et d’une boite à ouvertures avec l’imprimante Ultimaker 3



CE QU’ON AURAIT PU FAIRE


A la suite des résultats, permettre ou non l’accès au véhicule, ainsi, si le conducteur est testé positif, il ne pourrait pas ouvrir la voiture. Ou faire en sorte de ne pas pouvoir démarrer après la réalisation du test, le système étant relié au faisceau électrique du véhicule.

PROBLEMES RENCONTRES


La forte sensibilité du capteur a nécessité un calibrage et nous avons du recommencé les impressions des objets suite à des soucis techniques de l'imprimante.

