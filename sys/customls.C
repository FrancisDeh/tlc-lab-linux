#include<iostream>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<pwd.h>
#include<grp.h>

//void displayFileDetails(auto, struct stat);
int main(int argc, char *argv[]) {
	
	struct stat sbuf;
	struct group *gp;
	struct passwd *pw;

	if(stat(argv[1], &sbuf) < 0) {
		perror(argv[1]);
		exit(EXIT_FAILURE);		
	}

	//check if the second option is -l then do long listing else do normal display of file
	//if(argv[1] == '-l') {
	
	//} else {
	
	//}
	 
	//get the user and group details
	pw = getpwuid(sbuf.st_uid);
	gp = getgrgid(sbuf.st_gid);
	
	if(S_ISREG(sbuf.st_mode)) {
			std::cout <<"- " ; 
			}
			else {
			std::cout << "d ";
			}

	std::cout << pw->pw_name << " " << gp->gr_name << " " << sbuf.st_size <<" ";
	std::cout << sbuf.st_mtime << " " << argv[1] << std::endl;


}

