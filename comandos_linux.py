comandos = {
    "pwd": "mostra o diretorio atual",
    "ls": "lista o conteudo de um diretorio",
    "cat": "mostra o conteudo de um arquivo",
    "chmod": "muda as permissões do arquivo",
    "mkdir": "cria uma pasta",
    "rmdir": "remove uma pasta",
    "rm": "remove um arquivo",
    "head": "mostra as primeiras linhas de um arquivo: head -5 ex.txt",
}

def pesquisar_comando(a):
    for k, v in comandos.items():
        if k == a:
            print(v + "\n")

while True:
    
    pesquisa = str(input("Pesquise um comando ou 'quit' para sair: "))

    if pesquisa.lower() == "quit":
        exit()
    else:
        pesquisar_comando(pesquisa)
