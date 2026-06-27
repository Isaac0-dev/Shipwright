#include <cstdint>
#include <cstddef>

extern "C" {

// POSIX stubs for CafeOS (no process management on Wii U)
int waitpid(int, int*, int) { return -1; }
int pipe(int[2]) { return -1; }
int execvp(const char*, char* const*) { return -1; }

// SDL_net stubs (not available on CafeOS)
int SDLNet_Init() { return 0; }
void SDLNet_Quit() {}
void* SDLNet_ResolveHost(void*, const char*, unsigned short) { return (void*)1; }
const char* SDLNet_GetError() { return "stub"; }
int SDLNet_TCP_Send(void*, const void*, int) { return 0; }
void* SDLNet_TCP_Open(void*) { return (void*)1; }
void* SDLNet_AllocSocketSet(int) { return (void*)1; }
int SDLNet_AddSocket(void*, void*) { return 0; }
int SDLNet_CheckSockets(void*, int) { return 0; }
int SDLNet_TCP_Recv(void*, void*, int) { return 0; }
void SDLNet_FreeSocketSet(void*) {}
void SDLNet_TCP_Close(void*) {}

// Ogg stubs (not available on CafeOS)
int ogg_sync_init(void*) { return 0; }
void* ogg_sync_buffer(void*, int) { return (void*)1; }
int ogg_sync_wrote(void*, int) { return 0; }
int ogg_sync_pageout(void*, void*) { return 0; }
int ogg_page_serialno(void*) { return 0; }
int ogg_stream_init(void*, int) { return 0; }
int ogg_stream_pagein(void*, void*) { return 0; }
int ogg_stream_packetout(void*, void*) { return 0; }
int ogg_stream_clear(void*) { return 0; }
int ogg_sync_clear(void*) { return 0; }

// Vorbisfile stubs
int ov_open_callbacks(void*, void*, void*, int, void*) { return -1; }
void* ov_info(void*, int) { return (void*)1; }
int ov_pcm_total(void*, int) { return 0; }
int ov_read(void*, void*, int, int, int, int, int*) { return 0; }
int ov_clear(void*) { return 0; }

// Opus decoder stubs (callers in C code still need symbols)
void aOPUSFree(void*) {}
void aOPUSdecImpl(void*, unsigned short, unsigned short, void**, int, unsigned int) {}

// zapd (ZAPD tool) stub
void zapd_report(const char*, ...) {}

}