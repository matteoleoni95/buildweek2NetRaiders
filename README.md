Web Application Exploit SQLi 
Traccia Giorno 1:
- Utilizzando le tecniche viste nelle lezione teoriche, sfruttare la vulnerabilità SQL injection presente sulla Web Application DVWA per recuperare in chiaro la password dell’utente Gordon Brown. 
NB: non usare tool automatici come sqlmap. È ammesso l’uso di repeater burpsuite. 
Requisiti laboratorio Giorno 1:
Livello difficoltà DVWA: LOW 
IP Kali Linux: 192.168.66.110/24 
IP Metasploitable: 192.168.66.120/24

Bonus:
- Replicare tutto a livello medium
- Verificare se è possibile inserire un utente tramite SQL injection
- Recuperare informazioni vitali da altri db collegati
- Creare una guida illustrata per spiegare ad un utente medio come replicare questo attacco.

Web Application Exploit XSS 
Traccia Giorno 2:
- Utilizzando le tecniche viste nelle lezione teoriche, sfruttare la vulnerabilità XSS persistente presente sulla Web Application DVWA al fine simulare il furto di una sessione di un utente lecito del sito, inoltrando i cookie «rubati» ad Web server sotto il vostro controllo. 
- Spiegare il significato dello script utilizzato. 
Requisiti laboratorio Giorno 2: 
Livello difficoltà DVWA: LOW 
IP Kali Linux: 192.168.109.100/24 
IP Metasploitable: 192.168.109.150/24 
I cookie dovranno essere ricevuti su un Web Server in ascolto sulla porta 5555

Bonus:
- Replicare tutto a livello medium
- fare il dump completo, cookie, versione browser, ip, data
- Replicare tutto a livello high
- Creare una guida illustrata per spiegare ad un utente medio come replicare questo attacco.

System Exploit BOF 
Traccia Giorno 3: 
- https://drive.google.com/file/d/1nEM_FV5zFHj4hw9_Ya1PUP_xf5bLGy0I/view 
- Leggete attentamente il programma in allegato. Viene richiesto di: 
• Descrivere il funzionamento del programma prima dell’esecuzione 
• Riprodurre ed eseguire il programma nel laboratorio. Le vostre ipotesi sul funzionamento erano corrette? 
• Modificare il programma affinché si verifichi un errore di segmentazione

Bonus:
- Inserire controlli di input 
- Creare un menù per far decidere all’utente se avere il programma che va in errore oppure quello corretto

Exploit Metasploitable con Metasploit 
Traccia Giorno 4: 
- Sulla macchina Metasploitable ci sono diversi servizi in ascolto potenzialmente vulnerabili. È richiesto allo studente di: 
- Effettuare un Vulnerability Scanning (basic scan) con Nessus sulla macchina Metasploitable 
- Sfruttare la vulnerabilità del servizio attivo sulla porta 445 TCP utilizzando MSFConsole 
- Eseguire il comando «ifconfig» una volta ottenuta la sessione per verificare l’indirizzo di rete della macchina vittima 
Requisiti laboratorio Giorno 4: 
IP Kali Linux: 192.168.75.100 
IP Metasploitable: 192.168.75.150 
Listen port: 4455

Exploit Windows con Metasploit
Traccia Giorno 5: 
- Sulla macchina Windows XP (o in alternativa Windows 7) ci sono diversi servizi in ascolto vulnerabili. Si richiede allo studente di: 
- Effettuare un Vulnerability Scanning (basic scan) con Nessus sulla macchina Windows XP (o in alternativa Windows 7) 
- Sfruttare la vulnerabilità identificata dal codice MS17-010 con Metasploit. 
Requisiti laboratorio Giorno 5: 
IP Kali Linux: 192.168.198.100 
IP Windows XP(o 7): 192.168.198.200 
Listen port: 9999

Evidenze laboratorio Giorno 5: 
-Una volta ottenuta una sessione Meterpreter, eseguite una fase di test per confermare di essere sulla macchina target. Recuperate le seguenti informazioni: 
- se la macchina target è una macchina virtuale oppure una macchina fisica
- le impostazioni di rete della macchine target
- se la macchina target ha a disposizione delle webcam attive
- recuperate uno screenshot del desktop
- i privilegi dell’utente
- creare una backdoor, iniettarla nel sistema, intercettare al connessione ed avviarla.

Bonus:
- Hacking VM BlackBox Easy 
- Scaricare ed importare una macchina virtuale da questo link: https://download.vulnhub.com/bsidesvancouver2018/BSides-Vancouver-2018-Workshop.ova 
Effettuare gli attacchi necessari per diventare root. Sono presenti almeno 2 modi per diventare root su questa macchina. Nel frattempo, studiare a fondo la macchina per scoprire tutti i segreti. 
L’ipotesi è che noi andiamo in azienda e dobbiamo attaccare quella macchina/quel server dall’interno dell’azienda, di cui non sappiamo nulla, per questo è detto test di BlackBox. 
Non vengono fornite indicazioni sulla configurazione delle macchine macchine Vietato usare Terminator come terminare, usare quello predefinito di Kali Preferibilmente, non usare l’utente root su kali ma inviare i comandi che lo necessitano

Bonus: 
- Hacking VM BlackBox Medium 
- Scaricare ed importare una macchina virtuale da questo link: https://download.vulnhub.com/hackable/hackable3.ova
Effettuare gli attacchi necessari per diventare root. 
Studiare a fondo la macchina per scoprire tutti i segreti. 
L’ipotesi è che noi andiamo in azienda e dobbiamo attaccare quella macchina/quel server dall’interno dell’azienda, di cui non sappiamo nulla, per questo è test di BlackBox puro.
