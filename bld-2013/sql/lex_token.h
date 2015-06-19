/*
Copyright (c) 2011, 2015, Oracle and/or its affiliates. All rights reserved.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

*/
/*
  This file is generated, do not edit.
  See file sql/gen_lex_token.cc.
*/
struct lex_token_string
{
  const char *m_token_string;
  int m_token_length;
  bool m_append_space;
  bool m_start_expr;
};
typedef struct lex_token_string lex_token_string;
#ifdef LEX_TOKEN_WITH_DEFINITION
lex_token_string lex_token_array[]=
{
/* PART 1: character tokens. */
/* 000 */  { "\x00", 1, true, false},
/* 001 */  { "\x01", 1, true, false},
/* 002 */  { "\x02", 1, true, false},
/* 003 */  { "\x03", 1, true, false},
/* 004 */  { "\x04", 1, true, false},
/* 005 */  { "\x05", 1, true, false},
/* 006 */  { "\x06", 1, true, false},
/* 007 */  { "\x07", 1, true, false},
/* 008 */  { "\x08", 1, true, false},
/* 009 */  { "\x09", 1, true, false},
/* 010 */  { "\x0a", 1, true, false},
/* 011 */  { "\x0b", 1, true, false},
/* 012 */  { "\x0c", 1, true, false},
/* 013 */  { "\x0d", 1, true, false},
/* 014 */  { "\x0e", 1, true, false},
/* 015 */  { "\x0f", 1, true, false},
/* 016 */  { "\x10", 1, true, false},
/* 017 */  { "\x11", 1, true, false},
/* 018 */  { "\x12", 1, true, false},
/* 019 */  { "\x13", 1, true, false},
/* 020 */  { "\x14", 1, true, false},
/* 021 */  { "\x15", 1, true, false},
/* 022 */  { "\x16", 1, true, false},
/* 023 */  { "\x17", 1, true, false},
/* 024 */  { "\x18", 1, true, false},
/* 025 */  { "\x19", 1, true, false},
/* 026 */  { "\x1a", 1, true, false},
/* 027 */  { "\x1b", 1, true, false},
/* 028 */  { "\x1c", 1, true, false},
/* 029 */  { "\x1d", 1, true, false},
/* 030 */  { "\x1e", 1, true, false},
/* 031 */  { "\x1f", 1, true, false},
/* 032 */  { "\x20", 1, true, false},
/* 033 */  { "\x21", 1, true, false},
/* 034 */  { "\x22", 1, true, false},
/* 035 */  { "\x23", 1, true, false},
/* 036 */  { "\x24", 1, true, false},
/* 037 */  { "\x25", 1, true, true},
/* 038 */  { "\x26", 1, true, true},
/* 039 */  { "\x27", 1, true, false},
/* 040 */  { "\x28", 1, true, true},
/* 041 */  { "\x29", 1, true, false},
/* 042 */  { "\x2a", 1, true, true},
/* 043 */  { "\x2b", 1, true, true},
/* 044 */  { "\x2c", 1, true, true},
/* 045 */  { "\x2d", 1, true, true},
/* 046 */  { "\x2e", 1, true, false},
/* 047 */  { "\x2f", 1, true, true},
/* 048 */  { "\x30", 1, true, false},
/* 049 */  { "\x31", 1, true, false},
/* 050 */  { "\x32", 1, true, false},
/* 051 */  { "\x33", 1, true, false},
/* 052 */  { "\x34", 1, true, false},
/* 053 */  { "\x35", 1, true, false},
/* 054 */  { "\x36", 1, true, false},
/* 055 */  { "\x37", 1, true, false},
/* 056 */  { "\x38", 1, true, false},
/* 057 */  { "\x39", 1, true, false},
/* 058 */  { "\x3a", 1, true, false},
/* 059 */  { "\x3b", 1, true, false},
/* 060 */  { "\x3c", 1, true, false},
/* 061 */  { "\x3d", 1, true, false},
/* 062 */  { "\x3e", 1, true, false},
/* 063 */  { "\x3f", 1, true, false},
/* 064 */  { "\x40", 1, false, false},
/* 065 */  { "\x41", 1, true, false},
/* 066 */  { "\x42", 1, true, false},
/* 067 */  { "\x43", 1, true, false},
/* 068 */  { "\x44", 1, true, false},
/* 069 */  { "\x45", 1, true, false},
/* 070 */  { "\x46", 1, true, false},
/* 071 */  { "\x47", 1, true, false},
/* 072 */  { "\x48", 1, true, false},
/* 073 */  { "\x49", 1, true, false},
/* 074 */  { "\x4a", 1, true, false},
/* 075 */  { "\x4b", 1, true, false},
/* 076 */  { "\x4c", 1, true, false},
/* 077 */  { "\x4d", 1, true, false},
/* 078 */  { "\x4e", 1, true, false},
/* 079 */  { "\x4f", 1, true, false},
/* 080 */  { "\x50", 1, true, false},
/* 081 */  { "\x51", 1, true, false},
/* 082 */  { "\x52", 1, true, false},
/* 083 */  { "\x53", 1, true, false},
/* 084 */  { "\x54", 1, true, false},
/* 085 */  { "\x55", 1, true, false},
/* 086 */  { "\x56", 1, true, false},
/* 087 */  { "\x57", 1, true, false},
/* 088 */  { "\x58", 1, true, false},
/* 089 */  { "\x59", 1, true, false},
/* 090 */  { "\x5a", 1, true, false},
/* 091 */  { "\x5b", 1, true, false},
/* 092 */  { "\x5c", 1, true, false},
/* 093 */  { "\x5d", 1, true, false},
/* 094 */  { "\x5e", 1, true, true},
/* 095 */  { "\x5f", 1, true, false},
/* 096 */  { "\x60", 1, true, false},
/* 097 */  { "\x61", 1, true, false},
/* 098 */  { "\x62", 1, true, false},
/* 099 */  { "\x63", 1, true, false},
/* 100 */  { "\x64", 1, true, false},
/* 101 */  { "\x65", 1, true, false},
/* 102 */  { "\x66", 1, true, false},
/* 103 */  { "\x67", 1, true, false},
/* 104 */  { "\x68", 1, true, false},
/* 105 */  { "\x69", 1, true, false},
/* 106 */  { "\x6a", 1, true, false},
/* 107 */  { "\x6b", 1, true, false},
/* 108 */  { "\x6c", 1, true, false},
/* 109 */  { "\x6d", 1, true, false},
/* 110 */  { "\x6e", 1, true, false},
/* 111 */  { "\x6f", 1, true, false},
/* 112 */  { "\x70", 1, true, false},
/* 113 */  { "\x71", 1, true, false},
/* 114 */  { "\x72", 1, true, false},
/* 115 */  { "\x73", 1, true, false},
/* 116 */  { "\x74", 1, true, false},
/* 117 */  { "\x75", 1, true, false},
/* 118 */  { "\x76", 1, true, false},
/* 119 */  { "\x77", 1, true, false},
/* 120 */  { "\x78", 1, true, false},
/* 121 */  { "\x79", 1, true, false},
/* 122 */  { "\x7a", 1, true, false},
/* 123 */  { "\x7b", 1, true, false},
/* 124 */  { "\x7c", 1, true, true},
/* 125 */  { "\x7d", 1, true, false},
/* 126 */  { "\x7e", 1, true, false},
/* 127 */  { "\x7f", 1, true, false},
/* 128 */  { "\x80", 1, true, false},
/* 129 */  { "\x81", 1, true, false},
/* 130 */  { "\x82", 1, true, false},
/* 131 */  { "\x83", 1, true, false},
/* 132 */  { "\x84", 1, true, false},
/* 133 */  { "\x85", 1, true, false},
/* 134 */  { "\x86", 1, true, false},
/* 135 */  { "\x87", 1, true, false},
/* 136 */  { "\x88", 1, true, false},
/* 137 */  { "\x89", 1, true, false},
/* 138 */  { "\x8a", 1, true, false},
/* 139 */  { "\x8b", 1, true, false},
/* 140 */  { "\x8c", 1, true, false},
/* 141 */  { "\x8d", 1, true, false},
/* 142 */  { "\x8e", 1, true, false},
/* 143 */  { "\x8f", 1, true, false},
/* 144 */  { "\x90", 1, true, false},
/* 145 */  { "\x91", 1, true, false},
/* 146 */  { "\x92", 1, true, false},
/* 147 */  { "\x93", 1, true, false},
/* 148 */  { "\x94", 1, true, false},
/* 149 */  { "\x95", 1, true, false},
/* 150 */  { "\x96", 1, true, false},
/* 151 */  { "\x97", 1, true, false},
/* 152 */  { "\x98", 1, true, false},
/* 153 */  { "\x99", 1, true, false},
/* 154 */  { "\x9a", 1, true, false},
/* 155 */  { "\x9b", 1, true, false},
/* 156 */  { "\x9c", 1, true, false},
/* 157 */  { "\x9d", 1, true, false},
/* 158 */  { "\x9e", 1, true, false},
/* 159 */  { "\x9f", 1, true, false},
/* 160 */  { "\xa0", 1, true, false},
/* 161 */  { "\xa1", 1, true, false},
/* 162 */  { "\xa2", 1, true, false},
/* 163 */  { "\xa3", 1, true, false},
/* 164 */  { "\xa4", 1, true, false},
/* 165 */  { "\xa5", 1, true, false},
/* 166 */  { "\xa6", 1, true, false},
/* 167 */  { "\xa7", 1, true, false},
/* 168 */  { "\xa8", 1, true, false},
/* 169 */  { "\xa9", 1, true, false},
/* 170 */  { "\xaa", 1, true, false},
/* 171 */  { "\xab", 1, true, false},
/* 172 */  { "\xac", 1, true, false},
/* 173 */  { "\xad", 1, true, false},
/* 174 */  { "\xae", 1, true, false},
/* 175 */  { "\xaf", 1, true, false},
/* 176 */  { "\xb0", 1, true, false},
/* 177 */  { "\xb1", 1, true, false},
/* 178 */  { "\xb2", 1, true, false},
/* 179 */  { "\xb3", 1, true, false},
/* 180 */  { "\xb4", 1, true, false},
/* 181 */  { "\xb5", 1, true, false},
/* 182 */  { "\xb6", 1, true, false},
/* 183 */  { "\xb7", 1, true, false},
/* 184 */  { "\xb8", 1, true, false},
/* 185 */  { "\xb9", 1, true, false},
/* 186 */  { "\xba", 1, true, false},
/* 187 */  { "\xbb", 1, true, false},
/* 188 */  { "\xbc", 1, true, false},
/* 189 */  { "\xbd", 1, true, false},
/* 190 */  { "\xbe", 1, true, false},
/* 191 */  { "\xbf", 1, true, false},
/* 192 */  { "\xc0", 1, true, false},
/* 193 */  { "\xc1", 1, true, false},
/* 194 */  { "\xc2", 1, true, false},
/* 195 */  { "\xc3", 1, true, false},
/* 196 */  { "\xc4", 1, true, false},
/* 197 */  { "\xc5", 1, true, false},
/* 198 */  { "\xc6", 1, true, false},
/* 199 */  { "\xc7", 1, true, false},
/* 200 */  { "\xc8", 1, true, false},
/* 201 */  { "\xc9", 1, true, false},
/* 202 */  { "\xca", 1, true, false},
/* 203 */  { "\xcb", 1, true, false},
/* 204 */  { "\xcc", 1, true, false},
/* 205 */  { "\xcd", 1, true, false},
/* 206 */  { "\xce", 1, true, false},
/* 207 */  { "\xcf", 1, true, false},
/* 208 */  { "\xd0", 1, true, false},
/* 209 */  { "\xd1", 1, true, false},
/* 210 */  { "\xd2", 1, true, false},
/* 211 */  { "\xd3", 1, true, false},
/* 212 */  { "\xd4", 1, true, false},
/* 213 */  { "\xd5", 1, true, false},
/* 214 */  { "\xd6", 1, true, false},
/* 215 */  { "\xd7", 1, true, false},
/* 216 */  { "\xd8", 1, true, false},
/* 217 */  { "\xd9", 1, true, false},
/* 218 */  { "\xda", 1, true, false},
/* 219 */  { "\xdb", 1, true, false},
/* 220 */  { "\xdc", 1, true, false},
/* 221 */  { "\xdd", 1, true, false},
/* 222 */  { "\xde", 1, true, false},
/* 223 */  { "\xdf", 1, true, false},
/* 224 */  { "\xe0", 1, true, false},
/* 225 */  { "\xe1", 1, true, false},
/* 226 */  { "\xe2", 1, true, false},
/* 227 */  { "\xe3", 1, true, false},
/* 228 */  { "\xe4", 1, true, false},
/* 229 */  { "\xe5", 1, true, false},
/* 230 */  { "\xe6", 1, true, false},
/* 231 */  { "\xe7", 1, true, false},
/* 232 */  { "\xe8", 1, true, false},
/* 233 */  { "\xe9", 1, true, false},
/* 234 */  { "\xea", 1, true, false},
/* 235 */  { "\xeb", 1, true, false},
/* 236 */  { "\xec", 1, true, false},
/* 237 */  { "\xed", 1, true, false},
/* 238 */  { "\xee", 1, true, false},
/* 239 */  { "\xef", 1, true, false},
/* 240 */  { "\xf0", 1, true, false},
/* 241 */  { "\xf1", 1, true, false},
/* 242 */  { "\xf2", 1, true, false},
/* 243 */  { "\xf3", 1, true, false},
/* 244 */  { "\xf4", 1, true, false},
/* 245 */  { "\xf5", 1, true, false},
/* 246 */  { "\xf6", 1, true, false},
/* 247 */  { "\xf7", 1, true, false},
/* 248 */  { "\xf8", 1, true, false},
/* 249 */  { "\xf9", 1, true, false},
/* 250 */  { "\xfa", 1, true, false},
/* 251 */  { "\xfb", 1, true, false},
/* 252 */  { "\xfc", 1, true, false},
/* 253 */  { "\xfd", 1, true, false},
/* 254 */  { "\xfe", 1, true, false},
/* 255 */  { "\xff", 1, true, false},
/* PART 2: named tokens. */
/* 256 */  { "(unknown)", 9, true, false},
/* 257 */  { "(unknown)", 9, true, false},
/* 258 */  { "(unknown)", 9, true, false},
/* 259 */  { "ACCESSIBLE", 10, true, false},
/* 260 */  { "ACTION", 6, true, false},
/* 261 */  { "ADD", 3, true, false},
/* 262 */  { "ADDDATE", 7, true, false},
/* 263 */  { "AFTER", 5, true, false},
/* 264 */  { "AGAINST", 7, true, false},
/* 265 */  { "AGGREGATE", 9, true, false},
/* 266 */  { "ALGORITHM", 9, true, false},
/* 267 */  { "ALL", 3, true, false},
/* 268 */  { "ALTER", 5, true, false},
/* 269 */  { "ANALYSE", 7, true, false},
/* 270 */  { "ANALYZE", 7, true, false},
/* 271 */  { "&&", 2, true, true},
/* 272 */  { "AND", 3, true, true},
/* 273 */  { "SOME", 4, true, false},
/* 274 */  { "AS", 2, true, false},
/* 275 */  { "ASC", 3, true, false},
/* 276 */  { "ASCII", 5, true, false},
/* 277 */  { "ASENSITIVE", 10, true, false},
/* 278 */  { "AT", 2, true, true},
/* 279 */  { "AUTOEXTEND_SIZE", 15, true, false},
/* 280 */  { "AUTO_INCREMENT", 14, true, false},
/* 281 */  { "AVG_ROW_LENGTH", 14, true, false},
/* 282 */  { "AVG", 3, true, false},
/* 283 */  { "BACKUP", 6, true, false},
/* 284 */  { "BEFORE", 6, true, false},
/* 285 */  { "BEGIN", 5, true, false},
/* 286 */  { "BETWEEN", 7, true, true},
/* 287 */  { "INT8", 4, true, false},
/* 288 */  { "BINARY", 6, true, false},
/* 289 */  { "BINLOG", 6, true, false},
/* 290 */  { "(bin)", 5, true, false},
/* 291 */  { "BIT_AND", 7, true, false},
/* 292 */  { "BIT_OR", 6, true, false},
/* 293 */  { "BIT", 3, true, false},
/* 294 */  { "BIT_XOR", 7, true, false},
/* 295 */  { "BLOB", 4, true, false},
/* 296 */  { "BLOCK", 5, true, false},
/* 297 */  { "BOOLEAN", 7, true, false},
/* 298 */  { "BOOL", 4, true, false},
/* 299 */  { "BOTH", 4, true, false},
/* 300 */  { "BTREE", 5, true, false},
/* 301 */  { "BY", 2, true, false},
/* 302 */  { "BYTE", 4, true, false},
/* 303 */  { "CACHE", 5, true, false},
/* 304 */  { "CALL", 4, true, false},
/* 305 */  { "CASCADE", 7, true, false},
/* 306 */  { "CASCADED", 8, true, false},
/* 307 */  { "CASE", 4, true, true},
/* 308 */  { "CAST", 4, true, false},
/* 309 */  { "CATALOG_NAME", 12, true, false},
/* 310 */  { "CHAIN", 5, true, false},
/* 311 */  { "CHANGE", 6, true, false},
/* 312 */  { "CHANGED", 7, true, false},
/* 313 */  { "CHARSET", 7, true, false},
/* 314 */  { "CHARACTER", 9, true, false},
/* 315 */  { "CHECKSUM", 8, true, false},
/* 316 */  { "CHECK", 5, true, false},
/* 317 */  { "CIPHER", 6, true, false},
/* 318 */  { "CLASS_ORIGIN", 12, true, false},
/* 319 */  { "CLIENT", 6, true, false},
/* 320 */  { "CLOSE", 5, true, false},
/* 321 */  { "COALESCE", 8, true, false},
/* 322 */  { "CODE", 4, true, false},
/* 323 */  { "COLLATE", 7, true, false},
/* 324 */  { "COLLATION", 9, true, false},
/* 325 */  { "FIELDS", 6, true, false},
/* 326 */  { "COLUMN", 6, true, false},
/* 327 */  { "COLUMN_FORMAT", 13, true, false},
/* 328 */  { "COLUMN_NAME", 11, true, false},
/* 329 */  { "COMMENT", 7, true, false},
/* 330 */  { "COMMITTED", 9, true, false},
/* 331 */  { "COMMIT", 6, true, false},
/* 332 */  { "COMPACT", 7, true, false},
/* 333 */  { "COMPLETION", 10, true, false},
/* 334 */  { "COMPRESSED", 10, true, false},
/* 335 */  { "CONCURRENT", 10, true, false},
/* 336 */  { "CONDITION", 9, true, false},
/* 337 */  { "CONNECTION", 10, true, false},
/* 338 */  { "CONSISTENT", 10, true, false},
/* 339 */  { "CONSTRAINT", 10, true, false},
/* 340 */  { "CONSTRAINT_CATALOG", 18, true, false},
/* 341 */  { "CONSTRAINT_NAME", 15, true, false},
/* 342 */  { "CONSTRAINT_SCHEMA", 17, true, false},
/* 343 */  { "CONTAINS", 8, true, false},
/* 344 */  { "CONTEXT", 7, true, false},
/* 345 */  { "CONTINUE", 8, true, false},
/* 346 */  { "CONVERT", 7, true, false},
/* 347 */  { "COUNT", 5, true, false},
/* 348 */  { "CPU", 3, true, false},
/* 349 */  { "CREATE", 6, true, false},
/* 350 */  { "CROSS", 5, true, false},
/* 351 */  { "CUBE", 4, true, false},
/* 352 */  { "CURDATE", 7, true, false},
/* 353 */  { "CURRENT", 7, true, false},
/* 354 */  { "CURRENT_USER", 12, true, false},
/* 355 */  { "CURSOR", 6, true, false},
/* 356 */  { "CURSOR_NAME", 11, true, false},
/* 357 */  { "CURTIME", 7, true, false},
/* 358 */  { "SCHEMA", 6, true, false},
/* 359 */  { "SCHEMAS", 7, true, false},
/* 360 */  { "DATAFILE", 8, true, false},
/* 361 */  { "DATA", 4, true, false},
/* 362 */  { "DATETIME", 8, true, false},
/* 363 */  { "DATE_ADD", 8, true, false},
/* 364 */  { "DATE_SUB", 8, true, false},
/* 365 */  { "DATE", 4, true, false},
/* 366 */  { "DAY_HOUR", 8, true, false},
/* 367 */  { "DAY_MICROSECOND", 15, true, false},
/* 368 */  { "DAY_MINUTE", 10, true, false},
/* 369 */  { "DAY_SECOND", 10, true, false},
/* 370 */  { "SQL_TSI_DAY", 11, true, false},
/* 371 */  { "DEALLOCATE", 10, true, false},
/* 372 */  { "(decimal)", 9, true, false},
/* 373 */  { "DECIMAL", 7, true, false},
/* 374 */  { "DECLARE", 7, true, false},
/* 375 */  { "DEFAULT", 7, true, true},
/* 376 */  { "DEFAULT_AUTH", 12, true, false},
/* 377 */  { "DEFINER", 7, true, false},
/* 378 */  { "DELAYED", 7, true, false},
/* 379 */  { "DELAY_KEY_WRITE", 15, true, false},
/* 380 */  { "DELETE", 6, true, false},
/* 381 */  { "DESC", 4, true, false},
/* 382 */  { "EXPLAIN", 7, true, false},
/* 383 */  { "DES_KEY_FILE", 12, true, false},
/* 384 */  { "DETERMINISTIC", 13, true, false},
/* 385 */  { "DIAGNOSTICS", 11, true, false},
/* 386 */  { "DIRECTORY", 9, true, false},
/* 387 */  { "DISABLE", 7, true, false},
/* 388 */  { "DISCARD", 7, true, false},
/* 389 */  { "DISK", 4, true, false},
/* 390 */  { "DISTINCTROW", 11, true, false},
/* 391 */  { "DIV", 3, true, true},
/* 392 */  { "FLOAT8", 6, true, false},
/* 393 */  { "DO", 2, true, false},
/* 394 */  { "DROP", 4, true, false},
/* 395 */  { "DUAL", 4, true, false},
/* 396 */  { "DUMPFILE", 8, true, false},
/* 397 */  { "DUPLICATE", 9, true, false},
/* 398 */  { "DYNAMIC", 7, true, false},
/* 399 */  { "EACH", 4, true, false},
/* 400 */  { "ELSE", 4, true, false},
/* 401 */  { "ELSEIF", 6, true, true},
/* 402 */  { "ENABLE", 6, true, false},
/* 403 */  { "ENCLOSED", 8, true, false},
/* 404 */  { "END", 3, true, false},
/* 405 */  { "ENDS", 4, true, true},
/* 406 */  { "", 0, true, false},
/* 407 */  { "ENGINES", 7, true, false},
/* 408 */  { "ENGINE", 6, true, false},
/* 409 */  { "ENUM", 4, true, false},
/* 410 */  { "=", 1, true, false},
/* 411 */  { "<=>", 3, true, false},
/* 412 */  { "ERROR", 5, true, false},
/* 413 */  { "ERRORS", 6, true, false},
/* 414 */  { "ESCAPED", 7, true, false},
/* 415 */  { "ESCAPE", 6, true, false},
/* 416 */  { "EVENTS", 6, true, false},
/* 417 */  { "EVENT", 5, true, false},
/* 418 */  { "EVERY", 5, true, true},
/* 419 */  { "EXCHANGE", 8, true, false},
/* 420 */  { "EXECUTE", 7, true, false},
/* 421 */  { "EXISTS", 6, true, false},
/* 422 */  { "EXIT", 4, true, false},
/* 423 */  { "EXPANSION", 9, true, false},
/* 424 */  { "EXPIRE", 6, true, false},
/* 425 */  { "EXPORT", 6, true, false},
/* 426 */  { "EXTENDED", 8, true, false},
/* 427 */  { "EXTENT_SIZE", 11, true, false},
/* 428 */  { "EXTRACT", 7, true, false},
/* 429 */  { "FALSE", 5, true, false},
/* 430 */  { "FAST", 4, true, false},
/* 431 */  { "FAULTS", 6, true, false},
/* 432 */  { "FETCH", 5, true, false},
/* 433 */  { "FILE", 4, true, false},
/* 434 */  { "FIRST", 5, true, false},
/* 435 */  { "FIXED", 5, true, false},
/* 436 */  { "(float)", 7, true, false},
/* 437 */  { "FLOAT4", 6, true, false},
/* 438 */  { "FLUSH", 5, true, false},
/* 439 */  { "FORCE", 5, true, false},
/* 440 */  { "FOREIGN", 7, true, false},
/* 441 */  { "FOR", 3, true, false},
/* 442 */  { "FORMAT", 6, true, false},
/* 443 */  { "FOUND", 5, true, false},
/* 444 */  { "FROM", 4, true, false},
/* 445 */  { "FULL", 4, true, false},
/* 446 */  { "FULLTEXT", 8, true, false},
/* 447 */  { "FUNCTION", 8, true, false},
/* 448 */  { ">=", 2, true, false},
/* 449 */  { "GENERAL", 7, true, false},
/* 450 */  { "GEOMETRYCOLLECTION", 18, true, false},
/* 451 */  { "GEOMETRY", 8, true, false},
/* 452 */  { "GET_FORMAT", 10, true, false},
/* 453 */  { "GET", 3, true, false},
/* 454 */  { "GLOBAL", 6, true, false},
/* 455 */  { "GRANT", 5, true, false},
/* 456 */  { "GRANTS", 6, true, false},
/* 457 */  { "GROUP", 5, true, false},
/* 458 */  { "GROUP_CONCAT", 12, true, false},
/* 459 */  { ">", 1, true, false},
/* 460 */  { "HANDLER", 7, true, false},
/* 461 */  { "HASH", 4, true, false},
/* 462 */  { "HAVING", 6, true, false},
/* 463 */  { "HELP", 4, true, false},
/* 464 */  { "(hex)", 5, true, false},
/* 465 */  { "HIGH_PRIORITY", 13, true, false},
/* 466 */  { "HOST", 4, true, false},
/* 467 */  { "HOSTS", 5, true, false},
/* 468 */  { "HOUR_MICROSECOND", 16, true, false},
/* 469 */  { "HOUR_MINUTE", 11, true, false},
/* 470 */  { "HOUR_SECOND", 11, true, false},
/* 471 */  { "SQL_TSI_HOUR", 12, true, false},
/* 472 */  { "(id)", 4, true, false},
/* 473 */  { "IDENTIFIED", 10, true, false},
/* 474 */  { "(id_quoted)", 11, true, false},
/* 475 */  { "IF", 2, true, true},
/* 476 */  { "IGNORE", 6, true, false},
/* 477 */  { "IGNORE_SERVER_IDS", 17, true, false},
/* 478 */  { "IMPORT", 6, true, false},
/* 479 */  { "INDEXES", 7, true, false},
/* 480 */  { "INDEX", 5, true, false},
/* 481 */  { "INFILE", 6, true, false},
/* 482 */  { "INITIAL_SIZE", 12, true, false},
/* 483 */  { "INNER", 5, true, false},
/* 484 */  { "INOUT", 5, true, false},
/* 485 */  { "INSENSITIVE", 11, true, false},
/* 486 */  { "INSERT", 6, true, false},
/* 487 */  { "INSERT_METHOD", 13, true, false},
/* 488 */  { "INSTALL", 7, true, false},
/* 489 */  { "INTERVAL", 8, true, true},
/* 490 */  { "INTO", 4, true, false},
/* 491 */  { "INTEGER", 7, true, false},
/* 492 */  { "INVOKER", 7, true, false},
/* 493 */  { "IN", 2, true, false},
/* 494 */  { "IO_AFTER_GTIDS", 14, true, false},
/* 495 */  { "IO_BEFORE_GTIDS", 15, true, false},
/* 496 */  { "IO", 2, true, false},
/* 497 */  { "IPC", 3, true, false},
/* 498 */  { "IS", 2, true, false},
/* 499 */  { "ISOLATION", 9, true, false},
/* 500 */  { "ISSUER", 6, true, false},
/* 501 */  { "ITERATE", 7, true, false},
/* 502 */  { "JOIN", 4, true, false},
/* 503 */  { "KEYS", 4, true, false},
/* 504 */  { "KEY_BLOCK_SIZE", 14, true, false},
/* 505 */  { "KEY", 3, true, false},
/* 506 */  { "KILL", 4, true, false},
/* 507 */  { "LANGUAGE", 8, true, false},
/* 508 */  { "LAST", 4, true, false},
/* 509 */  { "<=", 2, true, false},
/* 510 */  { "LEADING", 7, true, false},
/* 511 */  { "LEAVES", 6, true, false},
/* 512 */  { "LEAVE", 5, true, false},
/* 513 */  { "LEFT", 4, true, false},
/* 514 */  { "LESS", 4, true, false},
/* 515 */  { "LEVEL", 5, true, false},
/* 516 */  { "(hostname)", 10, true, false},
/* 517 */  { "LIKE", 4, true, true},
/* 518 */  { "LIMIT", 5, true, false},
/* 519 */  { "LINEAR", 6, true, false},
/* 520 */  { "LINES", 5, true, false},
/* 521 */  { "LINESTRING", 10, true, false},
/* 522 */  { "LIST", 4, true, false},
/* 523 */  { "LOAD", 4, true, false},
/* 524 */  { "LOCAL", 5, true, false},
/* 525 */  { "LOCATOR", 7, true, false},
/* 526 */  { "LOCKS", 5, true, false},
/* 527 */  { "LOCK", 4, true, false},
/* 528 */  { "LOGFILE", 7, true, false},
/* 529 */  { "LOGS", 4, true, false},
/* 530 */  { "LONGBLOB", 8, true, false},
/* 531 */  { "LONGTEXT", 8, true, false},
/* 532 */  { "(long)", 6, true, false},
/* 533 */  { "LONG", 4, true, false},
/* 534 */  { "LOOP", 4, true, false},
/* 535 */  { "LOW_PRIORITY", 12, true, false},
/* 536 */  { "<", 1, true, false},
/* 537 */  { "MASTER_AUTO_POSITION", 20, true, false},
/* 538 */  { "MASTER_BIND", 11, true, false},
/* 539 */  { "MASTER_CONNECT_RETRY", 20, true, false},
/* 540 */  { "MASTER_DELAY", 12, true, false},
/* 541 */  { "MASTER_HOST", 11, true, false},
/* 542 */  { "MASTER_LOG_FILE", 15, true, false},
/* 543 */  { "MASTER_LOG_POS", 14, true, false},
/* 544 */  { "MASTER_PASSWORD", 15, true, false},
/* 545 */  { "MASTER_PORT", 11, true, false},
/* 546 */  { "MASTER_RETRY_COUNT", 18, true, false},
/* 547 */  { "MASTER_SERVER_ID", 16, true, false},
/* 548 */  { "MASTER_SSL_CAPATH", 17, true, false},
/* 549 */  { "MASTER_SSL_CA", 13, true, false},
/* 550 */  { "MASTER_SSL_CERT", 15, true, false},
/* 551 */  { "MASTER_SSL_CIPHER", 17, true, false},
/* 552 */  { "MASTER_SSL_CRL", 14, true, false},
/* 553 */  { "MASTER_SSL_CRLPATH", 18, true, false},
/* 554 */  { "MASTER_SSL_KEY", 14, true, false},
/* 555 */  { "MASTER_SSL", 10, true, false},
/* 556 */  { "MASTER_SSL_VERIFY_SERVER_CERT", 29, true, false},
/* 557 */  { "MASTER", 6, true, false},
/* 558 */  { "MASTER_USER", 11, true, false},
/* 559 */  { "MASTER_HEARTBEAT_PERIOD", 23, true, false},
/* 560 */  { "MATCH", 5, true, false},
/* 561 */  { "MAX_CONNECTIONS_PER_HOUR", 24, true, false},
/* 562 */  { "MAX_QUERIES_PER_HOUR", 20, true, false},
/* 563 */  { "MAX_ROWS", 8, true, false},
/* 564 */  { "MAX_SIZE", 8, true, false},
/* 565 */  { "MAX", 3, true, false},
/* 566 */  { "MAX_UPDATES_PER_HOUR", 20, true, false},
/* 567 */  { "MAX_USER_CONNECTIONS", 20, true, false},
/* 568 */  { "MAXVALUE", 8, true, false},
/* 569 */  { "MEDIUMBLOB", 10, true, false},
/* 570 */  { "MIDDLEINT", 9, true, false},
/* 571 */  { "MEDIUMTEXT", 10, true, false},
/* 572 */  { "MEDIUM", 6, true, false},
/* 573 */  { "MEMORY", 6, true, false},
/* 574 */  { "MERGE", 5, true, false},
/* 575 */  { "MESSAGE_TEXT", 12, true, false},
/* 576 */  { "MICROSECOND", 11, true, false},
/* 577 */  { "MIGRATE", 7, true, false},
/* 578 */  { "MINUTE_MICROSECOND", 18, true, false},
/* 579 */  { "MINUTE_SECOND", 13, true, false},
/* 580 */  { "SQL_TSI_MINUTE", 14, true, false},
/* 581 */  { "MIN_ROWS", 8, true, false},
/* 582 */  { "MIN", 3, true, false},
/* 583 */  { "MODE", 4, true, false},
/* 584 */  { "MODIFIES", 8, true, false},
/* 585 */  { "MODIFY", 6, true, false},
/* 586 */  { "MOD", 3, true, true},
/* 587 */  { "SQL_TSI_MONTH", 13, true, false},
/* 588 */  { "MULTILINESTRING", 15, true, false},
/* 589 */  { "MULTIPOINT", 10, true, false},
/* 590 */  { "MULTIPOLYGON", 12, true, false},
/* 591 */  { "MUTEX", 5, true, false},
/* 592 */  { "MYSQL_ERRNO", 11, true, false},
/* 593 */  { "NAMES", 5, true, false},
/* 594 */  { "NAME", 4, true, false},
/* 595 */  { "NATIONAL", 8, true, false},
/* 596 */  { "NATURAL", 7, true, false},
/* 597 */  { "(nchar)", 7, true, false},
/* 598 */  { "NCHAR", 5, true, false},
/* 599 */  { "NDBCLUSTER", 10, true, false},
/* 600 */  { "!=", 2, true, false},
/* 601 */  { "~", 1, true, false},
/* 602 */  { "NEW", 3, true, false},
/* 603 */  { "NEXT", 4, true, false},
/* 604 */  { "NODEGROUP", 9, true, false},
/* 605 */  { "NONE", 4, true, false},
/* 606 */  { "!", 1, true, false},
/* 607 */  { "NOT", 3, true, true},
/* 608 */  { "NOW", 3, true, false},
/* 609 */  { "NO", 2, true, false},
/* 610 */  { "NO_WAIT", 7, true, false},
/* 611 */  { "NO_WRITE_TO_BINLOG", 18, true, false},
/* 612 */  { "NULL", 4, true, false},
/* 613 */  { "(num)", 5, true, false},
/* 614 */  { "NUMBER", 6, true, false},
/* 615 */  { "NUMERIC", 7, true, false},
/* 616 */  { "NVARCHAR", 8, true, false},
/* 617 */  { "OFFSET", 6, true, false},
/* 618 */  { "OLD_PASSWORD", 12, true, false},
/* 619 */  { "ON", 2, true, false},
/* 620 */  { "ONE", 3, true, false},
/* 621 */  { "ONLY", 4, true, false},
/* 622 */  { "OPEN", 4, true, false},
/* 623 */  { "OPTIMIZE", 8, true, false},
/* 624 */  { "OPTIONS", 7, true, false},
/* 625 */  { "OPTION", 6, true, false},
/* 626 */  { "OPTIONALLY", 10, true, false},
/* 627 */  { "|", 1, true, true},
/* 628 */  { "ORDER", 5, true, false},
/* 629 */  { "||", 2, true, false},
/* 630 */  { "OR", 2, true, true},
/* 631 */  { "OUTER", 5, true, false},
/* 632 */  { "OUTFILE", 7, true, false},
/* 633 */  { "OUT", 3, true, false},
/* 634 */  { "OWNER", 5, true, false},
/* 635 */  { "PACK_KEYS", 9, true, false},
/* 636 */  { "PAGE", 4, true, false},
/* 637 */  { "?", 1, true, false},
/* 638 */  { "PARSER", 6, true, false},
/* 639 */  { "PARTIAL", 7, true, false},
/* 640 */  { "PARTITION", 9, true, false},
/* 641 */  { "PARTITIONS", 10, true, false},
/* 642 */  { "PARTITIONING", 12, true, false},
/* 643 */  { "PASSWORD", 8, true, false},
/* 644 */  { "PHASE", 5, true, false},
/* 645 */  { "PLUGIN_DIR", 10, true, false},
/* 646 */  { "PLUGIN", 6, true, false},
/* 647 */  { "PLUGINS", 7, true, false},
/* 648 */  { "POINT", 5, true, false},
/* 649 */  { "POLYGON", 7, true, false},
/* 650 */  { "PORT", 4, true, false},
/* 651 */  { "POSITION", 8, true, false},
/* 652 */  { "PRECISION", 9, true, false},
/* 653 */  { "PREPARE", 7, true, false},
/* 654 */  { "PRESERVE", 8, true, false},
/* 655 */  { "PREV", 4, true, false},
/* 656 */  { "PRIMARY", 7, true, false},
/* 657 */  { "PRIVILEGES", 10, true, false},
/* 658 */  { "PROCEDURE", 9, true, false},
/* 659 */  { "PROCESS", 7, true, false},
/* 660 */  { "PROCESSLIST", 11, true, false},
/* 661 */  { "PROFILE", 7, true, false},
/* 662 */  { "PROFILES", 8, true, false},
/* 663 */  { "PROXY", 5, true, false},
/* 664 */  { "PURGE", 5, true, false},
/* 665 */  { "SQL_TSI_QUARTER", 15, true, false},
/* 666 */  { "QUERY", 5, true, false},
/* 667 */  { "QUICK", 5, true, false},
/* 668 */  { "RANGE", 5, true, false},
/* 669 */  { "READS", 5, true, false},
/* 670 */  { "READ_ONLY", 9, true, false},
/* 671 */  { "READ", 4, true, false},
/* 672 */  { "READ_WRITE", 10, true, false},
/* 673 */  { "REAL", 4, true, false},
/* 674 */  { "REBUILD", 7, true, false},
/* 675 */  { "RECOVER", 7, true, false},
/* 676 */  { "REDOFILE", 8, true, false},
/* 677 */  { "REDO_BUFFER_SIZE", 16, true, false},
/* 678 */  { "REDUNDANT", 9, true, false},
/* 679 */  { "REFERENCES", 10, true, false},
/* 680 */  { "RLIKE", 5, true, true},
/* 681 */  { "RELAY", 5, true, false},
/* 682 */  { "RELAYLOG", 8, true, false},
/* 683 */  { "RELAY_LOG_FILE", 14, true, false},
/* 684 */  { "RELAY_LOG_POS", 13, true, false},
/* 685 */  { "RELAY_THREAD", 12, true, false},
/* 686 */  { "RELEASE", 7, true, false},
/* 687 */  { "RELOAD", 6, true, false},
/* 688 */  { "REMOVE", 6, true, false},
/* 689 */  { "RENAME", 6, true, false},
/* 690 */  { "REORGANIZE", 10, true, false},
/* 691 */  { "REPAIR", 6, true, false},
/* 692 */  { "REPEATABLE", 10, true, false},
/* 693 */  { "REPEAT", 6, true, false},
/* 694 */  { "REPLACE", 7, true, false},
/* 695 */  { "REPLICATION", 11, true, false},
/* 696 */  { "REQUIRE", 7, true, false},
/* 697 */  { "RESET", 5, true, false},
/* 698 */  { "RESIGNAL", 8, true, false},
/* 699 */  { "USER_RESOURCES", 14, true, false},
/* 700 */  { "RESTORE", 7, true, false},
/* 701 */  { "RESTRICT", 8, true, false},
/* 702 */  { "RESUME", 6, true, false},
/* 703 */  { "RETURNED_SQLSTATE", 17, true, false},
/* 704 */  { "RETURNS", 7, true, false},
/* 705 */  { "RETURN", 6, true, true},
/* 706 */  { "REVERSE", 7, true, false},
/* 707 */  { "REVOKE", 6, true, false},
/* 708 */  { "RIGHT", 5, true, false},
/* 709 */  { "ROLLBACK", 8, true, false},
/* 710 */  { "ROLLUP", 6, true, false},
/* 711 */  { "ROUTINE", 7, true, false},
/* 712 */  { "ROWS", 4, true, false},
/* 713 */  { "ROW_FORMAT", 10, true, false},
/* 714 */  { "ROW", 3, true, false},
/* 715 */  { "ROW_COUNT", 9, true, false},
/* 716 */  { "RTREE", 5, true, false},
/* 717 */  { "SAVEPOINT", 9, true, false},
/* 718 */  { "SCHEDULE", 8, true, false},
/* 719 */  { "SCHEMA_NAME", 11, true, false},
/* 720 */  { "SECOND_MICROSECOND", 18, true, false},
/* 721 */  { "SQL_TSI_SECOND", 14, true, false},
/* 722 */  { "SECURITY", 8, true, false},
/* 723 */  { "SELECT", 6, true, true},
/* 724 */  { "SENSITIVE", 9, true, false},
/* 725 */  { "SEPARATOR", 9, true, false},
/* 726 */  { "SERIALIZABLE", 12, true, false},
/* 727 */  { "SERIAL", 6, true, false},
/* 728 */  { "SESSION", 7, true, false},
/* 729 */  { "SERVER", 6, true, false},
/* 730 */  { "SERVER_OPTIONS", 14, true, false},
/* 731 */  { "SET", 3, true, false},
/* 732 */  { ":=", 2, true, false},
/* 733 */  { "SHARE", 5, true, false},
/* 734 */  { "<<", 2, true, true},
/* 735 */  { ">>", 2, true, true},
/* 736 */  { "SHOW", 4, true, false},
/* 737 */  { "SHUTDOWN", 8, true, false},
/* 738 */  { "SIGNAL", 6, true, false},
/* 739 */  { "SIGNED", 6, true, false},
/* 740 */  { "SIMPLE", 6, true, false},
/* 741 */  { "SLAVE", 5, true, false},
/* 742 */  { "SLOW", 4, true, false},
/* 743 */  { "SMALLINT", 8, true, false},
/* 744 */  { "SNAPSHOT", 8, true, false},
/* 745 */  { "SOCKET", 6, true, false},
/* 746 */  { "SONAME", 6, true, false},
/* 747 */  { "SOUNDS", 6, true, false},
/* 748 */  { "SOURCE", 6, true, false},
/* 749 */  { "SPATIAL", 7, true, false},
/* 750 */  { "SPECIFIC", 8, true, false},
/* 751 */  { "SQLEXCEPTION", 12, true, false},
/* 752 */  { "SQLSTATE", 8, true, false},
/* 753 */  { "SQLWARNING", 10, true, false},
/* 754 */  { "SQL_AFTER_GTIDS", 15, true, false},
/* 755 */  { "SQL_AFTER_MTS_GAPS", 18, true, false},
/* 756 */  { "SQL_BEFORE_GTIDS", 16, true, false},
/* 757 */  { "SQL_BIG_RESULT", 14, true, false},
/* 758 */  { "SQL_BUFFER_RESULT", 17, true, false},
/* 759 */  { "SQL_CACHE", 9, true, false},
/* 760 */  { "SQL_CALC_FOUND_ROWS", 19, true, false},
/* 761 */  { "SQL_NO_CACHE", 12, true, false},
/* 762 */  { "SQL_SMALL_RESULT", 16, true, false},
/* 763 */  { "SQL", 3, true, false},
/* 764 */  { "SQL_THREAD", 10, true, false},
/* 765 */  { "SSL", 3, true, false},
/* 766 */  { "STARTING", 8, true, false},
/* 767 */  { "STARTS", 6, true, true},
/* 768 */  { "START", 5, true, false},
/* 769 */  { "STATS_AUTO_RECALC", 17, true, false},
/* 770 */  { "STATS_PERSISTENT", 16, true, false},
/* 771 */  { "STATS_SAMPLE_PAGES", 18, true, false},
/* 772 */  { "STATUS", 6, true, false},
/* 773 */  { "STDDEV_SAMP", 11, true, false},
/* 774 */  { "STDDEV_POP", 10, true, false},
/* 775 */  { "STOP", 4, true, false},
/* 776 */  { "STORAGE", 7, true, false},
/* 777 */  { "STRAIGHT_JOIN", 13, true, false},
/* 778 */  { "STRING", 6, true, false},
/* 779 */  { "SUBCLASS_ORIGIN", 15, true, false},
/* 780 */  { "SUBDATE", 7, true, false},
/* 781 */  { "SUBJECT", 7, true, false},
/* 782 */  { "SUBPARTITIONS", 13, true, false},
/* 783 */  { "SUBPARTITION", 12, true, false},
/* 784 */  { "SUBSTRING", 9, true, false},
/* 785 */  { "SUM", 3, true, false},
/* 786 */  { "SUPER", 5, true, false},
/* 787 */  { "SUSPEND", 7, true, false},
/* 788 */  { "SWAPS", 5, true, false},
/* 789 */  { "SWITCHES", 8, true, false},
/* 790 */  { "SYSDATE", 7, true, false},
/* 791 */  { "TABLES", 6, true, false},
/* 792 */  { "TABLESPACE", 10, true, false},
/* 793 */  { "TABLE_REF_PRIORITY", 18, true, false},
/* 794 */  { "TABLE", 5, true, false},
/* 795 */  { "TABLE_CHECKSUM", 14, true, false},
/* 796 */  { "TABLE_NAME", 10, true, false},
/* 797 */  { "TEMPORARY", 9, true, false},
/* 798 */  { "TEMPTABLE", 9, true, false},
/* 799 */  { "TERMINATED", 10, true, false},
/* 800 */  { "(text)", 6, true, false},
/* 801 */  { "TEXT", 4, true, false},
/* 802 */  { "THAN", 4, true, false},
/* 803 */  { "THEN", 4, true, false},
/* 804 */  { "TIMESTAMP", 9, true, false},
/* 805 */  { "TIMESTAMPADD", 12, true, false},
/* 806 */  { "TIMESTAMPDIFF", 13, true, false},
/* 807 */  { "TIME", 4, true, false},
/* 808 */  { "TINYBLOB", 8, true, false},
/* 809 */  { "TINYINT", 7, true, false},
/* 810 */  { "TINYTEXT", 8, true, false},
/* 811 */  { "TO", 2, true, false},
/* 812 */  { "TRAILING", 8, true, false},
/* 813 */  { "TRANSACTION", 11, true, false},
/* 814 */  { "TRIGGERS", 8, true, false},
/* 815 */  { "TRIGGER", 7, true, false},
/* 816 */  { "TRIM", 4, true, false},
/* 817 */  { "TRUE", 4, true, false},
/* 818 */  { "TRUNCATE", 8, true, false},
/* 819 */  { "TYPES", 5, true, false},
/* 820 */  { "TYPE", 4, true, false},
/* 821 */  { "UDF_RETURNS", 11, true, false},
/* 822 */  { "(ulonglong)", 11, true, false},
/* 823 */  { "UNCOMMITTED", 11, true, false},
/* 824 */  { "UNDEFINED", 9, true, false},
/* 825 */  { "(_charset)", 10, true, false},
/* 826 */  { "UNDOFILE", 8, true, false},
/* 827 */  { "UNDO_BUFFER_SIZE", 16, true, false},
/* 828 */  { "UNDO", 4, true, false},
/* 829 */  { "UNICODE", 7, true, false},
/* 830 */  { "UNINSTALL", 9, true, false},
/* 831 */  { "UNION", 5, true, false},
/* 832 */  { "UNIQUE", 6, true, false},
/* 833 */  { "UNKNOWN", 7, true, false},
/* 834 */  { "UNLOCK", 6, true, false},
/* 835 */  { "UNSIGNED", 8, true, false},
/* 836 */  { "UNTIL", 5, true, true},
/* 837 */  { "UPDATE", 6, true, false},
/* 838 */  { "UPGRADE", 7, true, false},
/* 839 */  { "USAGE", 5, true, false},
/* 840 */  { "SYSTEM_USER", 11, true, false},
/* 841 */  { "USE_FRM", 7, true, false},
/* 842 */  { "USE", 3, true, false},
/* 843 */  { "USING", 5, true, false},
/* 844 */  { "UTC_DATE", 8, true, false},
/* 845 */  { "UTC_TIMESTAMP", 13, true, false},
/* 846 */  { "UTC_TIME", 8, true, false},
/* 847 */  { "VALUES", 6, true, false},
/* 848 */  { "VALUE", 5, true, false},
/* 849 */  { "VARBINARY", 9, true, false},
/* 850 */  { "VARCHARACTER", 12, true, false},
/* 851 */  { "VARIABLES", 9, true, false},
/* 852 */  { "VAR_POP", 7, true, false},
/* 853 */  { "VARYING", 7, true, false},
/* 854 */  { "VAR_SAMP", 8, true, false},
/* 855 */  { "VIEW", 4, true, false},
/* 856 */  { "WAIT", 4, true, false},
/* 857 */  { "WARNINGS", 8, true, false},
/* 858 */  { "WEEK", 4, true, false},
/* 859 */  { "WEIGHT_STRING", 13, true, false},
/* 860 */  { "WHEN", 4, true, true},
/* 861 */  { "WHERE", 5, true, false},
/* 862 */  { "WHILE", 5, true, true},
/* 863 */  { "WITH", 4, true, false},
/* 864 */  { "WITH CUBE", 9, true, false},
/* 865 */  { "WITH ROLLUP", 11, true, false},
/* 866 */  { "WORK", 4, true, false},
/* 867 */  { "WRAPPER", 7, true, false},
/* 868 */  { "WRITE", 5, true, false},
/* 869 */  { "X509", 4, true, false},
/* 870 */  { "XA", 2, true, false},
/* 871 */  { "XML", 3, true, false},
/* 872 */  { "XOR", 3, true, true},
/* 873 */  { "YEAR_MONTH", 10, true, false},
/* 874 */  { "YEAR", 4, true, false},
/* 875 */  { "ZEROFILL", 8, true, false},
/* 876 */  { "?", 1, true, false},
/* 877 */  { "?, ...", 6, true, false},
/* 878 */  { "(?)", 3, true, false},
/* 879 */  { "(?) /* , ... */", 15, true, false},
/* 880 */  { "(...)", 5, true, false},
/* 881 */  { "(...) /* , ... */", 17, true, false},
/* 882 */  { "UNUSED", 6, true, false},
/* DUMMY */ { "", 0, false, false}
};
#endif /* LEX_TOKEN_WITH_DEFINITION */
/* DIGEST specific tokens. */
#define TOK_GENERIC_VALUE 876
#define TOK_GENERIC_VALUE_LIST 877
#define TOK_ROW_SINGLE_VALUE 878
#define TOK_ROW_SINGLE_VALUE_LIST 879
#define TOK_ROW_MULTIPLE_VALUE 880
#define TOK_ROW_MULTIPLE_VALUE_LIST 881
#define TOK_UNUSED 882
