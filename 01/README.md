# Uso básico de GIT

Git es un sistema de control de versiones. Permite mantener sincronizado el contenido de nuestro repositorio local (ubicado en nuestro computador) y un repositorio remoto (en nuestro caso, alojado en, por ejemplo, GitHub)

*GitHub es una red social de código, la cual utiliza Git.*

## Obtener un repositorio remoto

Para obtener los datos del remoto, simplemente debemos clonarlo en nuestra área local utilizando el comando `clone`, seguido de la URI del archivo de extensión git de nuestro repositorio. Esta URI la encontramos en el boton verde `CODE` de nuestro repositorio en github.

```
git clone https://github.com/AlgoritmosyEstructurasDeDatos/Laboratorio_MG.git
```

Eso creará una carpeta con todo el contenido. Si tenemos permisos para escribir en este repositorio, luego podremos agregar o modificar archivos.

## Subir archivos a nuestro repositorio remoto

Primero debemos crear archivos en nuestra área local. Una vez que el archivo fue agregado a la carpeta, podemos observar su estado en el repositorio con el comando `git status`. Esto nos indicará que hay archivos "sin seguimiento" (es decir, aún no agregados al repositorio). Para darles seguimiento y agregarlos al repositorio, utilizamos los siguientes comandos.

```
git add <carpeta o archivos>
git commit -m "nombre del commit"
```
Con esto, los archivos se encuentran agregados al repositorio y a la espera de ser subidos al repositorio remoto. 

Para subirlos al repositorio remoto, solo debemos ejecutar el comando push:

```
git push
```

## Recibir datos desde el repositorio remoto

Si trabajamos con dos computadores o utilizamos algún sistema en la nube, y queremos actualizar los archivos de nuestro repositorio local con lo que está en el repositorio remoto, debemos utilizar el comando pull:

```
git pull
```

Esto descargará los datos que se encuentran en el repositorio remoto en nuestra área local.

## Problemas comunes

Si es la primera vez que usamos Git, nos va a solicitar identificarnos y almacenar esa identificación en la configuración. Para esto, deben ejecutar los siguientes comandos, reemplazando los datos que se encuentran encerrados entre comillas por sus datos.

```
git config --global user.email "micorreo@uandresbello.edu"
git config --global user.name "matgreco"
```
