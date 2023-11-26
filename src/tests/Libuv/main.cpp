
#include "uv.h"


void on_new_connection(uv_stream_t *server, int status)
{

}
int main()
{
	auto loop = uv_default_loop();

	uv_tcp_t server;
	uv_tcp_init(loop, &server);

	sockaddr_in addr{};
	uv_ip4_addr("0.0.0.0", 9191, &addr);

	uv_tcp_bind(&server, (const struct sockaddr*)&addr, 0);
	int err = uv_listen((uv_stream_t*)&server, 128, on_new_connection);

	if(err)
	{
		fprintf(stderr, "listen error %s \n", uv_strerror(err));
		return 1;
	}

	return uv_run(loop, UV_RUN_DEFAULT);
}