#pragma once

BOOL is_pe(
    IN HMODULE hLibrary);

BOOL is_dll(
    IN HMODULE hLibrary);

VOID store_loaded_dll(
    IN PLOADED_PE_INFO peinfo,
    IN HMODULE dll,
    IN PCHAR name);

HANDLE get_console_handle(VOID);

VOID set_console_handle(
	IN HANDLE hConsoleHandle);

HANDLE get_std_out_handle(VOID);

VOID set_std_out_handle(
	IN HANDLE hStdOutErr);

HANDLE get_std_err_handle(VOID);

VOID set_std_err_handle(
	IN HANDLE hStdOutErr);

HANDLE get_std_in_handle(VOID);

BOOL create_thread(
    OUT PHANDLE hThread);

BOOL read_local_pe(
    IN LPCTSTR path,
    OUT PVOID* data,
    OUT int* pelen);
