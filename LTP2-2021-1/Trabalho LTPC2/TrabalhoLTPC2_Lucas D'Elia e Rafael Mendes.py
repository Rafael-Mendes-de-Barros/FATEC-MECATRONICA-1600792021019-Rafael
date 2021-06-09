import random
import string
import cherrypy

class StringGenerator(object):
    @cherrypy.expose
    def index(self):
        return """        
        <!DOCTYPE html>        
        <html>          
            <head>            
                <meta charset="utf-8">
                <meta name="viewport" content="width=device-width, initial-scale=1">            
                <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bulma@0.9.2/css/bulma.min.css">            
                <title>Minha Página WEB com Python</title>          
            </head>          
            <body>            
                <h1>Animômetro - Lucas D'Elia e Rafael Mendes:</h1>            
                <iframe width="560" height="315" src="https://www.youtube.com/watch?v=VgDgWzBL7s4" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>            
                <p>Informe seu anime e suas informações:</p>            
                <form method="get" action="obrigado">                
                    <input class="input" type="text" placeholder="Anime:" name="anime"><br><br>                
                    <input class="input is-rounded" type="text" placeholder="Tempo do episódio(min):" name="temp"><br><br>
                    <input class="input" type="text" placeholder="Quantos episódios por temporada:" name="tempo"><br><br>
                    <input class="input" type="text" placeholder="Quantas temporadas:" name="tempor"><br><br>
                    <input class="input" type="text" placeholder="Quanto tempo livre você tem por dia:" name="livre"><br><br>                
                    <button class="button is-info is-rounded" type="submit">KATSU! (Começar)</button>            
                </form>          
            </body>        
        </html>"""

    @cherrypy.expose
    def generate(self, length=8):
        return ''.join(random.sample(string.hexdigits, int(length)))

    @cherrypy.expose
    def dados():
        anime = int(input("Informe o anime:"))
        temp = int(input("Quanto tempo tem cada episódio?Em minutos"))
        tempo = int(input("Quantos episódios tem as temporadas?"))
        tempor = int(input("Quantas temporadas tem o anime?"))
        livre = int(input("Quanto tempo livre você tem por dia?Em minutos"))

    @cherrypy.expose
    def tempos_finais():
        result1 = temp/livre
        result2 = temp*tempo/livre
        result3 = temp*tempo*tempor/livre


    @cherrypy.expose
    def obrigado(self, nome, opiniao):
        nome = nome.upper()
        opiniao = opiniao.upper()
        return f"""<html>          
            <head></head>          
            <body>            
                <h1>Bom anime e boa maratona!</h1>                        
                <p>O anime {anime} é sensacional, bom gosto</p>            
                <p>Você consegue assistir {result1} episódios por dia</p>   
                <p>Você consegue assistir a temporada em {result2} dias </p>
                <p>Você consegue terminar o anime em {result3} dias </p>          
                <img src="https://i.pinimg.com/564x/7b/ec/02/7bec02d8d637bf46cefd2f979b3c0733.jpg">
            <head>
                <img src="https://pbs.twimg.com/media/EBdxrm-W4AA6-TL.jpg">                       
                <a href="http://localhost:8080">Voltar</a>          
            </body>        
        </html>"""


if __name__ == '__main__':
    cherrypy.quickstart(StringGenerator())
