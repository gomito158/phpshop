<?php
/*
+-----------------------------------------------------------------------+
| Copyright (c) 2002-2003, Mika Tuupola                                 |
| All rights reserved.                                                  |
|                                                                       |
| Redistribution and use in source and binary forms, with or without    |
| modification, are permitted provided that the following conditions    |
| are met:                                                              |
|                                                                       |
| o Redistributions of source code must retain the above copyright      |
|   notice, this list of conditions and the following disclaimer.       |
| o Redistributions in binary form must reproduce the above copyright   |
|   notice, this list of conditions and the following disclaimer in the |
|   documentation and/or other materials provided with the distribution.|
| o The names of the authors may not be used to endorse or promote      |
|   products derived from this software without specific prior written  |
|   permission.                                                         |
|                                                                       |
| THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS   |
| "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT     |
| LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR |
| A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT  |
| OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, |
| SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT      |
| LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, |
| DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY |
| THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT   |
| (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE |
| OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  |
|                                                                       |
+-----------------------------------------------------------------------+
| Author: Mika Tuupola <tuupola@appelsiini.net>                         |
+-----------------------------------------------------------------------+
*/

/* $Id: ps_country.inc,v 1.1.1.1 2004/07/27 14:58:32 pablo Exp $ */


class ps_country {

    var $twothree;
    var $twocountry;
    var $twonumber;
    var $code;

    function ps_country($code='') {

        $this->code = $code;

        $this->twothree = array(
            'AF' => 'AFG',
            'AL' => 'ALB',
            'DZ' => 'DZA',
            'AS' => 'ASM',
            'AD' => 'AND',
            'AO' => 'AGO',
            'AI' => 'AIA',
            'AQ' => 'ATA',
            'AG' => 'ATG',
            'AR' => 'ARG',
            'AM' => 'ARM',
            'AW' => 'ABW',
            'AU' => 'AUS',
            'AT' => 'AUT',
            'AZ' => 'AZE',
            'BS' => 'BHS',
            'BH' => 'BHR',
            'BD' => 'BGD',
            'BB' => 'BRB',
            'BY' => 'BLR',
            'BE' => 'BEL',
            'BZ' => 'BLZ',
            'BJ' => 'BEN',
            'BM' => 'BMU',
            'BT' => 'BTN',
            'BO' => 'BOL',
            'BA' => 'BIH',
            'BW' => 'BWA',
            'BV' => 'BVT',
            'BR' => 'BRA',
            'IO' => 'IOT',
            'VG' => 'VGB',
            'BN' => 'BRN',
            'BG' => 'BGR',
            'BF' => 'BFA',
            'BI' => 'BDI',
            'KH' => 'KHM',
            'CM' => 'CMR',
            'CA' => 'CAN',
            'CV' => 'CPV',
            'KY' => 'CYM',
            'CF' => 'CAF',
            'TD' => 'TCD',
            'CL' => 'CHL',
            'CN' => 'CHN',
            'CX' => 'CXR',
            'CC' => 'CCK',
            'CO' => 'COL',
            'KM' => 'COM',
            'CD' => 'COD',
            'CG' => 'COG',
            'CK' => 'COK',
            'CR' => 'CRI',
            'CI' => 'CIV',
            'CU' => 'CUB',
            'CY' => 'CYP',
            'CZ' => 'CZE',
            'DK' => 'DNK',
            'DJ' => 'DJI',
            'DM' => 'DMA',
            'DO' => 'DOM',
            'TL' => 'TLS',
            'EC' => 'ECU',
            'EG' => 'EGY',
            'SV' => 'SLV',
            'GQ' => 'GNQ',
            'ER' => 'ERI',
            'EE' => 'EST',
            'ET' => 'ETH',
            'FO' => 'FRO',
            'FK' => 'FLK',
            'FJ' => 'FJI',
            'FI' => 'FIN',
            'FR' => 'FRA',
            'GF' => 'GUF',
            'PF' => 'PYF',
            'TF' => 'ATF',
            'GA' => 'GAB',
            'GM' => 'GMB',
            'GE' => 'GEO',
            'DE' => 'DEU',
            'GH' => 'GHA',
            'GI' => 'GIB',
            'GR' => 'GRC',
            'GL' => 'GRL',
            'GD' => 'GRD',
            'GP' => 'GLP',
            'GU' => 'GUM',
            'GT' => 'GTM',
            'GN' => 'GIN',
            'GW' => 'GNB',
            'GY' => 'GUY',
            'HT' => 'HTI',
            'HM' => 'HMD',
            'VA' => 'VAT',
            'HN' => 'HND',
            'HK' => 'HKG',
            'HR' => 'HRV',
            'HU' => 'HUN',
            'IS' => 'ISL',
            'IN' => 'IND',
            'ID' => 'IDN',
            'IR' => 'IRN',
            'IQ' => 'IRQ',
            'IE' => 'IRL',
            'IL' => 'ISR',
            'IT' => 'ITA',
            'JM' => 'JAM',
            'JP' => 'JPN',
            'JO' => 'JOR',
            'KZ' => 'KAZ',
            'KE' => 'KEN',
            'KI' => 'KIR',
            'KP' => 'PRK',
            'KR' => 'KOR',
            'KW' => 'KWT',
            'KG' => 'KGZ',
            'LA' => 'LAO',
            'LV' => 'LVA',
            'LB' => 'LBN',
            'LS' => 'LSO',
            'LR' => 'LBR',
            'LY' => 'LBY',
            'LI' => 'LIE',
            'LT' => 'LTU',
            'LU' => 'LUX',
            'MO' => 'MAC',
            'MK' => 'MKD',
            'MG' => 'MDG',
            'MW' => 'MWI',
            'MY' => 'MYS',
            'MV' => 'MDV',
            'ML' => 'MLI',
            'MT' => 'MLT',
            'MH' => 'MHL',
            'MQ' => 'MTQ',
            'MR' => 'MRT',
            'MU' => 'MUS',
            'YT' => 'MYT',
            'MX' => 'MEX',
            'FM' => 'FSM',
            'MD' => 'MDA',
            'MC' => 'MCO',
            'MN' => 'MNG',
            'MS' => 'MSR',
            'MA' => 'MAR',
            'MZ' => 'MOZ',
            'MM' => 'MMR',
            'NA' => 'NAM',
            'NR' => 'NRU',
            'NP' => 'NPL',
            'AN' => 'ANT',
            'NL' => 'NLD',
            'NC' => 'NCL',
            'NZ' => 'NZL',
            'NI' => 'NIC',
            'NE' => 'NER',
            'NG' => 'NGA',
            'NU' => 'NIU',
            'NF' => 'NFK',
            'MP' => 'MNP',
            'NO' => 'NOR',
            'OM' => 'OMN',
            'PK' => 'PAK',
            'PW' => 'PLW',
            'PS' => 'PSE',
            'PA' => 'PAN',
            'PG' => 'PNG',
            'PY' => 'PRY',
            'PE' => 'PER',
            'PH' => 'PHL',
            'PN' => 'PCN',
            'PL' => 'POL',
            'PT' => 'PRT',
            'PR' => 'PRI',
            'QA' => 'QAT',
            'RE' => 'REU',
            'RO' => 'ROU',
            'RU' => 'RUS',
            'RW' => 'RWA',
            'SH' => 'SHN',
            'KN' => 'KNA',
            'LC' => 'LCA',
            'PM' => 'SPM',
            'VC' => 'VCT',
            'WS' => 'WSM',
            'SM' => 'SMR',
            'ST' => 'STP',
            'SA' => 'SAU',
            'SN' => 'SEN',
            'SC' => 'SYC',
            'SL' => 'SLE',
            'SG' => 'SGP',
            'SK' => 'SVK',
            'SI' => 'SVN',
            'SB' => 'SLB',
            'SO' => 'SOM',
            'ZA' => 'ZAF',
            'GS' => 'SGS',
            'ES' => 'ESP',
            'LK' => 'LKA',
            'SD' => 'SDN',
            'SR' => 'SUR',
            'SJ' => 'SJM',
            'SZ' => 'SWZ',
            'SE' => 'SWE',
            'CH' => 'CHE',
            'SY' => 'SYR',
            'TW' => 'TWN',
            'TJ' => 'TJK',
            'TZ' => 'TZA',
            'TH' => 'THA',
            'TG' => 'TGO',
            'TK' => 'TKL',
            'TO' => 'TON',
            'TT' => 'TTO',
            'TN' => 'TUN',
            'TR' => 'TUR',
            'TM' => 'TKM',
            'TC' => 'TCA',
            'TV' => 'TUV',
            'VI' => 'VIR',
            'UG' => 'UGA',
            'UA' => 'UKR',
            'AE' => 'ARE',
            'GB' => 'GBR',
            'UM' => 'UMI',
            'US' => 'USA',
            'UY' => 'URY',
            'UZ' => 'UZB',
            'VU' => 'VUT',
            'VE' => 'VEN',
            'VN' => 'VNM',
            'WF' => 'WLF',
            'EH' => 'ESH',
            'YE' => 'YEM',
            'YU' => 'YUG',
            'ZM' => 'ZMB',
            'ZW' => 'ZWE'
        );
        
        $this->twocountry = array(
            'AF' => 'Afghanistan',
            'AL' => 'Albania, People\'s Socialist Republic of',
            'DZ' => 'Algeria, People\'s Democratic Republic of',
            'AS' => 'American Samoa',
            'AD' => 'Andorra, Principality of',
            'AO' => 'Angola, Republic of',
            'AI' => 'Anguilla',
            'AQ' => 'Antarctica (the territory South of 60 deg S)',
            'AG' => 'Antigua and Barbuda',
            'AR' => 'Argentina, Argentine Republic',
            'AM' => 'Armenia',
            'AW' => 'Aruba',
            'AU' => 'Australia, Commonwealth of',
            'AT' => 'Austria, Republic of',
            'AZ' => 'Azerbaijan, Republic of',
            'BS' => 'Bahamas, Commonwealth of the',
            'BH' => 'Bahrain, Kingdom of',
            'BD' => 'Bangladesh, People\'s Republic of',
            'BB' => 'Barbados',
            'BY' => 'Belarus',
            'BE' => 'Belgium, Kingdom of',
            'BZ' => 'Belize',
            'BJ' => 'Benin, People\'s Republic of',
            'BM' => 'Bermuda',
            'BT' => 'Bhutan, Kingdom of',
            'BO' => 'Bolivia, Republic of',
            'BA' => 'Bosnia and Herzegovina',
            'BW' => 'Botswana, Republic of',
            'BV' => 'Bouvet Island (Bouvetoya)',
            'BR' => 'Brazil, Federative Republic of',
            'IO' => 'British Indian Ocean Territory (Chagos Archipelago)',
            'VG' => 'British Virgin Islands',
            'BN' => 'Brunei Darussalam',
            'BG' => 'Bulgaria, People\'s Republic of',
            'BF' => 'Burkina Faso',
            'BI' => 'Burundi, Republic of',
            'KH' => 'Cambodia, Kingdom of',
            'CM' => 'Cameroon, United Republic of',
            'CA' => 'Canada',
            'CV' => 'Cape Verde, Republic of',
            'KY' => 'Cayman Islands',
            'CF' => 'Central African Republic',
            'TD' => 'Chad, Republic of',
            'CL' => 'Chile, Republic of',
            'CN' => 'China, People\'s Republic of',
            'CX' => 'Christmas Island',
            'CC' => 'Cocos (Keeling) Islands',
            'CO' => 'Colombia, Republic of',
            'KM' => 'Comoros, Federal and Islamic Republic of',
            'CD' => 'Congo, Democratic Republic of',
            'CG' => 'Congo, People\'s Republic of',
            'CK' => 'Cook Islands',
            'CR' => 'Costa Rica, Republic of',
            'CI' => 'Cote D\'Ivoire, Ivory Coast, Republic of the',
            'CU' => 'Cuba, Republic of',
            'CY' => 'Cyprus, Republic of',
            'CZ' => 'Czech Republic',
            'DK' => 'Denmark, Kingdom of',
            'DJ' => 'Djibouti, Republic of',
            'DM' => 'Dominica, Commonwealth of',
            'DO' => 'Dominican Republic',
            'TL' => 'Timor-Leste',
            'EC' => 'Ecuador, Republic of',
            'EG' => 'Egypt, Arab Republic of',
            'SV' => 'El Salvador, Republic of',
            'GQ' => 'Equatorial Guinea, Republic of',
            'ER' => 'Eritrea',
            'EE' => 'Estonia',
            'ET' => 'Ethiopia',
            'FO' => 'Faeroe Islands',
            'FK' => 'Falkland Islands (Malvinas)',
            'FJ' => 'Fiji, Republic of the Fiji Islands',
            'FI' => 'Finland, Republic of',
            'FR' => 'France, French Republic',
            'GF' => 'French Guiana',
            'PF' => 'French Polynesia',
            'TF' => 'French Southern Territories',
            'GA' => 'Gabon, Gabonese Republic',
            'GM' => 'Gambia, Republic of the',
            'GE' => 'Georgia',
            'DE' => 'Germany',
            'GH' => 'Ghana, Republic of',
            'GI' => 'Gibraltar',
            'GR' => 'Greece, Hellenic Republic',
            'GL' => 'Greenland',
            'GD' => 'Grenada',
            'GP' => 'Guadaloupe',
            'GU' => 'Guam',
            'GT' => 'Guatemala, Republic of',
            'GN' => 'Guinea, Revolutionary People\'s Rep\'c of',
            'GW' => 'Guinea-Bissau, Republic of',
            'GY' => 'Guyana, Republic of',
            'HT' => 'Haiti, Republic of',
            'HM' => 'Heard and McDonald Islands',
            'VA' => 'Holy See (Vatican City State)',
            'HN' => 'Honduras, Republic of',
            'HK' => 'Hong Kong, Special Administrative Region of China',
            'HR' => 'Hrvatska (Croatia)',
            'HU' => 'Hungary, Hungarian People\'s Republic',
            'IS' => 'Iceland, Republic of',
            'IN' => 'India, Republic of',
            'ID' => 'Indonesia, Republic of',
            'IR' => 'Iran, Islamic Republic of',
            'IQ' => 'Iraq, Republic of',
            'IE' => 'Ireland',
            'IL' => 'Israel, State of',
            'IT' => 'Italy, Italian Republic',
            'JM' => 'Jamaica',
            'JP' => 'Japan',
            'JO' => 'Jordan, Hashemite Kingdom of',
            'KZ' => 'Kazakhstan, Republic of',
            'KE' => 'Kenya, Republic of',
            'KI' => 'Kiribati, Republic of',
            'KP' => 'Korea, Democratic People\'s Republic of',
            'KR' => 'Korea, Republic of',
            'KW' => 'Kuwait, State of',
            'KG' => 'Kyrgyz Republic',
            'LA' => 'Lao People\'s Democratic Republic',
            'LV' => 'Latvia',
            'LB' => 'Lebanon, Lebanese Republic',
            'LS' => 'Lesotho, Kingdom of',
            'LR' => 'Liberia, Republic of',
            'LY' => 'Libyan Arab Jamahiriya',
            'LI' => 'Liechtenstein, Principality of',
            'LT' => 'Lithuania',
            'LU' => 'Luxembourg, Grand Duchy of',
            'MO' => 'Macao, Special Administrative Region of China',
            'MK' => 'Macedonia, the former Yugoslav Republic of',
            'MG' => 'Madagascar, Republic of',
            'MW' => 'Malawi, Republic of',
            'MY' => 'Malaysia',
            'MV' => 'Maldives, Republic of',
            'ML' => 'Mali, Republic of',
            'MT' => 'Malta, Republic of',
            'MH' => 'Marshall Islands',
            'MQ' => 'Martinique',
            'MR' => 'Mauritania, Islamic Republic of',
            'MU' => 'Mauritius',
            'YT' => 'Mayotte',
            'MX' => 'Mexico, United Mexican States',
            'FM' => 'Micronesia, Federated States of',
            'MD' => 'Moldova, Republic of',
            'MC' => 'Monaco, Principality of',
            'MN' => 'Mongolia, Mongolian People\'s Republic',
            'MS' => 'Montserrat',
            'MA' => 'Morocco, Kingdom of',
            'MZ' => 'Mozambique, People\'s Republic of',
            'MM' => 'Myanmar',
            'NA' => 'Namibia',
            'NR' => 'Nauru, Republic of',
            'NP' => 'Nepal, Kingdom of',
            'AN' => 'Netherlands Antilles',
            'NL' => 'Netherlands, Kingdom of the',
            'NC' => 'New Caledonia',
            'NZ' => 'New Zealand',
            'NI' => 'Nicaragua, Republic of',
            'NE' => 'Niger, Republic of the',
            'NG' => 'Nigeria, Federal Republic of',
            'NU' => 'Niue, Republic of',
            'NF' => 'Norfolk Island',
            'MP' => 'Northern Mariana Islands',
            'NO' => 'Norway, Kingdom of',
            'OM' => 'Oman, Sultanate of',
            'PK' => 'Pakistan, Islamic Republic of',
            'PW' => 'Palau',
            'PS' => 'Palestinian Territory, Occupied',
            'PA' => 'Panama, Republic of',
            'PG' => 'Papua New Guinea',
            'PY' => 'Paraguay, Republic of',
            'PE' => 'Peru, Republic of',
            'PH' => 'Philippines, Republic of the',
            'PN' => 'Pitcairn Island',
            'PL' => 'Poland, Polish People\'s Republic',
            'PT' => 'Portugal, Portuguese Republic',
            'PR' => 'Puerto Rico',
            'QA' => 'Qatar, State of',
            'RE' => 'Reunion',
            'RO' => 'Romania, Socialist Republic of',
            'RU' => 'Russian Federation',
            'RW' => 'Rwanda, Rwandese Republic',
            'SH' => 'St. Helena',
            'KN' => 'St. Kitts and Nevis',
            'LC' => 'St. Lucia',
            'PM' => 'St. Pierre and Miquelon',
            'VC' => 'St. Vincent and the Grenadines',
            'WS' => 'Samoa, Independent State of',
            'SM' => 'San Marino, Republic of',
            'ST' => 'Sao Tome and Principe, Democratic Republic of',
            'SA' => 'Saudi Arabia, Kingdom of',
            'SN' => 'Senegal, Republic of',
            'SC' => 'Seychelles, Republic of',
            'SL' => 'Sierra Leone, Republic of',
            'SG' => 'Singapore, Republic of',
            'SK' => 'Slovakia (Slovak Republic)',
            'SI' => 'Slovenia',
            'SB' => 'Solomon Islands',
            'SO' => 'Somalia, Somali Republic',
            'ZA' => 'South Africa, Republic of',
            'GS' => 'South Georgia and the South Sandwich Islands',
            'ES' => 'Spain, Spanish State',
            'LK' => 'Sri Lanka, Democratic Socialist Republic of',
            'SD' => 'Sudan, Democratic Republic of the',
            'SR' => 'Suriname, Republic of',
            'SJ' => 'Svalbard & Jan Mayen Islands',
            'SZ' => 'Swaziland, Kingdom of',
            'SE' => 'Sweden, Kingdom of',
            'CH' => 'Switzerland, Swiss Confederation',
            'SY' => 'Syrian Arab Republic',
            'TW' => 'Taiwan, Province of China',
            'TJ' => 'Tajikistan',
            'TZ' => 'Tanzania, United Republic of',
            'TH' => 'Thailand, Kingdom of',
            'TG' => 'Togo, Togolese Republic',
            'TK' => 'Tokelau (Tokelau Islands)',
            'TO' => 'Tonga, Kingdom of',
            'TT' => 'Trinidad and Tobago, Republic of',
            'TN' => 'Tunisia, Republic of',
            'TR' => 'Turkey, Republic of',
            'TM' => 'Turkmenistan',
            'TC' => 'Turks and Caicos Islands',
            'TV' => 'Tuvalu',
            'VI' => 'US Virgin Islands',
            'UG' => 'Uganda, Republic of',
            'UA' => 'Ukraine',
            'AE' => 'United Arab Emirates',
            'GB' => 'United Kingdom of Great Britain & N. Ireland',
            'UM' => 'United States Minor Outlying Islands',
            'US' => 'United States of America',
            'UY' => 'Uruguay, Eastern Republic of',
            'UZ' => 'Uzbekistan',
            'VU' => 'Vanuatu',
            'VE' => 'Venezuela, Bolivarian Republic of',
            'VN' => 'Viet Nam, Socialist Republic of',
            'WF' => 'Wallis and Futuna Islands',
            'EH' => 'Western Sahara',
            'YE' => 'Yemen',
            'YU' => 'Yugoslavia, Socialist Federal Republic of',
            'ZM' => 'Zambia, Republic of',
            'ZW' => 'Zimbabwe'
        );

        $this->twonumber = array(
            'AF' => '004',
            'AL' => '008',
            'DZ' => '012',
            'AS' => '016',
            'AD' => '020',
            'AO' => '024',
            'AI' => '660',
            'AQ' => '010',
            'AG' => '028',
            'AR' => '032',
            'AM' => '051',
            'AW' => '533',
            'AU' => '036',
            'AT' => '040',
            'AZ' => '031',
            'BS' => '044',
            'BH' => '048',
            'BD' => '050',
            'BB' => '052',
            'BY' => '112',
            'BE' => '056',
            'BZ' => '084',
            'BJ' => '204',
            'BM' => '060',
            'BT' => '064',
            'BO' => '068',
            'BA' => '070',
            'BW' => '072',
            'BV' => '074',
            'BR' => '076',
            'IO' => '086',
            'VG' => '092',
            'BN' => '096',
            'BG' => '100',
            'BF' => '854',
            'BI' => '108',
            'KH' => '116',
            'CM' => '120',
            'CA' => '124',
            'CV' => '132',
            'KY' => '136',
            'CF' => '140',
            'TD' => '148',
            'CL' => '152',
            'CN' => '156',
            'CX' => '162',
            'CC' => '166',
            'CO' => '170',
            'KM' => '174',
            'CD' => '180',
            'CG' => '178',
            'CK' => '184',
            'CR' => '188',
            'CI' => '384',
            'CU' => '192',
            'CY' => '196',
            'CZ' => '203',
            'DK' => '208',
            'DJ' => '262',
            'DM' => '212',
            'DO' => '214',
            'TL' => '626',
            'EC' => '218',
            'EG' => '818',
            'SV' => '222',
            'GQ' => '226',
            'ER' => '232',
            'EE' => '233',
            'ET' => '231',
            'FO' => '234',
            'FK' => '238',
            'FJ' => '242',
            'FI' => '246',
            'FR' => '250',
            'GF' => '254',
            'PF' => '258',
            'TF' => '260',
            'GA' => '266',
            'GM' => '270',
            'GE' => '268',
            'DE' => '276',
            'GH' => '288',
            'GI' => '292',
            'GR' => '300',
            'GL' => '304',
            'GD' => '308',
            'GP' => '312',
            'GU' => '316',
            'GT' => '320',
            'GN' => '324',
            'GW' => '624',
            'GY' => '328',
            'HT' => '332',
            'HM' => '334',
            'VA' => '336',
            'HN' => '340',
            'HK' => '344',
            'HR' => '191',
            'HU' => '348',
            'IS' => '352',
            'IN' => '356',
            'ID' => '360',
            'IR' => '364',
            'IQ' => '368',
            'IE' => '372',
            'IL' => '376',
            'IT' => '380',
            'JM' => '388',
            'JP' => '392',
            'JO' => '400',
            'KZ' => '398',
            'KE' => '404',
            'KI' => '296',
            'KP' => '408',
            'KR' => '410',
            'KW' => '414',
            'KG' => '417',
            'LA' => '418',
            'LV' => '428',
            'LB' => '422',
            'LS' => '426',
            'LR' => '430',
            'LY' => '434',
            'LI' => '438',
            'LT' => '440',
            'LU' => '442',
            'MO' => '446',
            'MK' => '807',
            'MG' => '450',
            'MW' => '454',
            'MY' => '458',
            'MV' => '462',
            'ML' => '466',
            'MT' => '470',
            'MH' => '584',
            'MQ' => '474',
            'MR' => '478',
            'MU' => '480',
            'YT' => '175',
            'MX' => '484',
            'FM' => '583',
            'MD' => '498',
            'MC' => '492',
            'MN' => '496',
            'MS' => '500',
            'MA' => '504',
            'MZ' => '508',
            'MM' => '104',
            'NA' => '516',
            'NR' => '520',
            'NP' => '524',
            'AN' => '530',
            'NL' => '528',
            'NC' => '540',
            'NZ' => '554',
            'NI' => '558',
            'NE' => '562',
            'NG' => '566',
            'NU' => '570',
            'NF' => '574',
            'MP' => '580',
            'NO' => '578',
            'OM' => '512',
            'PK' => '586',
            'PW' => '585',
            'PS' => '275',
            'PA' => '591',
            'PG' => '598',
            'PY' => '600',
            'PE' => '604',
            'PH' => '608',
            'PN' => '612',
            'PL' => '616',
            'PT' => '620',
            'PR' => '630',
            'QA' => '634',
            'RE' => '638',
            'RO' => '642',
            'RU' => '643',
            'RW' => '646',
            'SH' => '654',
            'KN' => '659',
            'LC' => '662',
            'PM' => '666',
            'VC' => '670',
            'WS' => '882',
            'SM' => '674',
            'ST' => '678',
            'SA' => '682',
            'SN' => '686',
            'SC' => '690',
            'SL' => '694',
            'SG' => '702',
            'SK' => '703',
            'SI' => '705',
            'SB' => '090',
            'SO' => '706',
            'ZA' => '710',
            'GS' => '239',
            'ES' => '724',
            'LK' => '144',
            'SD' => '736',
            'SR' => '740',
            'SJ' => '744',
            'SZ' => '748',
            'SE' => '752',
            'CH' => '756',
            'SY' => '760',
            'TW' => '158',
            'TJ' => '762',
            'TZ' => '834',
            'TH' => '764',
            'TG' => '768',
            'TK' => '772',
            'TO' => '776',
            'TT' => '780',
            'TN' => '788',
            'TR' => '792',
            'TM' => '795',
            'TC' => '796',
            'TV' => '798',
            'VI' => '850',
            'UG' => '800',
            'UA' => '804',
            'AE' => '784',
            'GB' => '826',
            'UM' => '581',
            'US' => '840',
            'UY' => '858',
            'UZ' => '860',
            'VU' => '548',
            'VE' => '862',
            'VN' => '704',
            'WF' => '876',
            'EH' => '732',
            'YE' => '887',
            'YU' => '891',
            'ZM' => '894',
            'ZW' => '716'
        );
    }

    function getTwoLetterCode($input='') {
        $retval = '';
        $code = $input ? $input : $this->code;
        $code = strtoupper($code);
        $len  = strlen($code);
        if ($len == 2) {
            $retval = $code;
        } elseif ($len == 3) {
            if (is_numeric($code)) {
                $numbertwo = array_flip($this->twonumber);
                $retval = $numbertwo["$code"];
            } else {
                $threetwo = array_flip($this->twothree);
                $retval = $threetwo[$code];
            }
        }
        return($retval);
    }

    function getThreeLetterCode($input='') {
        $retval = '';
        $code = $input ? $input : $this->code;
        $code = strtoupper($code);
        $len  = strlen($code);
        if ($len == 2) {
            $retval = $this->twothree[$code];
        } elseif ($len == 3) {
            if (is_numeric($code)) {
                $code2 = $this->getTwoLetterCode($code);
                $retval = $this->twothree[$code2];
            } else {
                $retval = $code;
            }
        }
        return($retval);
    }

    function getNumber($input='') {
        $retval = '';
        $code = $input ? $input : $this->code;
        $code = strtoupper($code);
        $len  = strlen($code);
        if ($len == 2) {
            $retval = $this->twonumber[$code];
        } elseif ($len == 3) {
            if (is_numeric($code)) {
                $retval = $code;
            } else {
                $code2 = $this->getTwoLetterCode($code);
                $retval = $this->twonumber[$code2];
            }
        }
        return($retval);
    }

    function getCountry($input='') {
        $retval = '';
        $code = $input ? $input : $this->code;
        $code = strtoupper($code);
        $len  = strlen($code);
        if ($len == 2) {
            $retval = $this->twocountry[$code];
        } elseif ($len == 3) {
            $code2 = $this->getTwoLetterCode($code);
            $retval = $this->twocountry[$code2];
        }
        return($retval);
    }

}

?>