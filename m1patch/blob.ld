ENTRY(odd_key_new)
SECTIONS {
  . = 0x880000;
  .blob : {
    *(.text.entry)
    *(.text .text.*)
    *(.rodata .rodata.*)
    *(.data .data.*)
    *(.bss .bss.* COMMON)
    BYTE(0)
  }
  /DISCARD/ : { *(.comment) *(.note*) *(.eh_frame*) }
}
