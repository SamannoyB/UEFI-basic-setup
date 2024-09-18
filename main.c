#include <efi.h>
#include <efilib.h>

EFI_STATUS
EFIAPI
efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
   InitializeLib(ImageHandle, SystemTable);
   Print(L"Hello, world!\n");
   
   Print(L"Press any key to continue...\n");
   
   WaitForSingleEvent(SystemTable->ConIn->WaitForKey, 0);
   return EFI_SUCCESS;
}
