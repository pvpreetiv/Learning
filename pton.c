// Helper function you can use:

//Convert a struct sockaddr address to a string, IPv4 and IPv6:

#include <netinet/in.h>
#include <stdio.h>

char *get_ip_str(const struct sockaddr *sa, char *s, size_t maxlen)
{
    switch(sa->sa_family) {
        case AF_INET:
            inet_ntop(AF_INET, &(((struct sockaddr_in *)sa)->sin_addr),
                    s, maxlen);
            break;

        case AF_INET6:
            inet_ntop(AF_INET6, &(((struct sockaddr_in6 *)sa)->sin6_addr),
                    s, maxlen);
            break;

        default:
            strncpy(s, "Unknown AF", maxlen);
            return NULL;
    }

    return s;
}


void main()
{
	int ret;
int i;
	u_int8_t ip_data[16] = { 0 };
	char* pkt_data = "10.199.16.13";
	int addr_type =0;

			if(addr_type == 0) {
				ret = inet_pton(AF_INET, pkt_data, ip_data);
				if (!ret)
					printf("inet_pton(ipv4): ip add not valid");
				else if (ret == -1)
					printf("inet_pton(ipv4): AF not valid");
			}
			else if(addr_type == 1) {
				ret = inet_pton(AF_INET6, pkt_data, ip_data);
				if (!ret)
					printf("inet_pton(ipv6): ip add not valid");
				else if (ret == -1)
					printf("inet_pton(ipv6): AF not valid");
			}

			for (i=0; i<4; i++)
			printf("address converted 0x%x\n", ip_data[i]);
	

}
