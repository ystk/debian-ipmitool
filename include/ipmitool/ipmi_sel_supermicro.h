/*
 * Copyright (c) 2003 Sun Microsystems, Inc.  All Rights Reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * Redistribution of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * Redistribution in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of Sun Microsystems, Inc. or the names of
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * 
 * This software is provided "AS IS," without a warranty of any kind.
 * ALL EXPRESS OR IMPLIED CONDITIONS, REPRESENTATIONS AND WARRANTIES,
 * INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE OR NON-INFRINGEMENT, ARE HEREBY EXCLUDED.
 * SUN MICROSYSTEMS, INC. ("SUN") AND ITS LICENSORS SHALL NOT BE LIABLE
 * FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING, MODIFYING
 * OR DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.  IN NO EVENT WILL
 * SUN OR ITS LICENSORS BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA,
 * OR FOR DIRECT, INDIRECT, SPECIAL, CONSEQUENTIAL, INCIDENTAL OR
 * PUNITIVE DAMAGES, HOWEVER CAUSED AND REGARDLESS OF THE THEORY OF
 * LIABILITY, ARISING OUT OF THE USE OF OR INABILITY TO USE THIS SOFTWARE,
 * EVEN IF SUN HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 */


#ifndef IPMI_SEL_SUPERMICRO_H
# define IPMI_SEL_SUPERMICRO_H

static uint16_t supermicro_x9dal[] = {
		0x0635, 0xFFFF
};

static uint16_t supermicro_x9db[] = {
		0x0733, 0x0722, 0x0703, 0x0721, 0x0716, 0x0637, 0xFFFF
};

static uint16_t supermicro_x9sb[] = {
		0x0651, 0xFFFF
};

static uint16_t supermicro_x9[] = {
		0x0635, 0x0733, 0x0722, 0x0703, 0x0721, 0x0716, 0x0637, 0x0651, 0xFFFF
};

static uint16_t supermicro_b8[] = {
		0x000A, 0x061c, 0x0620, 0x0101, 0x061f, 0x0612, 0x061e, 0xFFFF
};

static uint16_t supermicro_h8[] = {
		0xa111, 0x0408, 0x0811, 0x1411, 0x0911, 0x1211, 0x1011, 0xcd11, 0x1111, 0xbe11, 0xce11, 0xbd11,
		0xbc11, 0xa911, 0xaa11, 0xbd11, 0xcb11, 0xad11, 0xa811, 0xac11, 0xaf11, 0xa511, 0xa011, 0x1611,
		0x2511, 0xbf11, 0x1511, 0x2211, 0x2411, 0x1911, 0xab11, 0xd011, 0xae11, 0xca11, 0x0409, 0xa211,
		0xa311, 0x1311, 0xba11, 0xa711, 0xd111, 0x1711, 0xcf11, 0x2011, 0x1811, 0xFFFF
};

static uint16_t supermicro_p8[] = {
		0x6480, 0x7380, 0x6280, 0x7480, 0x5980, 0xFFFF
};

static uint16_t supermicro_x8[] = {
		0xa880, 0x0403, 0x0100, 0x0601, 0x0001, 0x0404, 0x0606, 0x0608, 0x0632, 0x0400, 0x0401, 0x0006,
		0x040a, 0xf280, 0x060f, 0x0609, 0x0008, 0x0613, 0x061b, 0x0007, 0x0600, 0x060c, 0x060d, 0x0614,
		0x060c, 0x0003, 0x040b, 0x0621, 0x0610, 0x0638, 0xf380, 0x060b, 0x040d, 0x0605, 0x062d, 0x060e,
		0x061a, 0xf580, 0x062e, 0x0009, 0xFFFF
};

static uint16_t supermicro_X8[] = {
		0x000A, 0x061c, 0x0620, 0x0101, 0x061f, 0x0612, 0x061e, 0xa111, 0x0408, 0x0811, 0x1411, 0x0911,
		0x1211, 0x1011, 0xcd11, 0x1111, 0xbe11, 0xce11, 0xbd11, 0xbc11, 0xa911, 0xaa11, 0xbd11, 0xcb11,
		0xad11, 0xa811, 0xac11, 0xaf11, 0xa511, 0xa011, 0x1611, 0x2511, 0xbf11, 0x1511, 0x2211, 0x2411,
		0x1911, 0xab11, 0xd011, 0xae11, 0xca11, 0x0409, 0xa211, 0xa311, 0x1311, 0xba11, 0xa711, 0xd111,
		0x1711, 0xcf11, 0x2011, 0x1811, 0x6480, 0x7380, 0x6280, 0x7480, 0x5980, 0xa880, 0x0403, 0x0100,
		0x0601, 0x0001, 0x0404, 0x0606, 0x0608, 0x0632, 0x0400, 0x0401, 0x0006, 0x040a, 0xf280, 0x060f,
		0x0609, 0x0008, 0x0613, 0x061b, 0x0007, 0x0600, 0x060c, 0x060d, 0x0614, 0x060c, 0x0003, 0x040b,
		0x0621, 0x0610, 0x0638, 0xf380, 0x060b, 0x040d, 0x0605, 0x062d, 0x060e, 0x061a, 0xf580, 0x062e,
		0x0009, 0xFFFF
};

#endif /* IPMI_SEL_SUPERMICRO_H */
