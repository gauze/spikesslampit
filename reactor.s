;;; gcc built Mar 10 1999 21:45:36
;;; MC6809 $Revision: 1.7a $
;;; OPTIONS:	 -mshort_int -mlong_branch
;;; OPTIONS:	 signed-char
;;; Source:	reactor.c
;;; Destination:	reactor.s
;;; Compiled:	Wed Jan  2 14:05:58 2002
;;; (META)compiled by GNU C version 2.8.1.
	.module	reactor.c
gcc2_compiled.:
___gnu_compiled_c:
	; extern	_intro
	; extern	_pit
	; extern	_intensity
	; extern	_print_str
	.area __code
LC0:
	.ascii "SPIKE'S SLAM PIT"
	.byte 	0H80
	.globl _main
_main:
;;;-----------------------------------------
;;;  PROLOGUE for main
;;;-----------------------------------------
	pshs	x,y,u	;save registers
;;;END PROLOGUE
	jsr	___main	;CALL: (VOIDmode) ___main (0 bytes)
	jsr	_intro	;CALL: (VOIDmode) _intro (0 bytes)
L2:
	jsr	_pit	;CALL: (VOIDmode) _pit (0 bytes)
L4:
	jmp	L2
L3:
	clra		;movhi: ZERO -> R:d
	clrb
	jmp	L1
	ldx	#0	;movhi: #0 -> R:x
	jsr	_intensity	;CALL: R:d = _intensity (0 bytes)
	ldd	#LC0	;movhi: #LC0 -> R:d
	ldu	#0	;movhi: #0 -> R:u
	ldx	#0	;movhi: #0 -> R:x
	jsr	_print_str	;CALL: R:d = _print_str (0 bytes)
L1:
;;;EPILOGUE
	puls	x,y,u,pc	;restore registers
	rts		; return from function
;;;-----------------------------------------
;;; END EPILOGUE for main
;;;-----------------------------------------
	; extern	_wait_recal
	; extern	_intensity
	; extern	_set_scale
	; extern	_draw_vector_list
	.globl _pit
_pit:
;;;-----------------------------------------
;;;  PROLOGUE for pit
;;;-----------------------------------------
	pshs	x,y	;save registers
;;;END PROLOGUE
	jsr	_wait_recal	;CALL: R:d = _wait_recal (0 bytes)
	ldx	#0	;movhi: #0 -> R:x
	jsr	_intensity	;CALL: R:d = _intensity (0 bytes)
	ldx	#0	;movhi: #0 -> R:x
	jsr	_set_scale	;CALL: R:d = _set_scale (0 bytes)
	ldx	#0	;movhi: #0 -> R:x
	jsr	_draw_vector_list	;CALL: R:d = _draw_vector_list (0 bytes)
L5:
;;;EPILOGUE
	puls	x,y,pc	;restore registers
	rts		; return from function
;;;-----------------------------------------
;;; END EPILOGUE for pit
;;;-----------------------------------------
