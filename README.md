# UCC_ProyectoFinal_Alfei_Carrizo_Bocco

## Estrategias para el uso de archivos:
### Cantidad de archivos de texto a utilizar : 
#### 3, "Usuarios.txt" , "Autores.txt" , "Noticias.txt".
### Datos a escribir en cada archivo: 
####  En "Usuarios.txt" se guardará nombre, dni, edad del usuario. En "Autores.txt" se guardará nombre, dni, medio del autor. En "Noticias.txt" se guardará título, detalle, día, mes, año, DNI del autor del autor de la noticia.  
### Relación entre los archivos: 
#### En el archivo Noticias, se relaciona con Autores ya que cada noticia tiene el DNI de su autor registrado en el archivo Autores. A su vez, este mismo archivo Noticias también se relaciona con Usuarios a travez de cada comentario registrado que tiene el DNI de su usuario registrado en el archivo Usuarios.  
### Formato para guardar datos: ejemplo:
#### Noticia:
#### Titulo: (atributo titulo), Detalle: (atributo detalle), Dia: (atributo dia), Mes: (atributo mes), Anio: (atributo anio), DNI del autor: (atributo autorDni).
### Serializar/deseriarizar datos que no sean std::string : 
#### Para la serialización de un int a un string utilizamos std::to_string(), y para la deserialización para int utilizamos std::stoi(). 
###  Funciones para serializar y deserializar un int:
#### std::string serializar_Int(int a){return std::to_string(a);}
####
#### int deserializar_Int(const std::string& b){return std::stoi(b);}
###  Funciones para serializar y deserializar bool: 
#### std::string serializar_Bool(bool valor){
#### std::string a;
#### if(valor==true){
#### a="1";}
#### if(valor==false){
#### a="0";}
#### return a;}
###
#### bool deserializar_Bool(const std::string& a){
#### if(a=="1"){
#### return true;}
#### if(valor=="0"){
#### return false;}
#### }

