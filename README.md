# Introduzione
Il progetto consiste nell'implementare un programma in C++ che legge i dati degli studenti da un file di testo denominato 'Studenti.txt', per creare gruppi di studenti, seguendo criteri specifici basati sulla media dei voti utilizzando strutture dati.



# Descrizione del problema
Il file 'Studenti.txt' contiente i seguenti campi per ogni studente: matricola, cognome, nome, città di residenza e media dei voti. L'obbiettivo è leggere questi dati da file e memorizzarli in strutture dinamiche per consentire l'operazione di creazione di gruppo secondo criteri prestabiliti.




# Implementazione delle classi
La classe Studenti è stata implementata per rappresentare gli studenti del programma.Essa contiente informazioni come matricola, cognome, nome, città di residenza, e media dei voti.

# Struttura della classe Studenti
Nella file di intestazione 'Studenti.h', ho definito la struttura della classe 'Studenti' insieme a tutti i suoi attributi e metodi pubblici e privati.
Nel file di implementazione 'Studenti.cpp', ho implementato i metodi dichiarati nel file di intestazione 'Studenti.h'.

La classe 'Studenti' è composta dai seguenti attributi privati:

- matricola: una stringa che rappresenta la matricola dello studente.
- cognome: una stringa che indica il cognome dello studente.
- nome: una stringa che indica il nome dello studente.
- città: una stringa che rappresenta la città di residenza dello studente.
- media_voti: un valore decimale che indica la media dei voti dello studente.

Inoltre, la classe fornisce i seguenti metodi pubblici: 

- Studenti(): un costruttore di default.
- Studenti(string _matricola, string _cognome, string _nome, string _citta, float _media_voti): un costruttore parametrizzato che inizializza gli attributi della classe con i valori specificati.
- string getMatricola() const: un metodo che restituisce la matricola dello studente.
- string getCognome() const: un metodo che restituisce il cognome dello studente.
- string getNome() const: un metodo che restituisce il nome dello studente.
- string getCitta() const: un metodo che restituisce la città di residenza dello studente.
- float getMedia() const: un metodo che restituisce la media dei voti dello studente.
- Operatori di confronto (>, ==, !=, <): operatori di confronto per confrontare gli studenti in base alla loro media dei voti.

Nella classe 'Studenti.cpp', i metodi sono implementati come segue:

- Il costruttore di default inizializza gli attributi della classe.
- Il costruttore parametrizzato assegna i valori passati come parametri agli attributi corrispondenti.
- I metodi getCognome(), getMatricola(), getNome(), getCitta() e getMedia() restituiscono i valori degli attributi corrispondenti.
- Gli operatori di confronto sono implementati confrontando la media dei voti degli studenti.

# Struttura della classe Lista

Nel file di intestazione 'Lista.h', ho definito la classe Lista che rappresenta una lista collegata di oggetti Studenti.

- Ho incluso il file di intestazione Studenti.h per garantire che la classe Lista possa utilizzare gli oggetti Studenti.
- Ho dichiarato la classe Nodo, che rappresenta un nodo della lista e contiene un oggetto Studenti, oltre a puntatori al nodo successivo e al nodo precedente.
- All'interno della classe Lista, ho dichiarato un puntatore testa che punta al primo nodo della lista.
- Ho definito un costruttore di default per la classe Lista che inizializza il puntatore testa a nullptr.
- Ho dichiarato un distruttore per la classe Lista che dealloca la memoria occupata dalla lista.
- Ho dichiarato i metodi getTesta(), inserisci() e ricerca() per la manipolazione della lista.
- Ho sovrascritto l'operatore di stream di output operator<< come amico della classe Lista, consentendo la stampa dei contenuti della lista.


Nel file di implementazione 'Lista.cpp', ho implementato i metodi dichiarati nel file di intestazione 'Lista.h'.

- Ho incluso il file di intestazione Lista.h all'inizio del file di implementazione, garantendo che la classe Lista sia definita correttamente.
- Nel distruttore della classe Lista, ho deallocato dinamicamente la memoria occupata dalla lista, eliminando ogni nodo.
- Ho implementato l'operatore di stream di output operator<< per la classe Lista, che consente la stampa dei contenuti della lista.
- Ho implementato il metodo ricerca() per cercare un nodo nella lista che contiene uno specifico oggetto Studenti.
- Ho implementato il metodo inserisci() per inserire un nuovo nodo nella lista, mantenendo l'ordine crescente basato sulla media dei voti degli studenti.


# Struttura della classe Pila

Nel file di intestazione 'Pila.h', ho definito la classe 'Stack' che rappresenta una pila di oggetti Studenti.

- Ho incluso il file di intestazione Studenti.h per garantire che la classe Stack possa utilizzare gli oggetti Studenti.
- Ho dichiarato la classe Node, che rappresenta un nodo della pila e contiene un oggetto Studenti e un puntatore al nodo successivo.
- All'interno della classe Stack, ho dichiarato un puntatore top che punta al nodo superiore della pila.
- Ho definito un costruttore di default per la classe Stack che inizializza il puntatore top a nullptr.
- Ho dichiarato un distruttore per la classe Stack che dealloca la memoria occupata dalla pila.
- Ho dichiarato i metodi push(), pop() e pop2() per la manipolazione della pila.
- Ho sovrascritto l'operatore di stream di output operator<< come amico della classe Stack, consentendo la stampa dei contenuti della pila.

L'implementazione dei metodi di questa classe sono:

- Metodo push(): Questo metodo inserisce un nuovo nodo nella pila, contenente un oggetto Studenti, e restituisce il numero di nodi inseriti.
- Metodo pop(): Questo metodo rimuove il nodo superiore dalla pila e restituisce l'oggetto Studenti contenuto nel nodo rimosso.
- Metodo pop2(): Questo metodo rimuove il nodo superiore dalla pila senza restituire l'oggetto Studenti contenuto nel nodo rimosso.


La scelta della creazione dei file Lista.cpp e Studenti.cpp è
stata fatta in maniera arbitraria e per mantenere un
determinato ordine nella scrittura, L’alternativa era dichiarare
ed implementare la classe direttamente all’interno dell’header,
come è stato fatto con Pila.h.


Nel file 'main.cpp', ho implementato la funzione 'main' che coordina l'esecuzione del programma.

- Ho incluso i file di intestazione necessari, come iostream, string, fstream e gli header delle classi Lista e Pila.
- Ho definito la funzione StudentiFile che estrae i valori dai record del file di testo e li inserisce in un array di stringhe.
- Ho implementato la funzione punto1 che legge i dati dal file "Studenti.txt" e li inserisce nella lista listaStudente, restituendo il numero di studenti letti.
- Ho implementato la funzione printLista che stampa gli studenti con una media dei voti superiore o uguale a 24 dalla lista listaStudente.
- Ho implementato la funzione punto2 che legge i dati dal file "Studenti.txt" e li inserisce nella pila Pila, restituendo il numero di studenti con una media dei voti inferiore a 24.
- Ho implementato la funzione gruppi che crea e stampa i gruppi di studenti in base alle regole specificate nel testo dell'esercizio.
- All'interno della funzione main, ho chiamato le funzioni precedentemente definite per eseguire il programma e stampare i risultati.

Ed infine abbiamo la funzione main(): Questa funzione è il punto di ingresso del programma e coordina l'esecuzione delle altre funzioni. Carica i dati degli studenti dal file "Studenti.txt" nella lista 'listaStudente', stampa gli studenti con una media dei voti superiore o uguale a 24, carica gli studenti con una media dei voti inferiore a 24 nella pila, e infine crea e stampa i gruppi di studenti.

# Conclusione
In conclusione attraverso l'implementazione delle classi 'Studenti', 'Lista', e 'Pila', insieme alla funzione main, sono stato in grado di soddisfare gli obbiettivi stabiliti:

- La classe Studenti è stata creata per rappresentare ciascuno studente, con metodi per accedere ai suoi attributi e operatori di confronto per facilitare le operazioni di ordinamento.
- Le classi Lista e Pila sono state progettate per gestire rispettivamente una lista collegata e una pila di oggetti Studenti, fornendo metodi per l'inserimento, la ricerca e l'estrazione degli studenti.
- La funzione main è stata sviluppata per coordinare l'intero processo, caricando i dati dal file di testo, creando gruppi di studenti e stampando i risultati.

Il progetto ha permesso di acquisire familiarità con i concetti di programmazione orientata agli oggetti, la gestione delle strutture dati dinamiche e la manipolazione dei file di testo in C++.
Inoltre, ha offerto l'opportunità di applicare concetti avanzati come operatori di confronto e overloading degli operatori per migliorare la leggibilità e la flessibilità del codice.

