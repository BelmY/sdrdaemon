///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2016 F4EXB                                                      //
// written by Edouard Griffiths                                                  //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////


#include "HBFilterTraits.h"

const int16_t HBFIRFilterTraits<16>::hbMod[16+6] = {
        15,16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,0,1,2
};

const int32_t HBFIRFilterTraits<16>::hbCoeffs[4] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0052391810630145274965685509016566356877 * (1 << hbShift)),
        (int32_t)( 0.0232111017863650750947535073009930783883 * (1 << hbShift)),
        (int32_t)(-0.0761058457486735451258397233686991967261 * (1 << hbShift)),
        (int32_t)( 0.3076987787367443383246268240327481180429 * (1 << hbShift)),
};

const int32_t HBFIRFilterTraits<16>::hbCoeffsX4[16] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0052391810630145274965685509016566356877 * (1 << hbShift)),
        (int32_t)(-0.0052391810630145274965685509016566356877 * (1 << hbShift)),
        (int32_t)(-0.0052391810630145274965685509016566356877 * (1 << hbShift)),
        (int32_t)(-0.0052391810630145274965685509016566356877 * (1 << hbShift)),

        (int32_t)( 0.0232111017863650750947535073009930783883 * (1 << hbShift)),
        (int32_t)( 0.0232111017863650750947535073009930783883 * (1 << hbShift)),
        (int32_t)( 0.0232111017863650750947535073009930783883 * (1 << hbShift)),
        (int32_t)( 0.0232111017863650750947535073009930783883 * (1 << hbShift)),

        (int32_t)(-0.0761058457486735451258397233686991967261 * (1 << hbShift)),
        (int32_t)(-0.0761058457486735451258397233686991967261 * (1 << hbShift)),
        (int32_t)(-0.0761058457486735451258397233686991967261 * (1 << hbShift)),
        (int32_t)(-0.0761058457486735451258397233686991967261 * (1 << hbShift)),

        (int32_t)( 0.3076987787367443383246268240327481180429 * (1 << hbShift)),
        (int32_t)( 0.3076987787367443383246268240327481180429 * (1 << hbShift)),
        (int32_t)( 0.3076987787367443383246268240327481180429 * (1 << hbShift)),
        (int32_t)( 0.3076987787367443383246268240327481180429 * (1 << hbShift)),
};

const int16_t HBFIRFilterTraits<32>::hbMod[32+6] = {
        31,32,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19, 20,21,22,
        23,24,25,26,27,28,29,30,31,32,0,1,2
};


const int32_t HBFIRFilterTraits<32>::hbCoeffs[8] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0018878783958199373254477348993418672762 * (1 << hbShift)),
        (int32_t)( 0.0038624783041994003966734805288751886110 * (1 << hbShift)),
        (int32_t)(-0.0082424665965482504098593707908548822161 * (1 << hbShift)),
        (int32_t)( 0.0159471139705940345709933581019868142903 * (1 << hbShift)),
        (int32_t)(-0.0286765592339759019246958615667608682998 * (1 << hbShift)),
        (int32_t)( 0.0507185615622293764492845014046906726435 * (1 << hbShift)),
        (int32_t)(-0.0980159074728618323613105189906491432339 * (1 << hbShift)),
        (int32_t)( 0.3159417644358786247948955860920250415802 * (1 << hbShift)),
};

const int32_t HBFIRFilterTraits<32>::hbCoeffsX4[32] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0018878783958199373254477348993418672762 * (1 << hbShift)),
        (int32_t)(-0.0018878783958199373254477348993418672762 * (1 << hbShift)),
        (int32_t)(-0.0018878783958199373254477348993418672762 * (1 << hbShift)),
        (int32_t)(-0.0018878783958199373254477348993418672762 * (1 << hbShift)),

        (int32_t)( 0.0038624783041994003966734805288751886110 * (1 << hbShift)),
        (int32_t)( 0.0038624783041994003966734805288751886110 * (1 << hbShift)),
        (int32_t)( 0.0038624783041994003966734805288751886110 * (1 << hbShift)),
        (int32_t)( 0.0038624783041994003966734805288751886110 * (1 << hbShift)),

        (int32_t)(-0.0082424665965482504098593707908548822161 * (1 << hbShift)),
        (int32_t)(-0.0082424665965482504098593707908548822161 * (1 << hbShift)),
        (int32_t)(-0.0082424665965482504098593707908548822161 * (1 << hbShift)),
        (int32_t)(-0.0082424665965482504098593707908548822161 * (1 << hbShift)),

        (int32_t)( 0.0159471139705940345709933581019868142903 * (1 << hbShift)),
        (int32_t)( 0.0159471139705940345709933581019868142903 * (1 << hbShift)),
        (int32_t)( 0.0159471139705940345709933581019868142903 * (1 << hbShift)),
        (int32_t)( 0.0159471139705940345709933581019868142903 * (1 << hbShift)),

        (int32_t)(-0.0286765592339759019246958615667608682998 * (1 << hbShift)),
        (int32_t)(-0.0286765592339759019246958615667608682998 * (1 << hbShift)),
        (int32_t)(-0.0286765592339759019246958615667608682998 * (1 << hbShift)),
        (int32_t)(-0.0286765592339759019246958615667608682998 * (1 << hbShift)),

        (int32_t)( 0.0507185615622293764492845014046906726435 * (1 << hbShift)),
        (int32_t)( 0.0507185615622293764492845014046906726435 * (1 << hbShift)),
        (int32_t)( 0.0507185615622293764492845014046906726435 * (1 << hbShift)),
        (int32_t)( 0.0507185615622293764492845014046906726435 * (1 << hbShift)),

        (int32_t)(-0.0980159074728618323613105189906491432339 * (1 << hbShift)),
        (int32_t)(-0.0980159074728618323613105189906491432339 * (1 << hbShift)),
        (int32_t)(-0.0980159074728618323613105189906491432339 * (1 << hbShift)),
        (int32_t)(-0.0980159074728618323613105189906491432339 * (1 << hbShift)),

        (int32_t)( 0.3159417644358786247948955860920250415802 * (1 << hbShift)),
        (int32_t)( 0.3159417644358786247948955860920250415802 * (1 << hbShift)),
        (int32_t)( 0.3159417644358786247948955860920250415802 * (1 << hbShift)),
        (int32_t)( 0.3159417644358786247948955860920250415802 * (1 << hbShift)),
};

const int16_t HBFIRFilterTraits<48>::hbMod[48+6] = {
        47,48,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,0,1,2
};


const int32_t HBFIRFilterTraits<48>::hbCoeffs[12] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0011627994808655962074434020436797254661 * (1 << hbShift)),
        (int32_t)( 0.0017451165792459334517860991553561689216 * (1 << hbShift)),
        (int32_t)(-0.0029357205890606303047563052643909031758 * (1 << hbShift)),
        (int32_t)( 0.0048726090910227891003780875678330630763 * (1 << hbShift)),
        (int32_t)(-0.0077313759655872928144848543752232217230 * (1 << hbShift)),
        (int32_t)( 0.0117637971494846688830238079503942572046 * (1 << hbShift)),
        (int32_t)(-0.0173810771817523163074170611253066454083 * (1 << hbShift)),
        (int32_t)( 0.0253500636065296450216699497559602605179 * (1 << hbShift)),
        (int32_t)(-0.0373266939135983855102551842719549313188 * (1 << hbShift)),
        (int32_t)( 0.0576685041500848358242414803953579394147 * (1 << hbShift)),
        (int32_t)(-0.1024912545928038654086122960507054813206 * (1 << hbShift)),
        (int32_t)( 0.3173768238826674692454332671331940218806 * (1 << hbShift)),
};

const int32_t HBFIRFilterTraits<48>::hbCoeffsX4[48] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0011627994808655962074434020436797254661 * (1 << hbShift)),
        (int32_t)(-0.0011627994808655962074434020436797254661 * (1 << hbShift)),
        (int32_t)(-0.0011627994808655962074434020436797254661 * (1 << hbShift)),
        (int32_t)(-0.0011627994808655962074434020436797254661 * (1 << hbShift)),

        (int32_t)( 0.0017451165792459334517860991553561689216 * (1 << hbShift)),
        (int32_t)( 0.0017451165792459334517860991553561689216 * (1 << hbShift)),
        (int32_t)( 0.0017451165792459334517860991553561689216 * (1 << hbShift)),
        (int32_t)( 0.0017451165792459334517860991553561689216 * (1 << hbShift)),

        (int32_t)(-0.0029357205890606303047563052643909031758 * (1 << hbShift)),
        (int32_t)(-0.0029357205890606303047563052643909031758 * (1 << hbShift)),
        (int32_t)(-0.0029357205890606303047563052643909031758 * (1 << hbShift)),
        (int32_t)(-0.0029357205890606303047563052643909031758 * (1 << hbShift)),

        (int32_t)( 0.0048726090910227891003780875678330630763 * (1 << hbShift)),
        (int32_t)( 0.0048726090910227891003780875678330630763 * (1 << hbShift)),
        (int32_t)( 0.0048726090910227891003780875678330630763 * (1 << hbShift)),
        (int32_t)( 0.0048726090910227891003780875678330630763 * (1 << hbShift)),

        (int32_t)(-0.0077313759655872928144848543752232217230 * (1 << hbShift)),
        (int32_t)(-0.0077313759655872928144848543752232217230 * (1 << hbShift)),
        (int32_t)(-0.0077313759655872928144848543752232217230 * (1 << hbShift)),
        (int32_t)(-0.0077313759655872928144848543752232217230 * (1 << hbShift)),

        (int32_t)( 0.0117637971494846688830238079503942572046 * (1 << hbShift)),
        (int32_t)( 0.0117637971494846688830238079503942572046 * (1 << hbShift)),
        (int32_t)( 0.0117637971494846688830238079503942572046 * (1 << hbShift)),
        (int32_t)( 0.0117637971494846688830238079503942572046 * (1 << hbShift)),

        (int32_t)(-0.0173810771817523163074170611253066454083 * (1 << hbShift)),
        (int32_t)(-0.0173810771817523163074170611253066454083 * (1 << hbShift)),
        (int32_t)(-0.0173810771817523163074170611253066454083 * (1 << hbShift)),
        (int32_t)(-0.0173810771817523163074170611253066454083 * (1 << hbShift)),

        (int32_t)( 0.0253500636065296450216699497559602605179 * (1 << hbShift)),
        (int32_t)( 0.0253500636065296450216699497559602605179 * (1 << hbShift)),
        (int32_t)( 0.0253500636065296450216699497559602605179 * (1 << hbShift)),
        (int32_t)( 0.0253500636065296450216699497559602605179 * (1 << hbShift)),

        (int32_t)(-0.0373266939135983855102551842719549313188 * (1 << hbShift)),
        (int32_t)(-0.0373266939135983855102551842719549313188 * (1 << hbShift)),
        (int32_t)(-0.0373266939135983855102551842719549313188 * (1 << hbShift)),
        (int32_t)(-0.0373266939135983855102551842719549313188 * (1 << hbShift)),

        (int32_t)( 0.0576685041500848358242414803953579394147 * (1 << hbShift)),
        (int32_t)( 0.0576685041500848358242414803953579394147 * (1 << hbShift)),
        (int32_t)( 0.0576685041500848358242414803953579394147 * (1 << hbShift)),
        (int32_t)( 0.0576685041500848358242414803953579394147 * (1 << hbShift)),

        (int32_t)(-0.1024912545928038654086122960507054813206 * (1 << hbShift)),
        (int32_t)(-0.1024912545928038654086122960507054813206 * (1 << hbShift)),
        (int32_t)(-0.1024912545928038654086122960507054813206 * (1 << hbShift)),
        (int32_t)(-0.1024912545928038654086122960507054813206 * (1 << hbShift)),

        (int32_t)( 0.3173768238826674692454332671331940218806 * (1 << hbShift)),
        (int32_t)( 0.3173768238826674692454332671331940218806 * (1 << hbShift)),
        (int32_t)( 0.3173768238826674692454332671331940218806 * (1 << hbShift)),
        (int32_t)( 0.3173768238826674692454332671331940218806 * (1 << hbShift)),
};

const int16_t HBFIRFilterTraits<64>::hbMod[64+6] = {
        63,64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,0,1,2
};


const int32_t HBFIRFilterTraits<64>::hbCoeffs[16] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0004653050334792540416659067936677729449 * (1 << hbShift)),
        (int32_t)( 0.0007120490624526883919470643391491648799 * (1 << hbShift)),
        (int32_t)(-0.0012303473710125558716887983479182366864 * (1 << hbShift)),
        (int32_t)( 0.0019716520179919017584369012041634050547 * (1 << hbShift)),
        (int32_t)(-0.0029947484165425580261710170049127555103 * (1 << hbShift)),
        (int32_t)( 0.0043703902150498061263128590780979720876 * (1 << hbShift)),
        (int32_t)(-0.0061858352927315653213558022116558277048 * (1 << hbShift)),
        (int32_t)( 0.0085554408639278121950777489246320328675 * (1 << hbShift)),
        (int32_t)(-0.0116397924445187355563247066925214312505 * (1 << hbShift)),
        (int32_t)( 0.0156852221106748394852115069397768820636 * (1 << hbShift)),
        (int32_t)(-0.0211070832238078286147153761476147337817 * (1 << hbShift)),
        (int32_t)( 0.0286850846890029896607554604770484729670 * (1 << hbShift)),
        (int32_t)(-0.0400956173930921908055147184768429724500 * (1 << hbShift)),
        (int32_t)( 0.0597215923200692666572564348825835622847 * (1 << hbShift)),
        (int32_t)(-0.1036982054813635201195864965484361164272 * (1 << hbShift)),
        (int32_t)( 0.3175014394028848885298543791577685624361 * (1 << hbShift)),
};

const int32_t HBFIRFilterTraits<64>::hbCoeffsX4[64] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0004653050334792540416659067936677729449 * (1 << hbShift)),
        (int32_t)(-0.0004653050334792540416659067936677729449 * (1 << hbShift)),
        (int32_t)(-0.0004653050334792540416659067936677729449 * (1 << hbShift)),
        (int32_t)(-0.0004653050334792540416659067936677729449 * (1 << hbShift)),

        (int32_t)( 0.0007120490624526883919470643391491648799 * (1 << hbShift)),
        (int32_t)( 0.0007120490624526883919470643391491648799 * (1 << hbShift)),
        (int32_t)( 0.0007120490624526883919470643391491648799 * (1 << hbShift)),
        (int32_t)( 0.0007120490624526883919470643391491648799 * (1 << hbShift)),

        (int32_t)(-0.0012303473710125558716887983479182366864 * (1 << hbShift)),
        (int32_t)(-0.0012303473710125558716887983479182366864 * (1 << hbShift)),
        (int32_t)(-0.0012303473710125558716887983479182366864 * (1 << hbShift)),
        (int32_t)(-0.0012303473710125558716887983479182366864 * (1 << hbShift)),

        (int32_t)( 0.0019716520179919017584369012041634050547 * (1 << hbShift)),
        (int32_t)( 0.0019716520179919017584369012041634050547 * (1 << hbShift)),
        (int32_t)( 0.0019716520179919017584369012041634050547 * (1 << hbShift)),
        (int32_t)( 0.0019716520179919017584369012041634050547 * (1 << hbShift)),

        (int32_t)(-0.0029947484165425580261710170049127555103 * (1 << hbShift)),
        (int32_t)(-0.0029947484165425580261710170049127555103 * (1 << hbShift)),
        (int32_t)(-0.0029947484165425580261710170049127555103 * (1 << hbShift)),
        (int32_t)(-0.0029947484165425580261710170049127555103 * (1 << hbShift)),

        (int32_t)( 0.0043703902150498061263128590780979720876 * (1 << hbShift)),
        (int32_t)( 0.0043703902150498061263128590780979720876 * (1 << hbShift)),
        (int32_t)( 0.0043703902150498061263128590780979720876 * (1 << hbShift)),
        (int32_t)( 0.0043703902150498061263128590780979720876 * (1 << hbShift)),

        (int32_t)(-0.0061858352927315653213558022116558277048 * (1 << hbShift)),
        (int32_t)(-0.0061858352927315653213558022116558277048 * (1 << hbShift)),
        (int32_t)(-0.0061858352927315653213558022116558277048 * (1 << hbShift)),
        (int32_t)(-0.0061858352927315653213558022116558277048 * (1 << hbShift)),

        (int32_t)( 0.0085554408639278121950777489246320328675 * (1 << hbShift)),
        (int32_t)( 0.0085554408639278121950777489246320328675 * (1 << hbShift)),
        (int32_t)( 0.0085554408639278121950777489246320328675 * (1 << hbShift)),
        (int32_t)( 0.0085554408639278121950777489246320328675 * (1 << hbShift)),

        (int32_t)(-0.0116397924445187355563247066925214312505 * (1 << hbShift)),
        (int32_t)(-0.0116397924445187355563247066925214312505 * (1 << hbShift)),
        (int32_t)(-0.0116397924445187355563247066925214312505 * (1 << hbShift)),
        (int32_t)(-0.0116397924445187355563247066925214312505 * (1 << hbShift)),

        (int32_t)( 0.0156852221106748394852115069397768820636 * (1 << hbShift)),
        (int32_t)( 0.0156852221106748394852115069397768820636 * (1 << hbShift)),
        (int32_t)( 0.0156852221106748394852115069397768820636 * (1 << hbShift)),
        (int32_t)( 0.0156852221106748394852115069397768820636 * (1 << hbShift)),

        (int32_t)(-0.0211070832238078286147153761476147337817 * (1 << hbShift)),
        (int32_t)(-0.0211070832238078286147153761476147337817 * (1 << hbShift)),
        (int32_t)(-0.0211070832238078286147153761476147337817 * (1 << hbShift)),
        (int32_t)(-0.0211070832238078286147153761476147337817 * (1 << hbShift)),

        (int32_t)( 0.0286850846890029896607554604770484729670 * (1 << hbShift)),
        (int32_t)( 0.0286850846890029896607554604770484729670 * (1 << hbShift)),
        (int32_t)( 0.0286850846890029896607554604770484729670 * (1 << hbShift)),
        (int32_t)( 0.0286850846890029896607554604770484729670 * (1 << hbShift)),

        (int32_t)(-0.0400956173930921908055147184768429724500 * (1 << hbShift)),
        (int32_t)(-0.0400956173930921908055147184768429724500 * (1 << hbShift)),
        (int32_t)(-0.0400956173930921908055147184768429724500 * (1 << hbShift)),
        (int32_t)(-0.0400956173930921908055147184768429724500 * (1 << hbShift)),

        (int32_t)( 0.0597215923200692666572564348825835622847 * (1 << hbShift)),
        (int32_t)( 0.0597215923200692666572564348825835622847 * (1 << hbShift)),
        (int32_t)( 0.0597215923200692666572564348825835622847 * (1 << hbShift)),
        (int32_t)( 0.0597215923200692666572564348825835622847 * (1 << hbShift)),

        (int32_t)(-0.1036982054813635201195864965484361164272 * (1 << hbShift)),
        (int32_t)(-0.1036982054813635201195864965484361164272 * (1 << hbShift)),
        (int32_t)(-0.1036982054813635201195864965484361164272 * (1 << hbShift)),
        (int32_t)(-0.1036982054813635201195864965484361164272 * (1 << hbShift)),

        (int32_t)( 0.3175014394028848885298543791577685624361 * (1 << hbShift)),
        (int32_t)( 0.3175014394028848885298543791577685624361 * (1 << hbShift)),
        (int32_t)( 0.3175014394028848885298543791577685624361 * (1 << hbShift)),
        (int32_t)( 0.3175014394028848885298543791577685624361 * (1 << hbShift)),
};

const int16_t HBFIRFilterTraits<80>::hbMod[80+6] = {
        79,80,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,
        70,71,72,73,74,75,76,77,78,79,80,0,1,2
};

const int32_t HBFIRFilterTraits<80>::hbCoeffs[20] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0001054430663706784843331246137587697831 * (1 << hbShift)),
        (int32_t)( 0.0001895717826405601933066613629108587702 * (1 << hbShift)),
        (int32_t)(-0.0003519516996893227891822497621632237497 * (1 << hbShift)),
        (int32_t)( 0.0005975111594421821190753485453228677216 * (1 << hbShift)),
        (int32_t)(-0.0009524124279789792160699768430731637636 * (1 << hbShift)),
        (int32_t)( 0.0014474605824692796454677967687985074008 * (1 << hbShift)),
        (int32_t)(-0.0021186428821101787461911314380813564640 * (1 << hbShift)),
        (int32_t)( 0.0030082068742630901220236339099756150972 * (1 << hbShift)),
        (int32_t)(-0.0041664004891296358909502650647027621744 * (1 << hbShift)),
        (int32_t)( 0.0056547140936428538088298623165428580251 * (1 << hbShift)),
        (int32_t)(-0.0075518323360079901707120342280177283101 * (1 << hbShift)),
        (int32_t)( 0.0099644038858163180155669280679830990266 * (1 << hbShift)),
        (int32_t)(-0.0130470841719700410971105597468522319105 * (1 << hbShift)),
        (int32_t)( 0.0170422818715445859028001507340377429500 * (1 << hbShift)),
        (int32_t)(-0.0223637819225956900603957677731159492396 * (1 << hbShift)),
        (int32_t)( 0.0297925991327811050257690084208661573939 * (1 << hbShift)),
        (int32_t)(-0.0410092859102263174175817539435229264200 * (1 << hbShift)),
        (int32_t)( 0.0604034694948822267757115866970707429573 * (1 << hbShift)),
        (int32_t)(-0.1041194584045879306666293473426776472479 * (1 << hbShift)),
        (int32_t)( 0.3176437752925042046214798574510496109724 * (1 << hbShift)),
};

const int32_t HBFIRFilterTraits<80>::hbCoeffsX4[80] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0001054430663706784843331246137587697831 * (1 << hbShift)),
        (int32_t)(-0.0001054430663706784843331246137587697831 * (1 << hbShift)),
        (int32_t)(-0.0001054430663706784843331246137587697831 * (1 << hbShift)),
        (int32_t)(-0.0001054430663706784843331246137587697831 * (1 << hbShift)),

        (int32_t)( 0.0001895717826405601933066613629108587702 * (1 << hbShift)),
        (int32_t)( 0.0001895717826405601933066613629108587702 * (1 << hbShift)),
        (int32_t)( 0.0001895717826405601933066613629108587702 * (1 << hbShift)),
        (int32_t)( 0.0001895717826405601933066613629108587702 * (1 << hbShift)),

        (int32_t)(-0.0003519516996893227891822497621632237497 * (1 << hbShift)),
        (int32_t)(-0.0003519516996893227891822497621632237497 * (1 << hbShift)),
        (int32_t)(-0.0003519516996893227891822497621632237497 * (1 << hbShift)),
        (int32_t)(-0.0003519516996893227891822497621632237497 * (1 << hbShift)),

        (int32_t)( 0.0005975111594421821190753485453228677216 * (1 << hbShift)),
        (int32_t)( 0.0005975111594421821190753485453228677216 * (1 << hbShift)),
        (int32_t)( 0.0005975111594421821190753485453228677216 * (1 << hbShift)),
        (int32_t)( 0.0005975111594421821190753485453228677216 * (1 << hbShift)),

        (int32_t)(-0.0009524124279789792160699768430731637636 * (1 << hbShift)),
        (int32_t)(-0.0009524124279789792160699768430731637636 * (1 << hbShift)),
        (int32_t)(-0.0009524124279789792160699768430731637636 * (1 << hbShift)),
        (int32_t)(-0.0009524124279789792160699768430731637636 * (1 << hbShift)),

        (int32_t)( 0.0014474605824692796454677967687985074008 * (1 << hbShift)),
        (int32_t)( 0.0014474605824692796454677967687985074008 * (1 << hbShift)),
        (int32_t)( 0.0014474605824692796454677967687985074008 * (1 << hbShift)),
        (int32_t)( 0.0014474605824692796454677967687985074008 * (1 << hbShift)),

        (int32_t)(-0.0021186428821101787461911314380813564640 * (1 << hbShift)),
        (int32_t)(-0.0021186428821101787461911314380813564640 * (1 << hbShift)),
        (int32_t)(-0.0021186428821101787461911314380813564640 * (1 << hbShift)),
        (int32_t)(-0.0021186428821101787461911314380813564640 * (1 << hbShift)),

        (int32_t)( 0.0030082068742630901220236339099756150972 * (1 << hbShift)),
        (int32_t)( 0.0030082068742630901220236339099756150972 * (1 << hbShift)),
        (int32_t)( 0.0030082068742630901220236339099756150972 * (1 << hbShift)),
        (int32_t)( 0.0030082068742630901220236339099756150972 * (1 << hbShift)),

        (int32_t)(-0.0041664004891296358909502650647027621744 * (1 << hbShift)),
        (int32_t)(-0.0041664004891296358909502650647027621744 * (1 << hbShift)),
        (int32_t)(-0.0041664004891296358909502650647027621744 * (1 << hbShift)),
        (int32_t)(-0.0041664004891296358909502650647027621744 * (1 << hbShift)),

        (int32_t)( 0.0056547140936428538088298623165428580251 * (1 << hbShift)),
        (int32_t)( 0.0056547140936428538088298623165428580251 * (1 << hbShift)),
        (int32_t)( 0.0056547140936428538088298623165428580251 * (1 << hbShift)),
        (int32_t)( 0.0056547140936428538088298623165428580251 * (1 << hbShift)),

        (int32_t)(-0.0075518323360079901707120342280177283101 * (1 << hbShift)),
        (int32_t)(-0.0075518323360079901707120342280177283101 * (1 << hbShift)),
        (int32_t)(-0.0075518323360079901707120342280177283101 * (1 << hbShift)),
        (int32_t)(-0.0075518323360079901707120342280177283101 * (1 << hbShift)),

        (int32_t)( 0.0099644038858163180155669280679830990266 * (1 << hbShift)),
        (int32_t)( 0.0099644038858163180155669280679830990266 * (1 << hbShift)),
        (int32_t)( 0.0099644038858163180155669280679830990266 * (1 << hbShift)),
        (int32_t)( 0.0099644038858163180155669280679830990266 * (1 << hbShift)),

        (int32_t)(-0.0130470841719700410971105597468522319105 * (1 << hbShift)),
        (int32_t)(-0.0130470841719700410971105597468522319105 * (1 << hbShift)),
        (int32_t)(-0.0130470841719700410971105597468522319105 * (1 << hbShift)),
        (int32_t)(-0.0130470841719700410971105597468522319105 * (1 << hbShift)),

        (int32_t)( 0.0170422818715445859028001507340377429500 * (1 << hbShift)),
        (int32_t)( 0.0170422818715445859028001507340377429500 * (1 << hbShift)),
        (int32_t)( 0.0170422818715445859028001507340377429500 * (1 << hbShift)),
        (int32_t)( 0.0170422818715445859028001507340377429500 * (1 << hbShift)),

        (int32_t)(-0.0223637819225956900603957677731159492396 * (1 << hbShift)),
        (int32_t)(-0.0223637819225956900603957677731159492396 * (1 << hbShift)),
        (int32_t)(-0.0223637819225956900603957677731159492396 * (1 << hbShift)),
        (int32_t)(-0.0223637819225956900603957677731159492396 * (1 << hbShift)),

        (int32_t)( 0.0297925991327811050257690084208661573939 * (1 << hbShift)),
        (int32_t)( 0.0297925991327811050257690084208661573939 * (1 << hbShift)),
        (int32_t)( 0.0297925991327811050257690084208661573939 * (1 << hbShift)),
        (int32_t)( 0.0297925991327811050257690084208661573939 * (1 << hbShift)),

        (int32_t)(-0.0410092859102263174175817539435229264200 * (1 << hbShift)),
        (int32_t)(-0.0410092859102263174175817539435229264200 * (1 << hbShift)),
        (int32_t)(-0.0410092859102263174175817539435229264200 * (1 << hbShift)),
        (int32_t)(-0.0410092859102263174175817539435229264200 * (1 << hbShift)),

        (int32_t)( 0.0604034694948822267757115866970707429573 * (1 << hbShift)),
        (int32_t)( 0.0604034694948822267757115866970707429573 * (1 << hbShift)),
        (int32_t)( 0.0604034694948822267757115866970707429573 * (1 << hbShift)),
        (int32_t)( 0.0604034694948822267757115866970707429573 * (1 << hbShift)),

        (int32_t)(-0.1041194584045879306666293473426776472479 * (1 << hbShift)),
        (int32_t)(-0.1041194584045879306666293473426776472479 * (1 << hbShift)),
        (int32_t)(-0.1041194584045879306666293473426776472479 * (1 << hbShift)),
        (int32_t)(-0.1041194584045879306666293473426776472479 * (1 << hbShift)),

        (int32_t)( 0.3176437752925042046214798574510496109724 * (1 << hbShift)),
        (int32_t)( 0.3176437752925042046214798574510496109724 * (1 << hbShift)),
        (int32_t)( 0.3176437752925042046214798574510496109724 * (1 << hbShift)),
        (int32_t)( 0.3176437752925042046214798574510496109724 * (1 << hbShift)),
};

const int16_t HBFIRFilterTraits<96>::hbMod[96+6] = {
        95,96,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,
        70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,
        93,94,95,96,0,1,2
};


const int32_t HBFIRFilterTraits<96>::hbCoeffs[24] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0000243052463317893968695708462046667364 * (1 << hbShift)),
        (int32_t)( 0.0000503567741519847557611806732058568059 * (1 << hbShift)),
        (int32_t)(-0.0001002354600628052128195172310043403741 * (1 << hbShift)),
        (int32_t)( 0.0001801275832684542921834081052878673290 * (1 << hbShift)),
        (int32_t)(-0.0003014864432246496970743687704441526876 * (1 << hbShift)),
        (int32_t)( 0.0004783148860127731604417744559754055445 * (1 << hbShift)),
        (int32_t)(-0.0007274200147704492930983422027679807798 * (1 << hbShift)),
        (int32_t)( 0.0010686503612886001472748187524075547117 * (1 << hbShift)),
        (int32_t)(-0.0015251456116906108098629779590282851132 * (1 << hbShift)),
        (int32_t)( 0.0021238131085570461677181075543785482296 * (1 << hbShift)),
        (int32_t)(-0.0028960654265650425873146467381502588978 * (1 << hbShift)),
        (int32_t)( 0.0038789688077727475616629515542399531114 * (1 << hbShift)),
        (int32_t)(-0.0051173875903961539915454359572777320864 * (1 << hbShift)),
        (int32_t)( 0.0066675444490017317031305132957186287967 * (1 << hbShift)),
        (int32_t)(-0.0086031967328669932404405784609480178915 * (1 << hbShift)),
        (int32_t)( 0.0110268456349653827530676863943881471641 * (1 << hbShift)),
        (int32_t)(-0.0140900919878225727721599014330422505736 * (1 << hbShift)),
        (int32_t)( 0.0180336055419063577553995258995200856589 * (1 << hbShift)),
        (int32_t)(-0.0232708957455770061584221508610426099040 * (1 << hbShift)),
        (int32_t)( 0.0305843805330435619671547442521841730922 * (1 << hbShift)),
        (int32_t)(-0.0416576245224431485070226699463091790676 * (1 << hbShift)),
        (int32_t)( 0.0608846679850302968661779345893592108041 * (1 << hbShift)),
        (int32_t)(-0.1044156487571061137087369274922821205109 * (1 << hbShift)),
        (int32_t)( 0.3177437550265513332981015537370694801211 * (1 << hbShift)),
};

const int32_t HBFIRFilterTraits<96>::hbCoeffsX4[96] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0000243052463317893968695708462046667364 * (1 << hbShift)),
        (int32_t)(-0.0000243052463317893968695708462046667364 * (1 << hbShift)),
        (int32_t)(-0.0000243052463317893968695708462046667364 * (1 << hbShift)),
        (int32_t)(-0.0000243052463317893968695708462046667364 * (1 << hbShift)),

        (int32_t)( 0.0000503567741519847557611806732058568059 * (1 << hbShift)),
        (int32_t)( 0.0000503567741519847557611806732058568059 * (1 << hbShift)),
        (int32_t)( 0.0000503567741519847557611806732058568059 * (1 << hbShift)),
        (int32_t)( 0.0000503567741519847557611806732058568059 * (1 << hbShift)),

        (int32_t)(-0.0001002354600628052128195172310043403741 * (1 << hbShift)),
        (int32_t)(-0.0001002354600628052128195172310043403741 * (1 << hbShift)),
        (int32_t)(-0.0001002354600628052128195172310043403741 * (1 << hbShift)),
        (int32_t)(-0.0001002354600628052128195172310043403741 * (1 << hbShift)),

        (int32_t)( 0.0001801275832684542921834081052878673290 * (1 << hbShift)),
        (int32_t)( 0.0001801275832684542921834081052878673290 * (1 << hbShift)),
        (int32_t)( 0.0001801275832684542921834081052878673290 * (1 << hbShift)),
        (int32_t)( 0.0001801275832684542921834081052878673290 * (1 << hbShift)),

        (int32_t)(-0.0003014864432246496970743687704441526876 * (1 << hbShift)),
        (int32_t)(-0.0003014864432246496970743687704441526876 * (1 << hbShift)),
        (int32_t)(-0.0003014864432246496970743687704441526876 * (1 << hbShift)),
        (int32_t)(-0.0003014864432246496970743687704441526876 * (1 << hbShift)),

        (int32_t)( 0.0004783148860127731604417744559754055445 * (1 << hbShift)),
        (int32_t)( 0.0004783148860127731604417744559754055445 * (1 << hbShift)),
        (int32_t)( 0.0004783148860127731604417744559754055445 * (1 << hbShift)),
        (int32_t)( 0.0004783148860127731604417744559754055445 * (1 << hbShift)),

        (int32_t)(-0.0007274200147704492930983422027679807798 * (1 << hbShift)),
        (int32_t)(-0.0007274200147704492930983422027679807798 * (1 << hbShift)),
        (int32_t)(-0.0007274200147704492930983422027679807798 * (1 << hbShift)),
        (int32_t)(-0.0007274200147704492930983422027679807798 * (1 << hbShift)),

        (int32_t)( 0.0010686503612886001472748187524075547117 * (1 << hbShift)),
        (int32_t)( 0.0010686503612886001472748187524075547117 * (1 << hbShift)),
        (int32_t)( 0.0010686503612886001472748187524075547117 * (1 << hbShift)),
        (int32_t)( 0.0010686503612886001472748187524075547117 * (1 << hbShift)),

        (int32_t)(-0.0015251456116906108098629779590282851132 * (1 << hbShift)),
        (int32_t)(-0.0015251456116906108098629779590282851132 * (1 << hbShift)),
        (int32_t)(-0.0015251456116906108098629779590282851132 * (1 << hbShift)),
        (int32_t)(-0.0015251456116906108098629779590282851132 * (1 << hbShift)),

        (int32_t)( 0.0021238131085570461677181075543785482296 * (1 << hbShift)),
        (int32_t)( 0.0021238131085570461677181075543785482296 * (1 << hbShift)),
        (int32_t)( 0.0021238131085570461677181075543785482296 * (1 << hbShift)),
        (int32_t)( 0.0021238131085570461677181075543785482296 * (1 << hbShift)),

        (int32_t)(-0.0028960654265650425873146467381502588978 * (1 << hbShift)),
        (int32_t)(-0.0028960654265650425873146467381502588978 * (1 << hbShift)),
        (int32_t)(-0.0028960654265650425873146467381502588978 * (1 << hbShift)),
        (int32_t)(-0.0028960654265650425873146467381502588978 * (1 << hbShift)),

        (int32_t)( 0.0038789688077727475616629515542399531114 * (1 << hbShift)),
        (int32_t)( 0.0038789688077727475616629515542399531114 * (1 << hbShift)),
        (int32_t)( 0.0038789688077727475616629515542399531114 * (1 << hbShift)),
        (int32_t)( 0.0038789688077727475616629515542399531114 * (1 << hbShift)),

        (int32_t)(-0.0051173875903961539915454359572777320864 * (1 << hbShift)),
        (int32_t)(-0.0051173875903961539915454359572777320864 * (1 << hbShift)),
        (int32_t)(-0.0051173875903961539915454359572777320864 * (1 << hbShift)),
        (int32_t)(-0.0051173875903961539915454359572777320864 * (1 << hbShift)),

        (int32_t)( 0.0066675444490017317031305132957186287967 * (1 << hbShift)),
        (int32_t)( 0.0066675444490017317031305132957186287967 * (1 << hbShift)),
        (int32_t)( 0.0066675444490017317031305132957186287967 * (1 << hbShift)),
        (int32_t)( 0.0066675444490017317031305132957186287967 * (1 << hbShift)),

        (int32_t)(-0.0086031967328669932404405784609480178915 * (1 << hbShift)),
        (int32_t)(-0.0086031967328669932404405784609480178915 * (1 << hbShift)),
        (int32_t)(-0.0086031967328669932404405784609480178915 * (1 << hbShift)),
        (int32_t)(-0.0086031967328669932404405784609480178915 * (1 << hbShift)),

        (int32_t)( 0.0110268456349653827530676863943881471641 * (1 << hbShift)),
        (int32_t)( 0.0110268456349653827530676863943881471641 * (1 << hbShift)),
        (int32_t)( 0.0110268456349653827530676863943881471641 * (1 << hbShift)),
        (int32_t)( 0.0110268456349653827530676863943881471641 * (1 << hbShift)),

        (int32_t)(-0.0140900919878225727721599014330422505736 * (1 << hbShift)),
        (int32_t)(-0.0140900919878225727721599014330422505736 * (1 << hbShift)),
        (int32_t)(-0.0140900919878225727721599014330422505736 * (1 << hbShift)),
        (int32_t)(-0.0140900919878225727721599014330422505736 * (1 << hbShift)),

        (int32_t)( 0.0180336055419063577553995258995200856589 * (1 << hbShift)),
        (int32_t)( 0.0180336055419063577553995258995200856589 * (1 << hbShift)),
        (int32_t)( 0.0180336055419063577553995258995200856589 * (1 << hbShift)),
        (int32_t)( 0.0180336055419063577553995258995200856589 * (1 << hbShift)),

        (int32_t)(-0.0232708957455770061584221508610426099040 * (1 << hbShift)),
        (int32_t)(-0.0232708957455770061584221508610426099040 * (1 << hbShift)),
        (int32_t)(-0.0232708957455770061584221508610426099040 * (1 << hbShift)),
        (int32_t)(-0.0232708957455770061584221508610426099040 * (1 << hbShift)),

        (int32_t)( 0.0305843805330435619671547442521841730922 * (1 << hbShift)),
        (int32_t)( 0.0305843805330435619671547442521841730922 * (1 << hbShift)),
        (int32_t)( 0.0305843805330435619671547442521841730922 * (1 << hbShift)),
        (int32_t)( 0.0305843805330435619671547442521841730922 * (1 << hbShift)),

        (int32_t)(-0.0416576245224431485070226699463091790676 * (1 << hbShift)),
        (int32_t)(-0.0416576245224431485070226699463091790676 * (1 << hbShift)),
        (int32_t)(-0.0416576245224431485070226699463091790676 * (1 << hbShift)),
        (int32_t)(-0.0416576245224431485070226699463091790676 * (1 << hbShift)),

        (int32_t)( 0.0608846679850302968661779345893592108041 * (1 << hbShift)),
        (int32_t)( 0.0608846679850302968661779345893592108041 * (1 << hbShift)),
        (int32_t)( 0.0608846679850302968661779345893592108041 * (1 << hbShift)),
        (int32_t)( 0.0608846679850302968661779345893592108041 * (1 << hbShift)),

        (int32_t)(-0.1044156487571061137087369274922821205109 * (1 << hbShift)),
        (int32_t)(-0.1044156487571061137087369274922821205109 * (1 << hbShift)),
        (int32_t)(-0.1044156487571061137087369274922821205109 * (1 << hbShift)),
        (int32_t)(-0.1044156487571061137087369274922821205109 * (1 << hbShift)),

        (int32_t)( 0.3177437550265513332981015537370694801211 * (1 << hbShift)),
        (int32_t)( 0.3177437550265513332981015537370694801211 * (1 << hbShift)),
        (int32_t)( 0.3177437550265513332981015537370694801211 * (1 << hbShift)),
        (int32_t)( 0.3177437550265513332981015537370694801211 * (1 << hbShift)),
};
