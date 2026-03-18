#define _AMD64_
#include <wdm.h>

s
NTSTATUS DriverEntry(void *a, void *b){
    DbgPrint("Hello from driver!");
    return STATUS_SUCCESS;
}