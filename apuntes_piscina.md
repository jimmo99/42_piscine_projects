#myGIT
git clone git@vogsphere.42urduliz.com:vogsphere/intra-uuid-d5e0fe44-331f-466d-994c-51899bba6a27-7502975-ssaavedr

#ir directo a la home
cd ~

#git
git init
git add .
git commit -m "nombre"
git push
git pull

#mas de git
git log
git status
git ls-tree -r --name-only origin

#para cambiar tiempo a archivo
touch -t 202606012343 test4 

#para cambiar tiempo a enlace simbolico
touch -ht 202606012343 test4 

#cambiar peso de archivo
truncate -s 3 test4

#comprimir y descomprimir tar
tar -cf exo2.tar
tar xvf exo2.tar

#sacar clave publica
cat ~/.ssh/id_rsa.pub

###MAIN
	*/#include <stdio.h>*/

	int	ft_str_is_alpha(char *str)

	/*int	main(void)
	{
		int value;
		value = ft_str_is_alpha("4");
		printf("%d", value);
			return 0;
	}*/
	
#Comprobar errores
norminette
gcc -Wextra -Werror - Wall archivo.c

