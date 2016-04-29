#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <stdlib.h>

void main() {

	key_t key;
	pid_t pid;
	int shmid;
	struct shmid_ds buff;

	printf("process id : %d\n", getpid());
	
	shmid = shmget(key, 200, IPC_CREAT | IPC_EXCL);
	printf("shmid :%d \n", shmid);

	shmctl(shmid, IPC_STAT, &buff);
	
	printf("key : %d \n", buff.shm_perm.__key);
	printf("uid : %d \n", buff.shm_perm.uid);
	printf("gid : %d \n", buff.shm_perm.gid);
	printf("cuid : %d \n", buff.shm_perm.cuid);
	printf("cgid : %d \n", buff.shm_perm.cgid);
	printf("mode : %d \n", buff.shm_perm.mode);
	printf("seq no : %d \n", buff.shm_perm.__seq);

	printf("segment size : %d \n", buff.shm_segsz);
	printf("last attach time : %d \n", buff.shm_atime);
	printf("last detach time : %d \n", buff.shm_dtime);
	printf("last change time : %d \n", buff.shm_ctime);
	printf("creator pid : %d \n", buff.shm_cpid);
	printf("pid of last shmdt /shmat : %d \n", buff.shm_lpid);
	printf("no of current attaches : %d \n", buff.shm_nattch);

}
