#pragma once
/*
This is a configuration file, modify only if you know what you are doing.
There is no Warranty that the code will run with the modifications of this file.
Copyright (C) 2018  Luca Cuccovillo, Raul Radu.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

Raul Radu:
	e-mail: rauloris2013@gmail.com
	num. cell.: +39 388 627 8227
	instagram: @raull.radu

Luca Cuccovillo:
	e-mail: cuccovilloluca@gmail.com
	num. cell.: +39 348 427 2556
	instagram: @cuccos01

This configuration file may will be changed to a text file for live editing.
This will be automatically included with the API for files processing.
*/


//Location of the data used by the application.
const char* DIR_DATA = "./Data";

//Location of the registers contaning each user presences.
const char* DIR_PRESENZE = "/Presenze";

//Location of each user information. 
//This will be (to be added) crypted as sensible data.
//This data will not be diffused to third party agencies except of each user authorization.
const char* DIR_USR_LST = "/Utenti";

//Contains app's name.
const char* APP_NAME = "I.K.S.D Club - Registro presenze";

//Contains app's version.
const char* APP_VER = "1.0.0";
