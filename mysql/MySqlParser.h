
// Generated from MySqlParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace parsers {


class  MySqlParser : public antlr4::Parser {
public:
  enum {
    SPACE = 1, SPEC_MYSQL_COMMENT = 2, COMMENT_INPUT = 3, LINE_COMMENT = 4, 
    ADD = 5, ALL = 6, ALTER = 7, ALWAYS = 8, ANALYZE = 9, AND = 10, AS = 11, 
    ASC = 12, BEFORE = 13, BETWEEN = 14, BOTH = 15, BY = 16, CALL = 17, 
    CASCADE = 18, CASE = 19, CAST = 20, CHANGE = 21, CHARACTER = 22, CHECK = 23, 
    COLLATE = 24, COLUMN = 25, CONDITION = 26, CONSTRAINT = 27, CONTINUE = 28, 
    CONVERT = 29, CREATE = 30, CROSS = 31, CURRENT_USER = 32, CURSOR = 33, 
    DATABASE = 34, DATABASES = 35, DECLARE = 36, DEFAULT = 37, DELAYED = 38, 
    DELETE = 39, DESC = 40, DESCRIBE = 41, DETERMINISTIC = 42, DISTINCT = 43, 
    DISTINCTROW = 44, DROP = 45, EACH = 46, ELSE = 47, ELSEIF = 48, ENCLOSED = 49, 
    ESCAPED = 50, EXISTS = 51, EXIT = 52, EXPLAIN = 53, FALSE = 54, FETCH = 55, 
    FOR = 56, FORCE = 57, FOREIGN = 58, FROM = 59, FULLTEXT = 60, GENERATED = 61, 
    GRANT = 62, GROUP = 63, HAVING = 64, HIGH_PRIORITY = 65, IF = 66, IGNORE = 67, 
    IN = 68, INDEX = 69, INFILE = 70, INNER = 71, INOUT = 72, INSERT = 73, 
    INTERVAL = 74, INTO = 75, IS = 76, ITERATE = 77, JOIN = 78, KEY = 79, 
    KEYS = 80, KILL = 81, LEADING = 82, LEAVE = 83, LEFT = 84, LIKE = 85, 
    LIMIT = 86, LINEAR = 87, LINES = 88, LOAD = 89, LOCK = 90, LOOP = 91, 
    LOW_PRIORITY = 92, MASTER_BIND = 93, MASTER_SSL_VERIFY_SERVER_CERT = 94, 
    MATCH = 95, MAXVALUE = 96, MODIFIES = 97, NATURAL = 98, NOT = 99, NO_WRITE_TO_BINLOG = 100, 
    NULL_LITERAL = 101, ON = 102, OPTIMIZE = 103, OPTION = 104, OPTIONALLY = 105, 
    OR = 106, ORDER = 107, OUT = 108, OUTER = 109, OUTFILE = 110, PARTITION = 111, 
    PRIMARY = 112, PROCEDURE = 113, PURGE = 114, RANGE = 115, READ = 116, 
    READS = 117, REFERENCES = 118, REGEXP = 119, RELEASE = 120, RENAME = 121, 
    REPEAT = 122, REPLACE = 123, REQUIRE = 124, RESTRICT = 125, RETURN = 126, 
    REVOKE = 127, RIGHT = 128, RLIKE = 129, SCHEMA = 130, SCHEMAS = 131, 
    SELECT = 132, SET = 133, SEPARATOR = 134, SHOW = 135, SIGNAL = 136, 
    SPATIAL = 137, SQL = 138, SQLEXCEPTION = 139, SQLSTATE = 140, SQLWARNING = 141, 
    SQL_BIG_RESULT = 142, SQL_CALC_FOUND_ROWS = 143, SQL_SMALL_RESULT = 144, 
    SSL = 145, STARTING = 146, STRAIGHT_JOIN = 147, TABLE = 148, TERMINATED = 149, 
    THEN = 150, TO = 151, TRAILING = 152, TRIGGER = 153, TRUE = 154, UNDO = 155, 
    UNION = 156, UNIQUE = 157, UNLOCK = 158, UNSIGNED = 159, UPDATE = 160, 
    USAGE = 161, USE = 162, USING = 163, VALUES = 164, WHEN = 165, WHERE = 166, 
    WHILE = 167, WITH = 168, WRITE = 169, XOR = 170, ZEROFILL = 171, TINYINT = 172, 
    SMALLINT = 173, MEDIUMINT = 174, INT = 175, INTEGER = 176, BIGINT = 177, 
    REAL = 178, DOUBLE = 179, PRECISION = 180, FLOAT = 181, DECIMAL = 182, 
    DEC = 183, NUMERIC = 184, DATE = 185, TIME = 186, TIMESTAMP = 187, DATETIME = 188, 
    YEAR = 189, CHAR = 190, VARCHAR = 191, NVARCHAR = 192, NATIONAL = 193, 
    BINARY = 194, VARBINARY = 195, TINYBLOB = 196, BLOB = 197, MEDIUMBLOB = 198, 
    LONGBLOB = 199, TINYTEXT = 200, TEXT = 201, MEDIUMTEXT = 202, LONGTEXT = 203, 
    ENUM = 204, VARYING = 205, SERIAL = 206, YEAR_MONTH = 207, DAY_HOUR = 208, 
    DAY_MINUTE = 209, DAY_SECOND = 210, HOUR_MINUTE = 211, HOUR_SECOND = 212, 
    MINUTE_SECOND = 213, SECOND_MICROSECOND = 214, MINUTE_MICROSECOND = 215, 
    HOUR_MICROSECOND = 216, DAY_MICROSECOND = 217, AVG = 218, BIT_AND = 219, 
    BIT_OR = 220, BIT_XOR = 221, COUNT = 222, GROUP_CONCAT = 223, MAX = 224, 
    MIN = 225, STD = 226, STDDEV = 227, STDDEV_POP = 228, STDDEV_SAMP = 229, 
    SUM = 230, VAR_POP = 231, VAR_SAMP = 232, VARIANCE = 233, CURRENT_DATE = 234, 
    CURRENT_TIME = 235, CURRENT_TIMESTAMP = 236, LOCALTIME = 237, CURDATE = 238, 
    CURTIME = 239, DATE_ADD = 240, DATE_SUB = 241, EXTRACT = 242, LOCALTIMESTAMP = 243, 
    NOW = 244, POSITION = 245, SUBSTR = 246, SUBSTRING = 247, SYSDATE = 248, 
    TRIM = 249, UTC_DATE = 250, UTC_TIME = 251, UTC_TIMESTAMP = 252, ACCOUNT = 253, 
    ACTION = 254, AFTER = 255, AGGREGATE = 256, ALGORITHM = 257, ANY = 258, 
    AT = 259, AUTHORS = 260, AUTOCOMMIT = 261, AUTOEXTEND_SIZE = 262, AUTO_INCREMENT = 263, 
    AVG_ROW_LENGTH = 264, BEGIN = 265, BINLOG = 266, BIT = 267, BLOCK = 268, 
    BOOL = 269, BOOLEAN = 270, BTREE = 271, CACHE = 272, CASCADED = 273, 
    CHAIN = 274, CHANGED = 275, CHANNEL = 276, CHECKSUM = 277, PAGE_CHECKSUM = 278, 
    CIPHER = 279, CLASS_ORIGIN = 280, CLIENT = 281, CLOSE = 282, COALESCE = 283, 
    CODE = 284, COLUMNS = 285, COLUMN_FORMAT = 286, COLUMN_NAME = 287, COMMENT = 288, 
    COMMIT = 289, COMPACT = 290, COMPLETION = 291, COMPRESSED = 292, COMPRESSION = 293, 
    CONCURRENT = 294, CONNECTION = 295, CONSISTENT = 296, CONSTRAINT_CATALOG = 297, 
    CONSTRAINT_SCHEMA = 298, CONSTRAINT_NAME = 299, CONTAINS = 300, CONTEXT = 301, 
    CONTRIBUTORS = 302, COPY = 303, CPU = 304, DATA = 305, DATAFILE = 306, 
    DEALLOCATE = 307, DEFAULT_AUTH = 308, DEFINER = 309, DELAY_KEY_WRITE = 310, 
    DES_KEY_FILE = 311, DIRECTORY = 312, DISABLE = 313, DISCARD = 314, DISK = 315, 
    DO = 316, DUMPFILE = 317, DUPLICATE = 318, DYNAMIC = 319, ENABLE = 320, 
    ENCRYPTION = 321, END = 322, ENDS = 323, ENGINE = 324, ENGINES = 325, 
    ERROR = 326, ERRORS = 327, ESCAPE = 328, EVEN = 329, EVENT = 330, EVENTS = 331, 
    EVERY = 332, EXCHANGE = 333, EXCLUSIVE = 334, EXPIRE = 335, EXPORT = 336, 
    EXTENDED = 337, EXTENT_SIZE = 338, FAST = 339, FAULTS = 340, FIELDS = 341, 
    FILE_BLOCK_SIZE = 342, FILTER = 343, FIRST = 344, FIXED = 345, FLUSH = 346, 
    FOLLOWS = 347, FOUND = 348, FULL = 349, FUNCTION = 350, GENERAL = 351, 
    GLOBAL = 352, GRANTS = 353, GROUP_REPLICATION = 354, HANDLER = 355, 
    HASH = 356, HELP = 357, HOST = 358, HOSTS = 359, IDENTIFIED = 360, IGNORE_SERVER_IDS = 361, 
    IMPORT = 362, INDEXES = 363, INITIAL_SIZE = 364, INPLACE = 365, INSERT_METHOD = 366, 
    INSTALL = 367, INSTANCE = 368, INVISIBLE = 369, INVOKER = 370, IO = 371, 
    IO_THREAD = 372, IPC = 373, ISOLATION = 374, ISSUER = 375, JSON = 376, 
    KEY_BLOCK_SIZE = 377, LANGUAGE = 378, LAST = 379, LEAVES = 380, LESS = 381, 
    LEVEL = 382, LIST = 383, LOCAL = 384, LOGFILE = 385, LOGS = 386, MASTER = 387, 
    MASTER_AUTO_POSITION = 388, MASTER_CONNECT_RETRY = 389, MASTER_DELAY = 390, 
    MASTER_HEARTBEAT_PERIOD = 391, MASTER_HOST = 392, MASTER_LOG_FILE = 393, 
    MASTER_LOG_POS = 394, MASTER_PASSWORD = 395, MASTER_PORT = 396, MASTER_RETRY_COUNT = 397, 
    MASTER_SSL = 398, MASTER_SSL_CA = 399, MASTER_SSL_CAPATH = 400, MASTER_SSL_CERT = 401, 
    MASTER_SSL_CIPHER = 402, MASTER_SSL_CRL = 403, MASTER_SSL_CRLPATH = 404, 
    MASTER_SSL_KEY = 405, MASTER_TLS_VERSION = 406, MASTER_USER = 407, MAX_CONNECTIONS_PER_HOUR = 408, 
    MAX_QUERIES_PER_HOUR = 409, MAX_ROWS = 410, MAX_SIZE = 411, MAX_UPDATES_PER_HOUR = 412, 
    MAX_USER_CONNECTIONS = 413, MEDIUM = 414, MERGE = 415, MESSAGE_TEXT = 416, 
    MID = 417, MIGRATE = 418, MIN_ROWS = 419, MODE = 420, MODIFY = 421, 
    MUTEX = 422, MYSQL = 423, MYSQL_ERRNO = 424, NAME = 425, NAMES = 426, 
    NCHAR = 427, NEVER = 428, NEXT = 429, NO = 430, NODEGROUP = 431, NONE = 432, 
    OFFLINE = 433, OFFSET = 434, OJ = 435, OLD_PASSWORD = 436, ONE = 437, 
    ONLINE = 438, ONLY = 439, OPEN = 440, OPTIMIZER_COSTS = 441, OPTIONS = 442, 
    OWNER = 443, PACK_KEYS = 444, PAGE = 445, PARSER = 446, PARTIAL = 447, 
    PARTITIONING = 448, PARTITIONS = 449, PASSWORD = 450, PHASE = 451, PLUGIN = 452, 
    PLUGIN_DIR = 453, PLUGINS = 454, PORT = 455, PRECEDES = 456, PREPARE = 457, 
    PRESERVE = 458, PREV = 459, PROCESSLIST = 460, PROFILE = 461, PROFILES = 462, 
    PROXY = 463, QUERY = 464, QUICK = 465, REBUILD = 466, RECOVER = 467, 
    REDO_BUFFER_SIZE = 468, REDUNDANT = 469, RELAY = 470, RELAY_LOG_FILE = 471, 
    RELAY_LOG_POS = 472, RELAYLOG = 473, REMOVE = 474, REORGANIZE = 475, 
    REPAIR = 476, REPLICATE_DO_DB = 477, REPLICATE_DO_TABLE = 478, REPLICATE_IGNORE_DB = 479, 
    REPLICATE_IGNORE_TABLE = 480, REPLICATE_REWRITE_DB = 481, REPLICATE_WILD_DO_TABLE = 482, 
    REPLICATE_WILD_IGNORE_TABLE = 483, REPLICATION = 484, RESET = 485, RESUME = 486, 
    RETURNS = 487, ROLLBACK = 488, ROLLUP = 489, ROTATE = 490, ROW = 491, 
    ROWS = 492, ROW_FORMAT = 493, SAVEPOINT = 494, SCHEDULE = 495, SECURITY = 496, 
    SERVER = 497, SESSION = 498, SHARE = 499, SHARED = 500, SIGNED = 501, 
    SIMPLE = 502, SLAVE = 503, SLOW = 504, SNAPSHOT = 505, SOCKET = 506, 
    SOME = 507, SONAME = 508, SOUNDS = 509, SOURCE = 510, SQL_AFTER_GTIDS = 511, 
    SQL_AFTER_MTS_GAPS = 512, SQL_BEFORE_GTIDS = 513, SQL_BUFFER_RESULT = 514, 
    SQL_CACHE = 515, SQL_NO_CACHE = 516, SQL_THREAD = 517, START = 518, 
    STARTS = 519, STATS_AUTO_RECALC = 520, STATS_PERSISTENT = 521, STATS_SAMPLE_PAGES = 522, 
    STATUS = 523, STOP = 524, STORAGE = 525, STORED = 526, STRING = 527, 
    SUBCLASS_ORIGIN = 528, SUBJECT = 529, SUBPARTITION = 530, SUBPARTITIONS = 531, 
    SUSPEND = 532, SWAPS = 533, SWITCHES = 534, TABLE_NAME = 535, TABLESPACE = 536, 
    TEMPORARY = 537, TEMPTABLE = 538, THAN = 539, TRADITIONAL = 540, TRANSACTION = 541, 
    TRIGGERS = 542, TRUNCATE = 543, UNDEFINED = 544, UNDOFILE = 545, UNDO_BUFFER_SIZE = 546, 
    UNINSTALL = 547, UNKNOWN = 548, UNTIL = 549, UPGRADE = 550, USER = 551, 
    USE_FRM = 552, USER_RESOURCES = 553, VALIDATION = 554, VALUE = 555, 
    VARIABLES = 556, VIEW = 557, VIRTUAL = 558, VISIBLE = 559, WAIT = 560, 
    WARNINGS = 561, WITHOUT = 562, WORK = 563, WRAPPER = 564, X509 = 565, 
    XA = 566, XML = 567, EUR = 568, USA = 569, JIS = 570, ISO = 571, INTERNAL = 572, 
    QUARTER = 573, MONTH = 574, DAY = 575, HOUR = 576, MINUTE = 577, WEEK = 578, 
    SECOND = 579, MICROSECOND = 580, TABLES = 581, ROUTINE = 582, EXECUTE = 583, 
    FILE = 584, PROCESS = 585, RELOAD = 586, SHUTDOWN = 587, SUPER = 588, 
    PRIVILEGES = 589, SESSION_VARIABLES_ADMIN = 590, ARMSCII8 = 591, ASCII = 592, 
    BIG5 = 593, CP1250 = 594, CP1251 = 595, CP1256 = 596, CP1257 = 597, 
    CP850 = 598, CP852 = 599, CP866 = 600, CP932 = 601, DEC8 = 602, EUCJPMS = 603, 
    EUCKR = 604, GB2312 = 605, GBK = 606, GEOSTD8 = 607, GREEK = 608, HEBREW = 609, 
    HP8 = 610, KEYBCS2 = 611, KOI8R = 612, KOI8U = 613, LATIN1 = 614, LATIN2 = 615, 
    LATIN5 = 616, LATIN7 = 617, MACCE = 618, MACROMAN = 619, SJIS = 620, 
    SWE7 = 621, TIS620 = 622, UCS2 = 623, UJIS = 624, UTF16 = 625, UTF16LE = 626, 
    UTF32 = 627, UTF8 = 628, UTF8MB3 = 629, UTF8MB4 = 630, ARCHIVE = 631, 
    BLACKHOLE = 632, CSV = 633, FEDERATED = 634, INNODB = 635, MEMORY = 636, 
    MRG_MYISAM = 637, MYISAM = 638, NDB = 639, NDBCLUSTER = 640, PERFORMANCE_SCHEMA = 641, 
    TOKUDB = 642, REPEATABLE = 643, COMMITTED = 644, UNCOMMITTED = 645, 
    SERIALIZABLE = 646, GEOMETRYCOLLECTION = 647, GEOMCOLLECTION = 648, 
    GEOMETRY = 649, LINESTRING = 650, MULTILINESTRING = 651, MULTIPOINT = 652, 
    MULTIPOLYGON = 653, POINT = 654, POLYGON = 655, ABS = 656, ACOS = 657, 
    ADDDATE = 658, ADDTIME = 659, AES_DECRYPT = 660, AES_ENCRYPT = 661, 
    AREA = 662, ASBINARY = 663, ASIN = 664, ASTEXT = 665, ASWKB = 666, ASWKT = 667, 
    ASYMMETRIC_DECRYPT = 668, ASYMMETRIC_DERIVE = 669, ASYMMETRIC_ENCRYPT = 670, 
    ASYMMETRIC_SIGN = 671, ASYMMETRIC_VERIFY = 672, ATAN = 673, ATAN2 = 674, 
    BMARK = 675, BIN = 676, BIT_COUNT = 677, BIT_LENGTH = 678, BUFFER = 679, 
    CATALOG_NAME = 680, CEIL = 681, CEILING = 682, CENTROID = 683, CHARACTER_LENGTH = 684, 
    CHARSET = 685, CHAR_LENGTH = 686, COERCIBILITY = 687, COLLATION = 688, 
    COMPRESS = 689, CONCAT = 690, CONCAT_WS = 691, CONNECTION_ID = 692, 
    CONV = 693, CONVERT_TZ = 694, COS = 695, COT = 696, CRC32 = 697, CREATE_ASYMMETRIC_PRIV_KEY = 698, 
    CREATE_ASYMMETRIC_PUB_KEY = 699, CREATE_DH_PARAMETERS = 700, CREATE_DIGEST = 701, 
    CROSSES = 702, DATEDIFF = 703, DATE_FORMAT = 704, DAYNAME = 705, DAYOFMONTH = 706, 
    DAYOFWEEK = 707, DAYOFYEAR = 708, DECODE = 709, DEGREES = 710, DES_DECRYPT = 711, 
    DES_ENCRYPT = 712, DIMENSION = 713, DISJOINT = 714, ELT = 715, ENCODE = 716, 
    ENCRYPT = 717, ENDPOINT = 718, ENVELOPE = 719, EQUALS = 720, EXP = 721, 
    EXPORT_SET = 722, EXTERIORRING = 723, EXTRACTVALUE = 724, FIELD = 725, 
    FIND_IN_SET = 726, FLOOR = 727, FORMAT = 728, FOUND_ROWS = 729, FROM_BASE64 = 730, 
    FROM_DAYS = 731, FROM_UNIXTIME = 732, GEOMCOLLFROMTEXT = 733, GEOMCOLLFROMWKB = 734, 
    GEOMETRYCOLLECTIONFROMTEXT = 735, GEOMETRYCOLLECTIONFROMWKB = 736, GEOMETRYFROMTEXT = 737, 
    GEOMETRYFROMWKB = 738, GEOMETRYN = 739, GEOMETRYTYPE = 740, GEOMFROMTEXT = 741, 
    GEOMFROMWKB = 742, GET_FORMAT = 743, GET_LOCK = 744, GLENGTH = 745, 
    GREATEST = 746, GTID_SUBSET = 747, GTID_SUBTRACT = 748, HEX = 749, IFNULL = 750, 
    INET6_ATON = 751, INET6_NTOA = 752, INET_ATON = 753, INET_NTOA = 754, 
    INSTR = 755, INTERIORRINGN = 756, INTERSECTS = 757, ISCLOSED = 758, 
    ISEMPTY = 759, ISNULL = 760, ISSIMPLE = 761, IS_FREE_LOCK = 762, IS_IPV4 = 763, 
    IS_IPV4_COMPAT = 764, IS_IPV4_MAPPED = 765, IS_IPV6 = 766, IS_USED_LOCK = 767, 
    LAST_INSERT_ID = 768, LCASE = 769, LEAST = 770, LENGTH = 771, LINEFROMTEXT = 772, 
    LINEFROMWKB = 773, LINESTRINGFROMTEXT = 774, LINESTRINGFROMWKB = 775, 
    LN = 776, LOAD_FILE = 777, LOCATE = 778, LOG = 779, LOG10 = 780, LOG2 = 781, 
    LOWER = 782, LPAD = 783, LTRIM = 784, MAKEDATE = 785, MAKETIME = 786, 
    MAKE_SET = 787, MASTER_POS_WAIT = 788, MBRCONTAINS = 789, MBRDISJOINT = 790, 
    MBREQUAL = 791, MBRINTERSECTS = 792, MBROVERLAPS = 793, MBRTOUCHES = 794, 
    MBRWITHIN = 795, MD5 = 796, MLINEFROMTEXT = 797, MLINEFROMWKB = 798, 
    MONTHNAME = 799, MPOINTFROMTEXT = 800, MPOINTFROMWKB = 801, MPOLYFROMTEXT = 802, 
    MPOLYFROMWKB = 803, MULTILINESTRINGFROMTEXT = 804, MULTILINESTRINGFROMWKB = 805, 
    MULTIPOINTFROMTEXT = 806, MULTIPOINTFROMWKB = 807, MULTIPOLYGONFROMTEXT = 808, 
    MULTIPOLYGONFROMWKB = 809, NAME_CONST = 810, NULLIF = 811, NUMGEOMETRIES = 812, 
    NUMINTERIORRINGS = 813, NUMPOINTS = 814, OCT = 815, OCTET_LENGTH = 816, 
    ORD = 817, OVERLAPS = 818, PERIOD_ADD = 819, PERIOD_DIFF = 820, PI = 821, 
    POINTFROMTEXT = 822, POINTFROMWKB = 823, POINTN = 824, POLYFROMTEXT = 825, 
    POLYFROMWKB = 826, POLYGONFROMTEXT = 827, POLYGONFROMWKB = 828, POW = 829, 
    POWER = 830, QUOTE = 831, RADIANS = 832, RAND = 833, RANDOM_BYTES = 834, 
    RELEASE_LOCK = 835, REVERSE = 836, ROUND = 837, ROW_COUNT = 838, RPAD = 839, 
    RTRIM = 840, SEC_TO_TIME = 841, SESSION_USER = 842, SHA = 843, SHA1 = 844, 
    SHA2 = 845, SCHEMA_NAME = 846, SIGN = 847, SIN = 848, SLEEP = 849, SOUNDEX = 850, 
    SQL_THREAD_WAIT_AFTER_GTIDS = 851, SQRT = 852, SRID = 853, STARTPOINT = 854, 
    STRCMP = 855, STR_TO_DATE = 856, ST_AREA = 857, ST_ASBINARY = 858, ST_ASTEXT = 859, 
    ST_ASWKB = 860, ST_ASWKT = 861, ST_BUFFER = 862, ST_CENTROID = 863, 
    ST_CONTAINS = 864, ST_CROSSES = 865, ST_DIFFERENCE = 866, ST_DIMENSION = 867, 
    ST_DISJOINT = 868, ST_DISTANCE = 869, ST_ENDPOINT = 870, ST_ENVELOPE = 871, 
    ST_EQUALS = 872, ST_EXTERIORRING = 873, ST_GEOMCOLLFROMTEXT = 874, ST_GEOMCOLLFROMTXT = 875, 
    ST_GEOMCOLLFROMWKB = 876, ST_GEOMETRYCOLLECTIONFROMTEXT = 877, ST_GEOMETRYCOLLECTIONFROMWKB = 878, 
    ST_GEOMETRYFROMTEXT = 879, ST_GEOMETRYFROMWKB = 880, ST_GEOMETRYN = 881, 
    ST_GEOMETRYTYPE = 882, ST_GEOMFROMTEXT = 883, ST_GEOMFROMWKB = 884, 
    ST_INTERIORRINGN = 885, ST_INTERSECTION = 886, ST_INTERSECTS = 887, 
    ST_ISCLOSED = 888, ST_ISEMPTY = 889, ST_ISSIMPLE = 890, ST_LINEFROMTEXT = 891, 
    ST_LINEFROMWKB = 892, ST_LINESTRINGFROMTEXT = 893, ST_LINESTRINGFROMWKB = 894, 
    ST_NUMGEOMETRIES = 895, ST_NUMINTERIORRING = 896, ST_NUMINTERIORRINGS = 897, 
    ST_NUMPOINTS = 898, ST_OVERLAPS = 899, ST_POINTFROMTEXT = 900, ST_POINTFROMWKB = 901, 
    ST_POINTN = 902, ST_POLYFROMTEXT = 903, ST_POLYFROMWKB = 904, ST_POLYGONFROMTEXT = 905, 
    ST_POLYGONFROMWKB = 906, ST_SRID = 907, ST_STARTPOINT = 908, ST_SYMDIFFERENCE = 909, 
    ST_TOUCHES = 910, ST_UNION = 911, ST_WITHIN = 912, ST_X = 913, ST_Y = 914, 
    SUBDATE = 915, SUBSTRING_INDEX = 916, SUBTIME = 917, SYSTEM_USER = 918, 
    TAN = 919, TIMEDIFF = 920, TIMESTAMPADD = 921, TIMESTAMPDIFF = 922, 
    TIME_FORMAT = 923, TIME_TO_SEC = 924, TOUCHES = 925, TO_BASE64 = 926, 
    TO_DAYS = 927, TO_SECONDS = 928, UCASE = 929, UNCOMPRESS = 930, UNCOMPRESSED_LENGTH = 931, 
    UNHEX = 932, UNIX_TIMESTAMP = 933, UPDATEXML = 934, UPPER = 935, UUID = 936, 
    UUID_SHORT = 937, VALIDATE_PASSWORD_STRENGTH = 938, VERSION = 939, WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS = 940, 
    WEEKDAY = 941, WEEKOFYEAR = 942, WEIGHT_STRING = 943, WITHIN = 944, 
    YEARWEEK = 945, Y_FUNCTION = 946, X_FUNCTION = 947, VAR_ASSIGN = 948, 
    PLUS_ASSIGN = 949, MINUS_ASSIGN = 950, MULT_ASSIGN = 951, DIV_ASSIGN = 952, 
    MOD_ASSIGN = 953, AND_ASSIGN = 954, XOR_ASSIGN = 955, OR_ASSIGN = 956, 
    STAR = 957, DIVIDE = 958, MODULE = 959, PLUS = 960, MINUSMINUS = 961, 
    MINUS = 962, DIV = 963, MOD = 964, EQUAL_SYMBOL = 965, GREATER_SYMBOL = 966, 
    LESS_SYMBOL = 967, EXCLAMATION_SYMBOL = 968, BIT_NOT_OP = 969, BIT_OR_OP = 970, 
    BIT_AND_OP = 971, BIT_XOR_OP = 972, DOT = 973, LR_BRACKET = 974, RR_BRACKET = 975, 
    COMMA = 976, SEMI = 977, AT_SIGN = 978, ZERO_DECIMAL = 979, ONE_DECIMAL = 980, 
    TWO_DECIMAL = 981, SINGLE_QUOTE_SYMB = 982, DOUBLE_QUOTE_SYMB = 983, 
    REVERSE_QUOTE_SYMB = 984, COLON_SYMB = 985, CHARSET_REVERSE_QOUTE_STRING = 986, 
    FILESIZE_LITERAL = 987, START_NATIONAL_STRING_LITERAL = 988, STRING_LITERAL = 989, 
    DECIMAL_LITERAL = 990, HEXADECIMAL_LITERAL = 991, REAL_LITERAL = 992, 
    NULL_SPEC_LITERAL = 993, BIT_STRING = 994, STRING_CHARSET_NAME = 995, 
    DOT_ID = 996, ID = 997, REVERSE_QUOTE_ID = 998, STRING_USER_NAME = 999, 
    LOCAL_ID = 1000, GLOBAL_ID = 1001, ERROR_RECONGNIGION = 1002
  };

  enum {
    RuleRoot = 0, RuleSqlStatements = 1, RuleSqlStatement = 2, RuleEmptyStatement = 3, 
    RuleDdlStatement = 4, RuleDmlStatement = 5, RuleTransactionStatement = 6, 
    RuleReplicationStatement = 7, RulePreparedStatement = 8, RuleCompoundStatement = 9, 
    RuleAdministrationStatement = 10, RuleUtilityStatement = 11, RuleCreateDatabase = 12, 
    RuleCreateEvent = 13, RuleCreateIndex = 14, RuleCreateLogfileGroup = 15, 
    RuleCreateProcedure = 16, RuleCreateFunction = 17, RuleCreateServer = 18, 
    RuleCreateTable = 19, RuleCreateTablespaceInnodb = 20, RuleCreateTablespaceNdb = 21, 
    RuleCreateTrigger = 22, RuleCreateView = 23, RuleCreateDatabaseOption = 24, 
    RuleOwnerStatement = 25, RuleScheduleExpression = 26, RuleTimestampValue = 27, 
    RuleIntervalExpr = 28, RuleIntervalType = 29, RuleEnableType = 30, RuleIndexType = 31, 
    RuleIndexOption = 32, RuleProcedureParameter = 33, RuleFunctionParameter = 34, 
    RuleRoutineOption = 35, RuleServerOption = 36, RuleCreateDefinitions = 37, 
    RuleCreateDefinition = 38, RuleColumnDefinition = 39, RuleColumnConstraint = 40, 
    RuleTableConstraint = 41, RuleReferenceDefinition = 42, RuleReferenceAction = 43, 
    RuleReferenceControlType = 44, RuleIndexColumnDefinition = 45, RuleTableOption = 46, 
    RuleTablespaceStorage = 47, RulePartitionDefinitions = 48, RulePartitionFunctionDefinition = 49, 
    RuleSubpartitionFunctionDefinition = 50, RulePartitionDefinition = 51, 
    RulePartitionDefinerAtom = 52, RulePartitionDefinerVector = 53, RuleSubpartitionDefinition = 54, 
    RulePartitionOption = 55, RuleAlterDatabase = 56, RuleAlterEvent = 57, 
    RuleAlterFunction = 58, RuleAlterInstance = 59, RuleAlterLogfileGroup = 60, 
    RuleAlterProcedure = 61, RuleAlterServer = 62, RuleAlterTable = 63, 
    RuleAlterTablespace = 64, RuleAlterView = 65, RuleAlterSpecification = 66, 
    RuleDropDatabase = 67, RuleDropEvent = 68, RuleDropIndex = 69, RuleDropLogfileGroup = 70, 
    RuleDropProcedure = 71, RuleDropFunction = 72, RuleDropServer = 73, 
    RuleDropTable = 74, RuleDropTablespace = 75, RuleDropTrigger = 76, RuleDropView = 77, 
    RuleRenameTable = 78, RuleRenameTableClause = 79, RuleTruncateTable = 80, 
    RuleCallStatement = 81, RuleDeleteStatement = 82, RuleDoStatement = 83, 
    RuleHandlerStatement = 84, RuleInsertStatement = 85, RuleLoadDataStatement = 86, 
    RuleLoadXmlStatement = 87, RuleReplaceStatement = 88, RuleSelectStatement = 89, 
    RuleUpdateStatement = 90, RuleInsertStatementValue = 91, RuleUpdatedElement = 92, 
    RuleAssignmentField = 93, RuleLockClause = 94, RuleSingleDeleteStatement = 95, 
    RuleMultipleDeleteStatement = 96, RuleHandlerOpenStatement = 97, RuleHandlerReadIndexStatement = 98, 
    RuleHandlerReadStatement = 99, RuleHandlerCloseStatement = 100, RuleSingleUpdateStatement = 101, 
    RuleMultipleUpdateStatement = 102, RuleOrderByClause = 103, RuleOrderByExpression = 104, 
    RuleTableSources = 105, RuleTableSource = 106, RuleTableSourceItem = 107, 
    RuleIndexHint = 108, RuleIndexHintType = 109, RuleJoinPart = 110, RuleQueryExpression = 111, 
    RuleQueryExpressionNointo = 112, RuleQuerySpecification = 113, RuleQuerySpecificationNointo = 114, 
    RuleUnionParenthesis = 115, RuleUnionStatement = 116, RuleSelectSpec = 117, 
    RuleSelectElements = 118, RuleSelectElement = 119, RuleSelectIntoExpression = 120, 
    RuleSelectFieldsInto = 121, RuleSelectLinesInto = 122, RuleFromClause = 123, 
    RuleGroupByItem = 124, RuleLimitClause = 125, RuleLimitClauseAtom = 126, 
    RuleStartTransaction = 127, RuleBeginWork = 128, RuleCommitWork = 129, 
    RuleRollbackWork = 130, RuleSavepointStatement = 131, RuleRollbackStatement = 132, 
    RuleReleaseStatement = 133, RuleLockTables = 134, RuleUnlockTables = 135, 
    RuleSetAutocommitStatement = 136, RuleSetTransactionStatement = 137, 
    RuleTransactionMode = 138, RuleLockTableElement = 139, RuleLockAction = 140, 
    RuleTransactionOption = 141, RuleTransactionLevel = 142, RuleChangeMaster = 143, 
    RuleChangeReplicationFilter = 144, RulePurgeBinaryLogs = 145, RuleResetMaster = 146, 
    RuleResetSlave = 147, RuleStartSlave = 148, RuleStopSlave = 149, RuleStartGroupReplication = 150, 
    RuleStopGroupReplication = 151, RuleMasterOption = 152, RuleStringMasterOption = 153, 
    RuleDecimalMasterOption = 154, RuleBoolMasterOption = 155, RuleChannelOption = 156, 
    RuleReplicationFilter = 157, RuleTablePair = 158, RuleThreadType = 159, 
    RuleUntilOption = 160, RuleConnectionOption = 161, RuleGtuidSet = 162, 
    RuleXaStartTransaction = 163, RuleXaEndTransaction = 164, RuleXaPrepareStatement = 165, 
    RuleXaCommitWork = 166, RuleXaRollbackWork = 167, RuleXaRecoverWork = 168, 
    RulePrepareStatement = 169, RuleExecuteStatement = 170, RuleDeallocatePrepare = 171, 
    RuleRoutineBody = 172, RuleBlockStatement = 173, RuleCaseStatement = 174, 
    RuleIfStatement = 175, RuleIterateStatement = 176, RuleLeaveStatement = 177, 
    RuleLoopStatement = 178, RuleRepeatStatement = 179, RuleReturnStatement = 180, 
    RuleWhileStatement = 181, RuleCursorStatement = 182, RuleDeclareVariable = 183, 
    RuleDeclareCondition = 184, RuleDeclareCursor = 185, RuleDeclareHandler = 186, 
    RuleHandlerConditionValue = 187, RuleProcedureSqlStatement = 188, RuleCaseAlternative = 189, 
    RuleElifAlternative = 190, RuleAlterUser = 191, RuleCreateUser = 192, 
    RuleDropUser = 193, RuleGrantStatement = 194, RuleGrantProxy = 195, 
    RuleRenameUser = 196, RuleRevokeStatement = 197, RuleRevokeProxy = 198, 
    RuleSetPasswordStatement = 199, RuleUserSpecification = 200, RuleUserAuthOption = 201, 
    RuleTlsOption = 202, RuleUserResourceOption = 203, RuleUserPasswordOption = 204, 
    RuleUserLockOption = 205, RulePrivelegeClause = 206, RulePrivilege = 207, 
    RulePrivilegeLevel = 208, RuleRenameUserClause = 209, RuleAnalyzeTable = 210, 
    RuleCheckTable = 211, RuleChecksumTable = 212, RuleOptimizeTable = 213, 
    RuleRepairTable = 214, RuleCheckTableOption = 215, RuleCreateUdfunction = 216, 
    RuleInstallPlugin = 217, RuleUninstallPlugin = 218, RuleSetStatement = 219, 
    RuleShowStatement = 220, RuleVariableClause = 221, RuleShowCommonEntity = 222, 
    RuleShowFilter = 223, RuleShowGlobalInfoClause = 224, RuleShowSchemaEntity = 225, 
    RuleShowProfileType = 226, RuleBinlogStatement = 227, RuleCacheIndexStatement = 228, 
    RuleFlushStatement = 229, RuleKillStatement = 230, RuleLoadIndexIntoCache = 231, 
    RuleResetStatement = 232, RuleShutdownStatement = 233, RuleTableIndexes = 234, 
    RuleFlushOption = 235, RuleFlushTableOption = 236, RuleLoadedTableIndexes = 237, 
    RuleSimpleDescribeStatement = 238, RuleFullDescribeStatement = 239, 
    RuleHelpStatement = 240, RuleUseStatement = 241, RuleSignalStatement = 242, 
    RuleSignalConditionInformation = 243, RuleDescribeObjectClause = 244, 
    RuleFullId = 245, RuleTableName = 246, RuleFullColumnName = 247, RuleIndexColumnName = 248, 
    RuleUserName = 249, RuleMysqlVariable = 250, RuleCharsetName = 251, 
    RuleCollationName = 252, RuleEngineName = 253, RuleUuidSet = 254, RuleXid = 255, 
    RuleXuidStringId = 256, RuleAuthPlugin = 257, RuleUid = 258, RuleSimpleId = 259, 
    RuleDottedId = 260, RuleDecimalLiteral = 261, RuleFileSizeLiteral = 262, 
    RuleStringLiteral = 263, RuleBooleanLiteral = 264, RuleHexadecimalLiteral = 265, 
    RuleNullNotnull = 266, RuleConstant = 267, RuleDataType = 268, RuleCollectionOptions = 269, 
    RuleConvertedDataType = 270, RuleLengthOneDimension = 271, RuleLengthTwoDimension = 272, 
    RuleLengthTwoOptionalDimension = 273, RuleUidList = 274, RuleTables = 275, 
    RuleIndexColumnNames = 276, RuleExpressions = 277, RuleExpressionsWithDefaults = 278, 
    RuleConstants = 279, RuleSimpleStrings = 280, RuleUserVariables = 281, 
    RuleDefaultValue = 282, RuleCurrentTimestamp = 283, RuleExpressionOrDefault = 284, 
    RuleIfExists = 285, RuleIfNotExists = 286, RuleFunctionCall = 287, RuleSpecificFunction = 288, 
    RuleCaseFuncAlternative = 289, RuleLevelsInWeightString = 290, RuleLevelInWeightListElement = 291, 
    RuleAggregateWindowedFunction = 292, RuleScalarFunctionName = 293, RulePasswordFunctionClause = 294, 
    RuleFunctionArgs = 295, RuleFunctionArg = 296, RuleExpression = 297, 
    RulePredicate = 298, RuleExpressionAtom = 299, RuleUnaryOperator = 300, 
    RuleComparisonOperator = 301, RuleLogicalOperator = 302, RuleBitOperator = 303, 
    RuleMathOperator = 304, RuleCharsetNameBase = 305, RuleTransactionLevelBase = 306, 
    RulePrivilegesBase = 307, RuleIntervalTypeBase = 308, RuleDataTypeBase = 309, 
    RuleKeywordsCanBeId = 310, RuleFunctionNameBase = 311
  };

  MySqlParser(antlr4::TokenStream *input);
  ~MySqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class RootContext;
  class SqlStatementsContext;
  class SqlStatementContext;
  class EmptyStatementContext;
  class DdlStatementContext;
  class DmlStatementContext;
  class TransactionStatementContext;
  class ReplicationStatementContext;
  class PreparedStatementContext;
  class CompoundStatementContext;
  class AdministrationStatementContext;
  class UtilityStatementContext;
  class CreateDatabaseContext;
  class CreateEventContext;
  class CreateIndexContext;
  class CreateLogfileGroupContext;
  class CreateProcedureContext;
  class CreateFunctionContext;
  class CreateServerContext;
  class CreateTableContext;
  class CreateTablespaceInnodbContext;
  class CreateTablespaceNdbContext;
  class CreateTriggerContext;
  class CreateViewContext;
  class CreateDatabaseOptionContext;
  class OwnerStatementContext;
  class ScheduleExpressionContext;
  class TimestampValueContext;
  class IntervalExprContext;
  class IntervalTypeContext;
  class EnableTypeContext;
  class IndexTypeContext;
  class IndexOptionContext;
  class ProcedureParameterContext;
  class FunctionParameterContext;
  class RoutineOptionContext;
  class ServerOptionContext;
  class CreateDefinitionsContext;
  class CreateDefinitionContext;
  class ColumnDefinitionContext;
  class ColumnConstraintContext;
  class TableConstraintContext;
  class ReferenceDefinitionContext;
  class ReferenceActionContext;
  class ReferenceControlTypeContext;
  class IndexColumnDefinitionContext;
  class TableOptionContext;
  class TablespaceStorageContext;
  class PartitionDefinitionsContext;
  class PartitionFunctionDefinitionContext;
  class SubpartitionFunctionDefinitionContext;
  class PartitionDefinitionContext;
  class PartitionDefinerAtomContext;
  class PartitionDefinerVectorContext;
  class SubpartitionDefinitionContext;
  class PartitionOptionContext;
  class AlterDatabaseContext;
  class AlterEventContext;
  class AlterFunctionContext;
  class AlterInstanceContext;
  class AlterLogfileGroupContext;
  class AlterProcedureContext;
  class AlterServerContext;
  class AlterTableContext;
  class AlterTablespaceContext;
  class AlterViewContext;
  class AlterSpecificationContext;
  class DropDatabaseContext;
  class DropEventContext;
  class DropIndexContext;
  class DropLogfileGroupContext;
  class DropProcedureContext;
  class DropFunctionContext;
  class DropServerContext;
  class DropTableContext;
  class DropTablespaceContext;
  class DropTriggerContext;
  class DropViewContext;
  class RenameTableContext;
  class RenameTableClauseContext;
  class TruncateTableContext;
  class CallStatementContext;
  class DeleteStatementContext;
  class DoStatementContext;
  class HandlerStatementContext;
  class InsertStatementContext;
  class LoadDataStatementContext;
  class LoadXmlStatementContext;
  class ReplaceStatementContext;
  class SelectStatementContext;
  class UpdateStatementContext;
  class InsertStatementValueContext;
  class UpdatedElementContext;
  class AssignmentFieldContext;
  class LockClauseContext;
  class SingleDeleteStatementContext;
  class MultipleDeleteStatementContext;
  class HandlerOpenStatementContext;
  class HandlerReadIndexStatementContext;
  class HandlerReadStatementContext;
  class HandlerCloseStatementContext;
  class SingleUpdateStatementContext;
  class MultipleUpdateStatementContext;
  class OrderByClauseContext;
  class OrderByExpressionContext;
  class TableSourcesContext;
  class TableSourceContext;
  class TableSourceItemContext;
  class IndexHintContext;
  class IndexHintTypeContext;
  class JoinPartContext;
  class QueryExpressionContext;
  class QueryExpressionNointoContext;
  class QuerySpecificationContext;
  class QuerySpecificationNointoContext;
  class UnionParenthesisContext;
  class UnionStatementContext;
  class SelectSpecContext;
  class SelectElementsContext;
  class SelectElementContext;
  class SelectIntoExpressionContext;
  class SelectFieldsIntoContext;
  class SelectLinesIntoContext;
  class FromClauseContext;
  class GroupByItemContext;
  class LimitClauseContext;
  class LimitClauseAtomContext;
  class StartTransactionContext;
  class BeginWorkContext;
  class CommitWorkContext;
  class RollbackWorkContext;
  class SavepointStatementContext;
  class RollbackStatementContext;
  class ReleaseStatementContext;
  class LockTablesContext;
  class UnlockTablesContext;
  class SetAutocommitStatementContext;
  class SetTransactionStatementContext;
  class TransactionModeContext;
  class LockTableElementContext;
  class LockActionContext;
  class TransactionOptionContext;
  class TransactionLevelContext;
  class ChangeMasterContext;
  class ChangeReplicationFilterContext;
  class PurgeBinaryLogsContext;
  class ResetMasterContext;
  class ResetSlaveContext;
  class StartSlaveContext;
  class StopSlaveContext;
  class StartGroupReplicationContext;
  class StopGroupReplicationContext;
  class MasterOptionContext;
  class StringMasterOptionContext;
  class DecimalMasterOptionContext;
  class BoolMasterOptionContext;
  class ChannelOptionContext;
  class ReplicationFilterContext;
  class TablePairContext;
  class ThreadTypeContext;
  class UntilOptionContext;
  class ConnectionOptionContext;
  class GtuidSetContext;
  class XaStartTransactionContext;
  class XaEndTransactionContext;
  class XaPrepareStatementContext;
  class XaCommitWorkContext;
  class XaRollbackWorkContext;
  class XaRecoverWorkContext;
  class PrepareStatementContext;
  class ExecuteStatementContext;
  class DeallocatePrepareContext;
  class RoutineBodyContext;
  class BlockStatementContext;
  class CaseStatementContext;
  class IfStatementContext;
  class IterateStatementContext;
  class LeaveStatementContext;
  class LoopStatementContext;
  class RepeatStatementContext;
  class ReturnStatementContext;
  class WhileStatementContext;
  class CursorStatementContext;
  class DeclareVariableContext;
  class DeclareConditionContext;
  class DeclareCursorContext;
  class DeclareHandlerContext;
  class HandlerConditionValueContext;
  class ProcedureSqlStatementContext;
  class CaseAlternativeContext;
  class ElifAlternativeContext;
  class AlterUserContext;
  class CreateUserContext;
  class DropUserContext;
  class GrantStatementContext;
  class GrantProxyContext;
  class RenameUserContext;
  class RevokeStatementContext;
  class RevokeProxyContext;
  class SetPasswordStatementContext;
  class UserSpecificationContext;
  class UserAuthOptionContext;
  class TlsOptionContext;
  class UserResourceOptionContext;
  class UserPasswordOptionContext;
  class UserLockOptionContext;
  class PrivelegeClauseContext;
  class PrivilegeContext;
  class PrivilegeLevelContext;
  class RenameUserClauseContext;
  class AnalyzeTableContext;
  class CheckTableContext;
  class ChecksumTableContext;
  class OptimizeTableContext;
  class RepairTableContext;
  class CheckTableOptionContext;
  class CreateUdfunctionContext;
  class InstallPluginContext;
  class UninstallPluginContext;
  class SetStatementContext;
  class ShowStatementContext;
  class VariableClauseContext;
  class ShowCommonEntityContext;
  class ShowFilterContext;
  class ShowGlobalInfoClauseContext;
  class ShowSchemaEntityContext;
  class ShowProfileTypeContext;
  class BinlogStatementContext;
  class CacheIndexStatementContext;
  class FlushStatementContext;
  class KillStatementContext;
  class LoadIndexIntoCacheContext;
  class ResetStatementContext;
  class ShutdownStatementContext;
  class TableIndexesContext;
  class FlushOptionContext;
  class FlushTableOptionContext;
  class LoadedTableIndexesContext;
  class SimpleDescribeStatementContext;
  class FullDescribeStatementContext;
  class HelpStatementContext;
  class UseStatementContext;
  class SignalStatementContext;
  class SignalConditionInformationContext;
  class DescribeObjectClauseContext;
  class FullIdContext;
  class TableNameContext;
  class FullColumnNameContext;
  class IndexColumnNameContext;
  class UserNameContext;
  class MysqlVariableContext;
  class CharsetNameContext;
  class CollationNameContext;
  class EngineNameContext;
  class UuidSetContext;
  class XidContext;
  class XuidStringIdContext;
  class AuthPluginContext;
  class UidContext;
  class SimpleIdContext;
  class DottedIdContext;
  class DecimalLiteralContext;
  class FileSizeLiteralContext;
  class StringLiteralContext;
  class BooleanLiteralContext;
  class HexadecimalLiteralContext;
  class NullNotnullContext;
  class ConstantContext;
  class DataTypeContext;
  class CollectionOptionsContext;
  class ConvertedDataTypeContext;
  class LengthOneDimensionContext;
  class LengthTwoDimensionContext;
  class LengthTwoOptionalDimensionContext;
  class UidListContext;
  class TablesContext;
  class IndexColumnNamesContext;
  class ExpressionsContext;
  class ExpressionsWithDefaultsContext;
  class ConstantsContext;
  class SimpleStringsContext;
  class UserVariablesContext;
  class DefaultValueContext;
  class CurrentTimestampContext;
  class ExpressionOrDefaultContext;
  class IfExistsContext;
  class IfNotExistsContext;
  class FunctionCallContext;
  class SpecificFunctionContext;
  class CaseFuncAlternativeContext;
  class LevelsInWeightStringContext;
  class LevelInWeightListElementContext;
  class AggregateWindowedFunctionContext;
  class ScalarFunctionNameContext;
  class PasswordFunctionClauseContext;
  class FunctionArgsContext;
  class FunctionArgContext;
  class ExpressionContext;
  class PredicateContext;
  class ExpressionAtomContext;
  class UnaryOperatorContext;
  class ComparisonOperatorContext;
  class LogicalOperatorContext;
  class BitOperatorContext;
  class MathOperatorContext;
  class CharsetNameBaseContext;
  class TransactionLevelBaseContext;
  class PrivilegesBaseContext;
  class IntervalTypeBaseContext;
  class DataTypeBaseContext;
  class KeywordsCanBeIdContext;
  class FunctionNameBaseContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SqlStatementsContext *sqlStatements();
    antlr4::tree::TerminalNode *MINUSMINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RootContext* root();

  class  SqlStatementsContext : public antlr4::ParserRuleContext {
  public:
    SqlStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SqlStatementContext *> sqlStatement();
    SqlStatementContext* sqlStatement(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUSMINUS();
    antlr4::tree::TerminalNode* MINUSMINUS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SqlStatementsContext* sqlStatements();

  class  SqlStatementContext : public antlr4::ParserRuleContext {
  public:
    SqlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DdlStatementContext *ddlStatement();
    DmlStatementContext *dmlStatement();
    TransactionStatementContext *transactionStatement();
    ReplicationStatementContext *replicationStatement();
    PreparedStatementContext *preparedStatement();
    AdministrationStatementContext *administrationStatement();
    UtilityStatementContext *utilityStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SqlStatementContext* sqlStatement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  DdlStatementContext : public antlr4::ParserRuleContext {
  public:
    DdlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CreateDatabaseContext *createDatabase();
    CreateEventContext *createEvent();
    CreateIndexContext *createIndex();
    CreateLogfileGroupContext *createLogfileGroup();
    CreateProcedureContext *createProcedure();
    CreateFunctionContext *createFunction();
    CreateServerContext *createServer();
    CreateTableContext *createTable();
    CreateTablespaceInnodbContext *createTablespaceInnodb();
    CreateTablespaceNdbContext *createTablespaceNdb();
    CreateTriggerContext *createTrigger();
    CreateViewContext *createView();
    AlterDatabaseContext *alterDatabase();
    AlterEventContext *alterEvent();
    AlterFunctionContext *alterFunction();
    AlterInstanceContext *alterInstance();
    AlterLogfileGroupContext *alterLogfileGroup();
    AlterProcedureContext *alterProcedure();
    AlterServerContext *alterServer();
    AlterTableContext *alterTable();
    AlterTablespaceContext *alterTablespace();
    AlterViewContext *alterView();
    DropDatabaseContext *dropDatabase();
    DropEventContext *dropEvent();
    DropIndexContext *dropIndex();
    DropLogfileGroupContext *dropLogfileGroup();
    DropProcedureContext *dropProcedure();
    DropFunctionContext *dropFunction();
    DropServerContext *dropServer();
    DropTableContext *dropTable();
    DropTablespaceContext *dropTablespace();
    DropTriggerContext *dropTrigger();
    DropViewContext *dropView();
    RenameTableContext *renameTable();
    TruncateTableContext *truncateTable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DdlStatementContext* ddlStatement();

  class  DmlStatementContext : public antlr4::ParserRuleContext {
  public:
    DmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    InsertStatementContext *insertStatement();
    UpdateStatementContext *updateStatement();
    DeleteStatementContext *deleteStatement();
    ReplaceStatementContext *replaceStatement();
    CallStatementContext *callStatement();
    LoadDataStatementContext *loadDataStatement();
    LoadXmlStatementContext *loadXmlStatement();
    DoStatementContext *doStatement();
    HandlerStatementContext *handlerStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DmlStatementContext* dmlStatement();

  class  TransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    TransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartTransactionContext *startTransaction();
    BeginWorkContext *beginWork();
    CommitWorkContext *commitWork();
    RollbackWorkContext *rollbackWork();
    SavepointStatementContext *savepointStatement();
    RollbackStatementContext *rollbackStatement();
    ReleaseStatementContext *releaseStatement();
    LockTablesContext *lockTables();
    UnlockTablesContext *unlockTables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TransactionStatementContext* transactionStatement();

  class  ReplicationStatementContext : public antlr4::ParserRuleContext {
  public:
    ReplicationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChangeMasterContext *changeMaster();
    ChangeReplicationFilterContext *changeReplicationFilter();
    PurgeBinaryLogsContext *purgeBinaryLogs();
    ResetMasterContext *resetMaster();
    ResetSlaveContext *resetSlave();
    StartSlaveContext *startSlave();
    StopSlaveContext *stopSlave();
    StartGroupReplicationContext *startGroupReplication();
    StopGroupReplicationContext *stopGroupReplication();
    XaStartTransactionContext *xaStartTransaction();
    XaEndTransactionContext *xaEndTransaction();
    XaPrepareStatementContext *xaPrepareStatement();
    XaCommitWorkContext *xaCommitWork();
    XaRollbackWorkContext *xaRollbackWork();
    XaRecoverWorkContext *xaRecoverWork();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplicationStatementContext* replicationStatement();

  class  PreparedStatementContext : public antlr4::ParserRuleContext {
  public:
    PreparedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrepareStatementContext *prepareStatement();
    ExecuteStatementContext *executeStatement();
    DeallocatePrepareContext *deallocatePrepare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PreparedStatementContext* preparedStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    CaseStatementContext *caseStatement();
    IfStatementContext *ifStatement();
    LeaveStatementContext *leaveStatement();
    LoopStatementContext *loopStatement();
    RepeatStatementContext *repeatStatement();
    WhileStatementContext *whileStatement();
    IterateStatementContext *iterateStatement();
    ReturnStatementContext *returnStatement();
    CursorStatementContext *cursorStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  AdministrationStatementContext : public antlr4::ParserRuleContext {
  public:
    AdministrationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterUserContext *alterUser();
    CreateUserContext *createUser();
    DropUserContext *dropUser();
    GrantStatementContext *grantStatement();
    GrantProxyContext *grantProxy();
    RenameUserContext *renameUser();
    RevokeStatementContext *revokeStatement();
    RevokeProxyContext *revokeProxy();
    AnalyzeTableContext *analyzeTable();
    CheckTableContext *checkTable();
    ChecksumTableContext *checksumTable();
    OptimizeTableContext *optimizeTable();
    RepairTableContext *repairTable();
    CreateUdfunctionContext *createUdfunction();
    InstallPluginContext *installPlugin();
    UninstallPluginContext *uninstallPlugin();
    SetStatementContext *setStatement();
    ShowStatementContext *showStatement();
    BinlogStatementContext *binlogStatement();
    CacheIndexStatementContext *cacheIndexStatement();
    FlushStatementContext *flushStatement();
    KillStatementContext *killStatement();
    LoadIndexIntoCacheContext *loadIndexIntoCache();
    ResetStatementContext *resetStatement();
    ShutdownStatementContext *shutdownStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdministrationStatementContext* administrationStatement();

  class  UtilityStatementContext : public antlr4::ParserRuleContext {
  public:
    UtilityStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDescribeStatementContext *simpleDescribeStatement();
    FullDescribeStatementContext *fullDescribeStatement();
    HelpStatementContext *helpStatement();
    UseStatementContext *useStatement();
    SignalStatementContext *signalStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UtilityStatementContext* utilityStatement();

  class  CreateDatabaseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dbFormat = nullptr;;
    CreateDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfNotExistsContext *ifNotExists();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateDatabaseContext* createDatabase();

  class  CreateEventContext : public antlr4::ParserRuleContext {
  public:
    CreateEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    FullIdContext *fullId();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    IfNotExistsContext *ifNotExists();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    EnableTypeContext *enableType();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateEventContext* createEvent();

  class  CreateIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;;
    antlr4::Token *indexCategory = nullptr;;
    antlr4::Token *algType = nullptr;;
    antlr4::Token *lockType = nullptr;;
    CreateIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    IndexColumnNamesContext *indexColumnNames();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INPLACE();
    antlr4::tree::TerminalNode* INPLACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY();
    antlr4::tree::TerminalNode* COPY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARED();
    antlr4::tree::TerminalNode* SHARED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUSIVE();
    antlr4::tree::TerminalNode* EXCLUSIVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateIndexContext* createIndex();

  class  CreateLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *undoFile = nullptr;;
    MySqlParser::FileSizeLiteralContext *initSize = nullptr;;
    MySqlParser::FileSizeLiteralContext *undoSize = nullptr;;
    MySqlParser::FileSizeLiteralContext *redoSize = nullptr;;
    antlr4::Token *comment = nullptr;;
    CreateLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateLogfileGroupContext* createLogfileGroup();

  class  CreateProcedureContext : public antlr4::ParserRuleContext {
  public:
    CreateProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    RoutineBodyContext *routineBody();
    OwnerStatementContext *ownerStatement();
    std::vector<ProcedureParameterContext *> procedureParameter();
    ProcedureParameterContext* procedureParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateProcedureContext* createProcedure();

  class  CreateFunctionContext : public antlr4::ParserRuleContext {
  public:
    CreateFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *RETURNS();
    DataTypeContext *dataType();
    RoutineBodyContext *routineBody();
    ReturnStatementContext *returnStatement();
    OwnerStatementContext *ownerStatement();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateFunctionContext* createFunction();

  class  CreateServerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *wrapperName = nullptr;;
    CreateServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateServerContext* createServer();

  class  CreateTableContext : public antlr4::ParserRuleContext {
  public:
    CreateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateTableContext() = default;
    void copyFrom(CreateTableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CopyCreateTableContext : public CreateTableContext {
  public:
    CopyCreateTableContext(CreateTableContext *ctx);

    MySqlParser::TableNameContext *parenthesisTable = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ColumnCreateTableContext : public CreateTableContext {
  public:
    ColumnCreateTableContext(CreateTableContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    CreateDefinitionsContext *createDefinitions();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  QueryCreateTableContext : public CreateTableContext {
  public:
    QueryCreateTableContext(CreateTableContext *ctx);

    antlr4::Token *keyViolate = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfNotExistsContext *ifNotExists();
    CreateDefinitionsContext *createDefinitions();
    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  CreateTableContext* createTable();

  class  CreateTablespaceInnodbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;;
    MySqlParser::FileSizeLiteralContext *fileBlockSize = nullptr;;
    CreateTablespaceInnodbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    FileSizeLiteralContext *fileSizeLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateTablespaceInnodbContext* createTablespaceInnodb();

  class  CreateTablespaceNdbContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *datafile = nullptr;;
    MySqlParser::FileSizeLiteralContext *extentSize = nullptr;;
    MySqlParser::FileSizeLiteralContext *initialSize = nullptr;;
    MySqlParser::FileSizeLiteralContext *autoextendSize = nullptr;;
    MySqlParser::FileSizeLiteralContext *maxSize = nullptr;;
    antlr4::Token *comment = nullptr;;
    CreateTablespaceNdbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *COMMENT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    std::vector<FileSizeLiteralContext *> fileSizeLiteral();
    FileSizeLiteralContext* fileSizeLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateTablespaceNdbContext* createTablespaceNdb();

  class  CreateTriggerContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::FullIdContext *thisTrigger = nullptr;;
    antlr4::Token *triggerTime = nullptr;;
    antlr4::Token *triggerEvent = nullptr;;
    antlr4::Token *triggerPlace = nullptr;;
    MySqlParser::FullIdContext *otherTrigger = nullptr;;
    CreateTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ROW();
    RoutineBodyContext *routineBody();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *DELETE();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *PRECEDES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateTriggerContext* createTrigger();

  class  CreateViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algType = nullptr;;
    antlr4::Token *secContext = nullptr;;
    antlr4::Token *checkOption = nullptr;;
    CreateViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *AS();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateViewContext* createView();

  class  CreateDatabaseOptionContext : public antlr4::ParserRuleContext {
  public:
    CreateDatabaseOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateDatabaseOptionContext* createDatabaseOption();

  class  OwnerStatementContext : public antlr4::ParserRuleContext {
  public:
    OwnerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    UserNameContext *userName();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OwnerStatementContext* ownerStatement();

  class  ScheduleExpressionContext : public antlr4::ParserRuleContext {
  public:
    ScheduleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ScheduleExpressionContext() = default;
    void copyFrom(ScheduleExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreciseScheduleContext : public ScheduleExpressionContext {
  public:
    PreciseScheduleContext(ScheduleExpressionContext *ctx);

    antlr4::tree::TerminalNode *AT();
    TimestampValueContext *timestampValue();
    std::vector<IntervalExprContext *> intervalExpr();
    IntervalExprContext* intervalExpr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IntervalScheduleContext : public ScheduleExpressionContext {
  public:
    IntervalScheduleContext(ScheduleExpressionContext *ctx);

    MySqlParser::TimestampValueContext *startTimestamp = nullptr;
    MySqlParser::IntervalExprContext *intervalExprContext = nullptr;
    std::vector<IntervalExprContext *> startIntervals;
    MySqlParser::TimestampValueContext *endTimestamp = nullptr;
    std::vector<IntervalExprContext *> endIntervals;
    antlr4::tree::TerminalNode *EVERY();
    IntervalTypeContext *intervalType();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *ENDS();
    std::vector<TimestampValueContext *> timestampValue();
    TimestampValueContext* timestampValue(size_t i);
    std::vector<IntervalExprContext *> intervalExpr();
    IntervalExprContext* intervalExpr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ScheduleExpressionContext* scheduleExpression();

  class  TimestampValueContext : public antlr4::ParserRuleContext {
  public:
    TimestampValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TimestampValueContext* timestampValue();

  class  IntervalExprContext : public antlr4::ParserRuleContext {
  public:
    IntervalExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *INTERVAL();
    IntervalTypeContext *intervalType();
    DecimalLiteralContext *decimalLiteral();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntervalExprContext* intervalExpr();

  class  IntervalTypeContext : public antlr4::ParserRuleContext {
  public:
    IntervalTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntervalTypeBaseContext *intervalTypeBase();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEAR_MONTH();
    antlr4::tree::TerminalNode *DAY_HOUR();
    antlr4::tree::TerminalNode *DAY_MINUTE();
    antlr4::tree::TerminalNode *DAY_SECOND();
    antlr4::tree::TerminalNode *HOUR_MINUTE();
    antlr4::tree::TerminalNode *HOUR_SECOND();
    antlr4::tree::TerminalNode *MINUTE_SECOND();
    antlr4::tree::TerminalNode *SECOND_MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE_MICROSECOND();
    antlr4::tree::TerminalNode *HOUR_MICROSECOND();
    antlr4::tree::TerminalNode *DAY_MICROSECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntervalTypeContext* intervalType();

  class  EnableTypeContext : public antlr4::ParserRuleContext {
  public:
    EnableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SLAVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnableTypeContext* enableType();

  class  IndexTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *HASH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexTypeContext* indexType();

  class  IndexOptionContext : public antlr4::ParserRuleContext {
  public:
    IndexOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    IndexTypeContext *indexType();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PARSER();
    UidContext *uid();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *INVISIBLE();
    antlr4::tree::TerminalNode *VISIBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexOptionContext* indexOption();

  class  ProcedureParameterContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *direction = nullptr;;
    ProcedureParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProcedureParameterContext* procedureParameter();

  class  FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    DataTypeContext *dataType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionParameterContext* functionParameter();

  class  RoutineOptionContext : public antlr4::ParserRuleContext {
  public:
    RoutineOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RoutineOptionContext() = default;
    void copyFrom(RoutineOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RoutineBehaviorContext : public RoutineOptionContext {
  public:
    RoutineBehaviorContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RoutineLanguageContext : public RoutineOptionContext {
  public:
    RoutineLanguageContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RoutineCommentContext : public RoutineOptionContext {
  public:
    RoutineCommentContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RoutineSecurityContext : public RoutineOptionContext {
  public:
    RoutineSecurityContext(RoutineOptionContext *ctx);

    antlr4::Token *context = nullptr;
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RoutineDataContext : public RoutineOptionContext {
  public:
    RoutineDataContext(RoutineOptionContext *ctx);

    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  RoutineOptionContext* routineOption();

  class  ServerOptionContext : public antlr4::ParserRuleContext {
  public:
    ServerOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PORT();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ServerOptionContext* serverOption();

  class  CreateDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<CreateDefinitionContext *> createDefinition();
    CreateDefinitionContext* createDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateDefinitionsContext* createDefinitions();

  class  CreateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    CreateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateDefinitionContext() = default;
    void copyFrom(CreateDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnDeclarationContext : public CreateDefinitionContext {
  public:
    ColumnDeclarationContext(CreateDefinitionContext *ctx);

    UidContext *uid();
    ColumnDefinitionContext *columnDefinition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ConstraintDeclarationContext : public CreateDefinitionContext {
  public:
    ConstraintDeclarationContext(CreateDefinitionContext *ctx);

    TableConstraintContext *tableConstraint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IndexDeclarationContext : public CreateDefinitionContext {
  public:
    IndexDeclarationContext(CreateDefinitionContext *ctx);

    IndexColumnDefinitionContext *indexColumnDefinition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  CreateDefinitionContext* createDefinition();

  class  ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DataTypeContext *dataType();
    std::vector<ColumnConstraintContext *> columnConstraint();
    ColumnConstraintContext* columnConstraint(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ColumnDefinitionContext* columnDefinition();

  class  ColumnConstraintContext : public antlr4::ParserRuleContext {
  public:
    ColumnConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnConstraintContext() = default;
    void copyFrom(ColumnConstraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StorageColumnConstraintContext : public ColumnConstraintContext {
  public:
    StorageColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::Token *storageval = nullptr;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FormatColumnConstraintContext : public ColumnConstraintContext {
  public:
    FormatColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::Token *colformat = nullptr;
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CollateColumnConstraintContext : public ColumnConstraintContext {
  public:
    CollateColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AutoIncrementColumnConstraintContext : public ColumnConstraintContext {
  public:
    AutoIncrementColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();
    CurrentTimestampContext *currentTimestamp();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CommentColumnConstraintContext : public ColumnConstraintContext {
  public:
    CommentColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PrimaryKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    PrimaryKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *PRIMARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UniqueKeyColumnConstraintContext : public ColumnConstraintContext {
  public:
    UniqueKeyColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SerialDefaultColumnConstraintContext : public ColumnConstraintContext {
  public:
    SerialDefaultColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *VALUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NullColumnConstraintContext : public ColumnConstraintContext {
  public:
    NullColumnConstraintContext(ColumnConstraintContext *ctx);

    NullNotnullContext *nullNotnull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefaultColumnConstraintContext : public ColumnConstraintContext {
  public:
    DefaultColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ReferenceColumnConstraintContext : public ColumnConstraintContext {
  public:
    ReferenceColumnConstraintContext(ColumnConstraintContext *ctx);

    ReferenceDefinitionContext *referenceDefinition();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GeneratedColumnConstraintContext : public ColumnConstraintContext {
  public:
    GeneratedColumnConstraintContext(ColumnConstraintContext *ctx);

    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *STORED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ColumnConstraintContext* columnConstraint();

  class  TableConstraintContext : public antlr4::ParserRuleContext {
  public:
    TableConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableConstraintContext() = default;
    void copyFrom(TableConstraintContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UniqueKeyTableConstraintContext : public TableConstraintContext {
  public:
    UniqueKeyTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::Token *indexFormat = nullptr;
    MySqlParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *UNIQUE();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CheckTableConstraintContext : public TableConstraintContext {
  public:
    CheckTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PrimaryKeyTableConstraintContext : public TableConstraintContext {
  public:
    PrimaryKeyTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    MySqlParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForeignKeyTableConstraintContext : public TableConstraintContext {
  public:
    ForeignKeyTableConstraintContext(TableConstraintContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    MySqlParser::UidContext *index = nullptr;
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    ReferenceDefinitionContext *referenceDefinition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  TableConstraintContext* tableConstraint();

  class  ReferenceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *matchType = nullptr;;
    ReferenceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    TableNameContext *tableName();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *MATCH();
    ReferenceActionContext *referenceAction();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *SIMPLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferenceDefinitionContext* referenceDefinition();

  class  ReferenceActionContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::ReferenceControlTypeContext *onDelete = nullptr;;
    MySqlParser::ReferenceControlTypeContext *onUpdate = nullptr;;
    ReferenceActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *DELETE();
    std::vector<ReferenceControlTypeContext *> referenceControlType();
    ReferenceControlTypeContext* referenceControlType(size_t i);
    antlr4::tree::TerminalNode *UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferenceActionContext* referenceAction();

  class  ReferenceControlTypeContext : public antlr4::ParserRuleContext {
  public:
    ReferenceControlTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferenceControlTypeContext* referenceControlType();

  class  IndexColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    IndexColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IndexColumnDefinitionContext() = default;
    void copyFrom(IndexColumnDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpecialIndexDeclarationContext : public IndexColumnDefinitionContext {
  public:
    SpecialIndexDeclarationContext(IndexColumnDefinitionContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    UidContext *uid();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SimpleIndexDeclarationContext : public IndexColumnDefinitionContext {
  public:
    SimpleIndexDeclarationContext(IndexColumnDefinitionContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  IndexColumnDefinitionContext* indexColumnDefinition();

  class  TableOptionContext : public antlr4::ParserRuleContext {
  public:
    TableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableOptionContext() = default;
    void copyFrom(TableOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableOptionEngineContext : public TableOptionContext {
  public:
    TableOptionEngineContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionMaxRowsContext : public TableOptionContext {
  public:
    TableOptionMaxRowsContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *MAX_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionCollateContext : public TableOptionContext {
  public:
    TableOptionCollateContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionPersistentContext : public TableOptionContext {
  public:
    TableOptionPersistentContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionTablespaceContext : public TableOptionContext {
  public:
    TableOptionTablespaceContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    TablespaceStorageContext *tablespaceStorage();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionPackKeysContext : public TableOptionContext {
  public:
    TableOptionPackKeysContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionPasswordContext : public TableOptionContext {
  public:
    TableOptionPasswordContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionUnionContext : public TableOptionContext {
  public:
    TableOptionUnionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    TablesContext *tables();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionSamplePageContext : public TableOptionContext {
  public:
    TableOptionSamplePageContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionCharsetContext : public TableOptionContext {
  public:
    TableOptionCharsetContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionIndexDirectoryContext : public TableOptionContext {
  public:
    TableOptionIndexDirectoryContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionKeyBlockSizeContext : public TableOptionContext {
  public:
    TableOptionKeyBlockSizeContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionEncryptionContext : public TableOptionContext {
  public:
    TableOptionEncryptionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionDataDirectoryContext : public TableOptionContext {
  public:
    TableOptionDataDirectoryContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionRecalculationContext : public TableOptionContext {
  public:
    TableOptionRecalculationContext(TableOptionContext *ctx);

    antlr4::Token *extBoolValue = nullptr;
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionAutoIncrementContext : public TableOptionContext {
  public:
    TableOptionAutoIncrementContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionChecksumContext : public TableOptionContext {
  public:
    TableOptionChecksumContext(TableOptionContext *ctx);

    antlr4::Token *boolValue = nullptr;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *PAGE_CHECKSUM();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionDelayContext : public TableOptionContext {
  public:
    TableOptionDelayContext(TableOptionContext *ctx);

    antlr4::Token *boolValue = nullptr;
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionConnectionContext : public TableOptionContext {
  public:
    TableOptionConnectionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionCommentContext : public TableOptionContext {
  public:
    TableOptionCommentContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionAverageContext : public TableOptionContext {
  public:
    TableOptionAverageContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionRowFormatContext : public TableOptionContext {
  public:
    TableOptionRowFormatContext(TableOptionContext *ctx);

    antlr4::Token *rowFormat = nullptr;
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionCompressionContext : public TableOptionContext {
  public:
    TableOptionCompressionContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionInsertMethodContext : public TableOptionContext {
  public:
    TableOptionInsertMethodContext(TableOptionContext *ctx);

    antlr4::Token *insertMethod = nullptr;
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableOptionMinRowsContext : public TableOptionContext {
  public:
    TableOptionMinRowsContext(TableOptionContext *ctx);

    antlr4::tree::TerminalNode *MIN_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  TableOptionContext* tableOption();

  class  TablespaceStorageContext : public antlr4::ParserRuleContext {
  public:
    TablespaceStorageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TablespaceStorageContext* tablespaceStorage();

  class  PartitionDefinitionsContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::DecimalLiteralContext *count = nullptr;;
    MySqlParser::DecimalLiteralContext *subCount = nullptr;;
    PartitionDefinitionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    PartitionFunctionDefinitionContext *partitionFunctionDefinition();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *SUBPARTITION();
    SubpartitionFunctionDefinitionContext *subpartitionFunctionDefinition();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartitionDefinitionsContext* partitionDefinitions();

  class  PartitionFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionFunctionDefinitionContext() = default;
    void copyFrom(PartitionFunctionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionFunctionKeyContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionKeyContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionFunctionHashContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionHashContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionFunctionListContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionListContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COLUMNS();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionFunctionRangeContext : public PartitionFunctionDefinitionContext {
  public:
    PartitionFunctionRangeContext(PartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COLUMNS();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PartitionFunctionDefinitionContext* partitionFunctionDefinition();

  class  SubpartitionFunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionFunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SubpartitionFunctionDefinitionContext() = default;
    void copyFrom(SubpartitionFunctionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubPartitionFunctionHashContext : public SubpartitionFunctionDefinitionContext {
  public:
    SubPartitionFunctionHashContext(SubpartitionFunctionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubPartitionFunctionKeyContext : public SubpartitionFunctionDefinitionContext {
  public:
    SubPartitionFunctionKeyContext(SubpartitionFunctionDefinitionContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *LINEAR();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SubpartitionFunctionDefinitionContext* subpartitionFunctionDefinition();

  class  PartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionDefinitionContext() = default;
    void copyFrom(PartitionDefinitionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionComparisionContext : public PartitionDefinitionContext {
  public:
    PartitionComparisionContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionListAtomContext : public PartitionDefinitionContext {
  public:
    PartitionListAtomContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionListVectorContext : public PartitionDefinitionContext {
  public:
    PartitionListVectorContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinerVectorContext *> partitionDefinerVector();
    PartitionDefinerVectorContext* partitionDefinerVector(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionSimpleContext : public PartitionDefinitionContext {
  public:
    PartitionSimpleContext(PartitionDefinitionContext *ctx);

    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);
    std::vector<SubpartitionDefinitionContext *> subpartitionDefinition();
    SubpartitionDefinitionContext* subpartitionDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PartitionDefinitionContext* partitionDefinition();

  class  PartitionDefinerAtomContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinerAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MAXVALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartitionDefinerAtomContext* partitionDefinerAtom();

  class  PartitionDefinerVectorContext : public antlr4::ParserRuleContext {
  public:
    PartitionDefinerVectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinerAtomContext *> partitionDefinerAtom();
    PartitionDefinerAtomContext* partitionDefinerAtom(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartitionDefinerVectorContext* partitionDefinerVector();

  class  SubpartitionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    SubpartitionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUBPARTITION();
    UidContext *uid();
    std::vector<PartitionOptionContext *> partitionOption();
    PartitionOptionContext* partitionOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubpartitionDefinitionContext* subpartitionDefinition();

  class  PartitionOptionContext : public antlr4::ParserRuleContext {
  public:
    PartitionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PartitionOptionContext() = default;
    void copyFrom(PartitionOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PartitionOptionCommentContext : public PartitionOptionContext {
  public:
    PartitionOptionCommentContext(PartitionOptionContext *ctx);

    antlr4::Token *comment = nullptr;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionOptionNodeGroupContext : public PartitionOptionContext {
  public:
    PartitionOptionNodeGroupContext(PartitionOptionContext *ctx);

    MySqlParser::UidContext *nodegroup = nullptr;
    antlr4::tree::TerminalNode *NODEGROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionOptionIndexDirectoryContext : public PartitionOptionContext {
  public:
    PartitionOptionIndexDirectoryContext(PartitionOptionContext *ctx);

    antlr4::Token *indexDirectory = nullptr;
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionOptionMaxRowsContext : public PartitionOptionContext {
  public:
    PartitionOptionMaxRowsContext(PartitionOptionContext *ctx);

    MySqlParser::DecimalLiteralContext *maxRows = nullptr;
    antlr4::tree::TerminalNode *MAX_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionOptionTablespaceContext : public PartitionOptionContext {
  public:
    PartitionOptionTablespaceContext(PartitionOptionContext *ctx);

    MySqlParser::UidContext *tablespace = nullptr;
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionOptionEngineContext : public PartitionOptionContext {
  public:
    PartitionOptionEngineContext(PartitionOptionContext *ctx);

    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionOptionMinRowsContext : public PartitionOptionContext {
  public:
    PartitionOptionMinRowsContext(PartitionOptionContext *ctx);

    MySqlParser::DecimalLiteralContext *minRows = nullptr;
    antlr4::tree::TerminalNode *MIN_ROWS();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PartitionOptionDataDirectoryContext : public PartitionOptionContext {
  public:
    PartitionOptionDataDirectoryContext(PartitionOptionContext *ctx);

    antlr4::Token *dataDirectory = nullptr;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PartitionOptionContext* partitionOption();

  class  AlterDatabaseContext : public antlr4::ParserRuleContext {
  public:
    AlterDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterDatabaseContext() = default;
    void copyFrom(AlterDatabaseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterUpgradeNameContext : public AlterDatabaseContext {
  public:
    AlterUpgradeNameContext(AlterDatabaseContext *ctx);

    antlr4::Token *dbFormat = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    UidContext *uid();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterSimpleDatabaseContext : public AlterDatabaseContext {
  public:
    AlterSimpleDatabaseContext(AlterDatabaseContext *ctx);

    antlr4::Token *dbFormat = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    UidContext *uid();
    std::vector<CreateDatabaseOptionContext *> createDatabaseOption();
    CreateDatabaseOptionContext* createDatabaseOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  AlterDatabaseContext* alterDatabase();

  class  AlterEventContext : public antlr4::ParserRuleContext {
  public:
    AlterEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EVENT();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    OwnerStatementContext *ownerStatement();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *SCHEDULE();
    ScheduleExpressionContext *scheduleExpression();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    EnableTypeContext *enableType();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *DO();
    RoutineBodyContext *routineBody();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterEventContext* alterEvent();

  class  AlterFunctionContext : public antlr4::ParserRuleContext {
  public:
    AlterFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterFunctionContext* alterFunction();

  class  AlterInstanceContext : public antlr4::ParserRuleContext {
  public:
    AlterInstanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterInstanceContext* alterInstance();

  class  AlterLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    AlterLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterLogfileGroupContext* alterLogfileGroup();

  class  AlterProcedureContext : public antlr4::ParserRuleContext {
  public:
    AlterProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    std::vector<RoutineOptionContext *> routineOption();
    RoutineOptionContext* routineOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterProcedureContext* alterProcedure();

  class  AlterServerContext : public antlr4::ParserRuleContext {
  public:
    AlterServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ServerOptionContext *> serverOption();
    ServerOptionContext* serverOption(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterServerContext* alterServer();

  class  AlterTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;;
    AlterTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *IGNORE();
    std::vector<AlterSpecificationContext *> alterSpecification();
    AlterSpecificationContext* alterSpecification(size_t i);
    PartitionDefinitionsContext *partitionDefinitions();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterTableContext* alterTable();

  class  AlterTablespaceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *objectAction = nullptr;;
    AlterTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    FileSizeLiteralContext *fileSizeLiteral();
    antlr4::tree::TerminalNode *WAIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterTablespaceContext* alterTablespace();

  class  AlterViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *algType = nullptr;;
    antlr4::Token *secContext = nullptr;;
    antlr4::Token *checkOpt = nullptr;;
    AlterViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *VIEW();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *AS();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    OwnerStatementContext *ownerStatement();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AlterViewContext* alterView();

  class  AlterSpecificationContext : public antlr4::ParserRuleContext {
  public:
    AlterSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterSpecificationContext() = default;
    void copyFrom(AlterSpecificationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterByDisableKeysContext : public AlterSpecificationContext {
  public:
    AlterByDisableKeysContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDefaultCharsetContext : public AlterSpecificationContext {
  public:
    AlterByDefaultCharsetContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByRenameColumnContext : public AlterSpecificationContext {
  public:
    AlterByRenameColumnContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *oldColumn = nullptr;
    MySqlParser::UidContext *newColumn = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *TO();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByConvertCharsetContext : public AlterSpecificationContext {
  public:
    AlterByConvertCharsetContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddPartitionContext : public AlterSpecificationContext {
  public:
    AlterByAddPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddForeignKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddForeignKeyContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    MySqlParser::UidContext *indexName = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    ReferenceDefinitionContext *referenceDefinition();
    antlr4::tree::TerminalNode *CONSTRAINT();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByRenameIndexContext : public AlterSpecificationContext {
  public:
    AlterByRenameIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByRemovePartitioningContext : public AlterSpecificationContext {
  public:
    AlterByRemovePartitioningContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *PARTITIONING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByRenameContext : public AlterSpecificationContext {
  public:
    AlterByRenameContext(AlterSpecificationContext *ctx);

    antlr4::Token *renameFormat = nullptr;
    antlr4::tree::TerminalNode *RENAME();
    UidContext *uid();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByOptimizePartitionContext : public AlterSpecificationContext {
  public:
    AlterByOptimizePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByImportTablespaceContext : public AlterSpecificationContext {
  public:
    AlterByImportTablespaceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *TABLESPACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByCoalescePartitionContext : public AlterSpecificationContext {
  public:
    AlterByCoalescePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *PARTITION();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddColumnsContext : public AlterSpecificationContext {
  public:
    AlterByAddColumnsContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<ColumnDefinitionContext *> columnDefinition();
    ColumnDefinitionContext* columnDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDropForeignKeyContext : public AlterSpecificationContext {
  public:
    AlterByDropForeignKeyContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddCheckTableConstraintContext : public AlterSpecificationContext {
  public:
    AlterByAddCheckTableConstraintContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByRebuildPartitionContext : public AlterSpecificationContext {
  public:
    AlterByRebuildPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByUpgradePartitioningContext : public AlterSpecificationContext {
  public:
    AlterByUpgradePartitioningContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *PARTITIONING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByRepairPartitionContext : public AlterSpecificationContext {
  public:
    AlterByRepairPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByExchangePartitionContext : public AlterSpecificationContext {
  public:
    AlterByExchangePartitionContext(AlterSpecificationContext *ctx);

    antlr4::Token *validationFormat = nullptr;
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *PARTITION();
    UidContext *uid();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddIndexContext : public AlterSpecificationContext {
  public:
    AlterByAddIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *ADD();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    UidContext *uid();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDropColumnContext : public AlterSpecificationContext {
  public:
    AlterByDropColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *RESTRICT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByImportPartitionContext : public AlterSpecificationContext {
  public:
    AlterByImportPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByChangeDefaultContext : public AlterSpecificationContext {
  public:
    AlterByChangeDefaultContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    UidContext *uid();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByForceContext : public AlterSpecificationContext {
  public:
    AlterByForceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *FORCE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDropPartitionContext : public AlterSpecificationContext {
  public:
    AlterByDropPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddSpecialIndexContext : public AlterSpecificationContext {
  public:
    AlterByAddSpecialIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *keyType = nullptr;
    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *ADD();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *FULLTEXT();
    antlr4::tree::TerminalNode *SPATIAL();
    UidContext *uid();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByModifyColumnContext : public AlterSpecificationContext {
  public:
    AlterByModifyColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *MODIFY();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    ColumnDefinitionContext *columnDefinition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByTableOptionContext : public AlterSpecificationContext {
  public:
    AlterByTableOptionContext(AlterSpecificationContext *ctx);

    std::vector<TableOptionContext *> tableOption();
    TableOptionContext* tableOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDropPrimaryKeyContext : public AlterSpecificationContext {
  public:
    AlterByDropPrimaryKeyContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByLockContext : public AlterSpecificationContext {
  public:
    AlterByLockContext(AlterSpecificationContext *ctx);

    antlr4::Token *lockType = nullptr;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDiscardPartitionContext : public AlterSpecificationContext {
  public:
    AlterByDiscardPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDiscardTablespaceContext : public AlterSpecificationContext {
  public:
    AlterByDiscardTablespaceContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *TABLESPACE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByValidateContext : public AlterSpecificationContext {
  public:
    AlterByValidateContext(AlterSpecificationContext *ctx);

    antlr4::Token *validationFormat = nullptr;
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WITH();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddPrimaryKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddPrimaryKeyContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByCheckPartitionContext : public AlterSpecificationContext {
  public:
    AlterByCheckPartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByEnableKeysContext : public AlterSpecificationContext {
  public:
    AlterByEnableKeysContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *KEYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByReorganizePartitionContext : public AlterSpecificationContext {
  public:
    AlterByReorganizePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<PartitionDefinitionContext *> partitionDefinition();
    PartitionDefinitionContext* partitionDefinition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterBySetAlgorithmContext : public AlterSpecificationContext {
  public:
    AlterBySetAlgorithmContext(AlterSpecificationContext *ctx);

    antlr4::Token *algType = nullptr;
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAnalyzePartitionContext : public AlterSpecificationContext {
  public:
    AlterByAnalyzePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByChangeColumnContext : public AlterSpecificationContext {
  public:
    AlterByChangeColumnContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *oldColumn = nullptr;
    MySqlParser::UidContext *newColumn = nullptr;
    MySqlParser::UidContext *afterColumn = nullptr;
    antlr4::tree::TerminalNode *CHANGE();
    ColumnDefinitionContext *columnDefinition();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddUniqueKeyContext : public AlterSpecificationContext {
  public:
    AlterByAddUniqueKeyContext(AlterSpecificationContext *ctx);

    MySqlParser::UidContext *name = nullptr;
    antlr4::Token *indexFormat = nullptr;
    MySqlParser::UidContext *indexName = nullptr;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *UNIQUE();
    IndexColumnNamesContext *indexColumnNames();
    antlr4::tree::TerminalNode *CONSTRAINT();
    IndexTypeContext *indexType();
    std::vector<IndexOptionContext *> indexOption();
    IndexOptionContext* indexOption(size_t i);
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByTruncatePartitionContext : public AlterSpecificationContext {
  public:
    AlterByTruncatePartitionContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *PARTITION();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByDropIndexContext : public AlterSpecificationContext {
  public:
    AlterByDropIndexContext(AlterSpecificationContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByAddColumnContext : public AlterSpecificationContext {
  public:
    AlterByAddColumnContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    ColumnDefinitionContext *columnDefinition();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *AFTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterByOrderContext : public AlterSpecificationContext {
  public:
    AlterByOrderContext(AlterSpecificationContext *ctx);

    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    UidListContext *uidList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  AlterSpecificationContext* alterSpecification();

  class  DropDatabaseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dbFormat = nullptr;;
    DropDatabaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropDatabaseContext* dropDatabase();

  class  DropEventContext : public antlr4::ParserRuleContext {
  public:
    DropEventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropEventContext* dropEvent();

  class  DropIndexContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *intimeAction = nullptr;;
    antlr4::Token *algType = nullptr;;
    antlr4::Token *lockType = nullptr;;
    DropIndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    UidContext *uid();
    antlr4::tree::TerminalNode *ON();
    TableNameContext *tableName();
    std::vector<antlr4::tree::TerminalNode *> ALGORITHM();
    antlr4::tree::TerminalNode* ALGORITHM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *OFFLINE();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INPLACE();
    antlr4::tree::TerminalNode* INPLACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COPY();
    antlr4::tree::TerminalNode* COPY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARED();
    antlr4::tree::TerminalNode* SHARED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUSIVE();
    antlr4::tree::TerminalNode* EXCLUSIVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropIndexContext* dropIndex();

  class  DropLogfileGroupContext : public antlr4::ParserRuleContext {
  public:
    DropLogfileGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *GROUP();
    UidContext *uid();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    EngineNameContext *engineName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropLogfileGroupContext* dropLogfileGroup();

  class  DropProcedureContext : public antlr4::ParserRuleContext {
  public:
    DropProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PROCEDURE();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropProcedureContext* dropProcedure();

  class  DropFunctionContext : public antlr4::ParserRuleContext {
  public:
    DropFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropFunctionContext* dropFunction();

  class  DropServerContext : public antlr4::ParserRuleContext {
  public:
    DropServerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    UidContext *uid();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropServerContext* dropServer();

  class  DropTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropType = nullptr;;
    DropTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *TEMPORARY();
    IfExistsContext *ifExists();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropTableContext* dropTable();

  class  DropTablespaceContext : public antlr4::ParserRuleContext {
  public:
    DropTablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLESPACE();
    UidContext *uid();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropTablespaceContext* dropTablespace();

  class  DropTriggerContext : public antlr4::ParserRuleContext {
  public:
    DropTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    FullIdContext *fullId();
    IfExistsContext *ifExists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropTriggerContext* dropTrigger();

  class  DropViewContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropType = nullptr;;
    DropViewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    std::vector<FullIdContext *> fullId();
    FullIdContext* fullId(size_t i);
    IfExistsContext *ifExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropViewContext* dropView();

  class  RenameTableContext : public antlr4::ParserRuleContext {
  public:
    RenameTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<RenameTableClauseContext *> renameTableClause();
    RenameTableClauseContext* renameTableClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RenameTableContext* renameTable();

  class  RenameTableClauseContext : public antlr4::ParserRuleContext {
  public:
    RenameTableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RenameTableClauseContext* renameTableClause();

  class  TruncateTableContext : public antlr4::ParserRuleContext {
  public:
    TruncateTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *TABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TruncateTableContext* truncateTable();

  class  CallStatementContext : public antlr4::ParserRuleContext {
  public:
    CallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    ConstantsContext *constants();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallStatementContext* callStatement();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleDeleteStatementContext *singleDeleteStatement();
    MultipleDeleteStatementContext *multipleDeleteStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    ExpressionsContext *expressions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoStatementContext* doStatement();

  class  HandlerStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandlerOpenStatementContext *handlerOpenStatement();
    HandlerReadIndexStatementContext *handlerReadIndexStatement();
    HandlerReadStatementContext *handlerReadStatement();
    HandlerCloseStatementContext *handlerCloseStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HandlerStatementContext* handlerStatement();

  class  InsertStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MySqlParser::UidListContext *partitions = nullptr;;
    MySqlParser::UidListContext *columns = nullptr;;
    MySqlParser::UpdatedElementContext *setFirst = nullptr;;
    MySqlParser::UpdatedElementContext *updatedElementContext = nullptr;;
    std::vector<UpdatedElementContext *> setElements;;
    MySqlParser::UpdatedElementContext *duplicatedFirst = nullptr;;
    std::vector<UpdatedElementContext *> duplicatedElements;;
    InsertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    TableNameContext *tableName();
    InsertStatementValueContext *insertStatementValue();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UPDATE();
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InsertStatementContext* insertStatement();

  class  LoadDataStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    antlr4::Token *filename = nullptr;;
    antlr4::Token *violation = nullptr;;
    MySqlParser::CharsetNameContext *charset = nullptr;;
    antlr4::Token *fieldsFormat = nullptr;;
    antlr4::Token *linesFormat = nullptr;;
    LoadDataStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INFILE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    UidListContext *uidList();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LINES();
    antlr4::tree::TerminalNode* LINES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    DecimalLiteralContext *decimalLiteral();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *ROWS();
    std::vector<SelectFieldsIntoContext *> selectFieldsInto();
    SelectFieldsIntoContext* selectFieldsInto(size_t i);
    std::vector<SelectLinesIntoContext *> selectLinesInto();
    SelectLinesIntoContext* selectLinesInto(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadDataStatementContext* loadDataStatement();

  class  LoadXmlStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    antlr4::Token *filename = nullptr;;
    antlr4::Token *violation = nullptr;;
    MySqlParser::CharsetNameContext *charset = nullptr;;
    antlr4::Token *tag = nullptr;;
    antlr4::Token *linesFormat = nullptr;;
    LoadXmlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *INFILE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *TABLE();
    TableNameContext *tableName();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *CHARACTER();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *GREATER_SYMBOL();
    std::vector<antlr4::tree::TerminalNode *> IGNORE();
    antlr4::tree::TerminalNode* IGNORE(size_t i);
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LINES();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadXmlStatementContext* loadXmlStatement();

  class  ReplaceStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MySqlParser::UidListContext *partitions = nullptr;;
    MySqlParser::UidListContext *columns = nullptr;;
    MySqlParser::UpdatedElementContext *setFirst = nullptr;;
    MySqlParser::UpdatedElementContext *updatedElementContext = nullptr;;
    std::vector<UpdatedElementContext *> setElements;;
    ReplaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    TableNameContext *tableName();
    InsertStatementValueContext *insertStatementValue();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *DELAYED();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReplaceStatementContext* replaceStatement();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectStatementContext() = default;
    void copyFrom(SelectStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnionSelectContext : public SelectStatementContext {
  public:
    UnionSelectContext(SelectStatementContext *ctx);

    antlr4::Token *unionType = nullptr;
    QuerySpecificationNointoContext *querySpecificationNointo();
    std::vector<UnionStatementContext *> unionStatement();
    UnionStatementContext* unionStatement(size_t i);
    antlr4::tree::TerminalNode *UNION();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    LockClauseContext *lockClause();
    QuerySpecificationContext *querySpecification();
    QueryExpressionContext *queryExpression();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnionParenthesisSelectContext : public SelectStatementContext {
  public:
    UnionParenthesisSelectContext(SelectStatementContext *ctx);

    antlr4::Token *unionType = nullptr;
    QueryExpressionNointoContext *queryExpressionNointo();
    std::vector<UnionParenthesisContext *> unionParenthesis();
    UnionParenthesisContext* unionParenthesis(size_t i);
    antlr4::tree::TerminalNode *UNION();
    QueryExpressionContext *queryExpression();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    LockClauseContext *lockClause();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SimpleSelectContext : public SelectStatementContext {
  public:
    SimpleSelectContext(SelectStatementContext *ctx);

    QuerySpecificationContext *querySpecification();
    LockClauseContext *lockClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesisSelectContext : public SelectStatementContext {
  public:
    ParenthesisSelectContext(SelectStatementContext *ctx);

    QueryExpressionContext *queryExpression();
    LockClauseContext *lockClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SelectStatementContext* selectStatement();

  class  UpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    UpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleUpdateStatementContext *singleUpdateStatement();
    MultipleUpdateStatementContext *multipleUpdateStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpdateStatementContext* updateStatement();

  class  InsertStatementValueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *insertFormat = nullptr;;
    InsertStatementValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectStatementContext *selectStatement();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<ExpressionsWithDefaultsContext *> expressionsWithDefaults();
    ExpressionsWithDefaultsContext* expressionsWithDefaults(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VALUE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InsertStatementValueContext* insertStatementValue();

  class  UpdatedElementContext : public antlr4::ParserRuleContext {
  public:
    UpdatedElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullColumnNameContext *fullColumnName();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UpdatedElementContext* updatedElement();

  class  AssignmentFieldContext : public antlr4::ParserRuleContext {
  public:
    AssignmentFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentFieldContext* assignmentField();

  class  LockClauseContext : public antlr4::ParserRuleContext {
  public:
    LockClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LockClauseContext* lockClause();

  class  SingleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    SingleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    OrderByClauseContext *orderByClause();
    antlr4::tree::TerminalNode *LIMIT();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleDeleteStatementContext* singleDeleteStatement();

  class  MultipleDeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MultipleDeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultipleDeleteStatementContext* multipleDeleteStatement();

  class  HandlerOpenStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerOpenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *OPEN();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HandlerOpenStatementContext* handlerOpenStatement();

  class  HandlerReadIndexStatementContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UidContext *index = nullptr;;
    antlr4::Token *moveOrder = nullptr;;
    HandlerReadIndexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    UidContext *uid();
    ComparisonOperatorContext *comparisonOperator();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ConstantsContext *constants();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LIMIT();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HandlerReadIndexStatementContext* handlerReadIndexStatement();

  class  HandlerReadStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *moveOrder = nullptr;;
    HandlerReadStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LIMIT();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HandlerReadStatementContext* handlerReadStatement();

  class  HandlerCloseStatementContext : public antlr4::ParserRuleContext {
  public:
    HandlerCloseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HANDLER();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HandlerCloseStatementContext* handlerCloseStatement();

  class  SingleUpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    SingleUpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *SET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    UidContext *uid();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();
    antlr4::tree::TerminalNode *LOW_PRIORITY();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleUpdateStatementContext* singleUpdateStatement();

  class  MultipleUpdateStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *priority = nullptr;;
    MultipleUpdateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *SET();
    std::vector<UpdatedElementContext *> updatedElement();
    UpdatedElementContext* updatedElement(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultipleUpdateStatementContext* multipleUpdateStatement();

  class  OrderByClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByExpressionContext *> orderByExpression();
    OrderByExpressionContext* orderByExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrderByClauseContext* orderByClause();

  class  OrderByExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;;
    OrderByExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OrderByExpressionContext* orderByExpression();

  class  TableSourcesContext : public antlr4::ParserRuleContext {
  public:
    TableSourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableSourceContext *> tableSource();
    TableSourceContext* tableSource(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableSourcesContext* tableSources();

  class  TableSourceContext : public antlr4::ParserRuleContext {
  public:
    TableSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableSourceContext() = default;
    void copyFrom(TableSourceContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableSourceNestedContext : public TableSourceContext {
  public:
    TableSourceNestedContext(TableSourceContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<JoinPartContext *> joinPart();
    JoinPartContext* joinPart(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableSourceBaseContext : public TableSourceContext {
  public:
    TableSourceBaseContext(TableSourceContext *ctx);

    TableSourceItemContext *tableSourceItem();
    std::vector<JoinPartContext *> joinPart();
    JoinPartContext* joinPart(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  TableSourceContext* tableSource();

  class  TableSourceItemContext : public antlr4::ParserRuleContext {
  public:
    TableSourceItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableSourceItemContext() = default;
    void copyFrom(TableSourceItemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubqueryTableItemContext : public TableSourceItemContext {
  public:
    SubqueryTableItemContext(TableSourceItemContext *ctx);

    MySqlParser::SelectStatementContext *parenthesisSubquery = nullptr;
    MySqlParser::UidContext *alias = nullptr;
    UidContext *uid();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AtomTableItemContext : public TableSourceItemContext {
  public:
    AtomTableItemContext(TableSourceItemContext *ctx);

    MySqlParser::UidContext *alias = nullptr;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<IndexHintContext *> indexHint();
    IndexHintContext* indexHint(size_t i);
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TableSourcesItemContext : public TableSourceItemContext {
  public:
    TableSourcesItemContext(TableSourceItemContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  TableSourceItemContext* tableSourceItem();

  class  IndexHintContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *indexHintAction = nullptr;;
    antlr4::Token *keyFormat = nullptr;;
    IndexHintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *FOR();
    IndexHintTypeContext *indexHintType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexHintContext* indexHint();

  class  IndexHintTypeContext : public antlr4::ParserRuleContext {
  public:
    IndexHintTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *GROUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexHintTypeContext* indexHintType();

  class  JoinPartContext : public antlr4::ParserRuleContext {
  public:
    JoinPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    JoinPartContext() = default;
    void copyFrom(JoinPartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InnerJoinContext : public JoinPartContext {
  public:
    InnerJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NaturalJoinContext : public JoinPartContext {
  public:
    NaturalJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OuterJoinContext : public JoinPartContext {
  public:
    OuterJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *OUTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  StraightJoinContext : public JoinPartContext {
  public:
    StraightJoinContext(JoinPartContext *ctx);

    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    TableSourceItemContext *tableSourceItem();
    antlr4::tree::TerminalNode *ON();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  JoinPartContext* joinPart();

  class  QueryExpressionContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    QuerySpecificationContext *querySpecification();
    antlr4::tree::TerminalNode *RR_BRACKET();
    QueryExpressionContext *queryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QueryExpressionContext* queryExpression();

  class  QueryExpressionNointoContext : public antlr4::ParserRuleContext {
  public:
    QueryExpressionNointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    QuerySpecificationNointoContext *querySpecificationNointo();
    antlr4::tree::TerminalNode *RR_BRACKET();
    QueryExpressionNointoContext *queryExpressionNointo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QueryExpressionNointoContext* queryExpressionNointo();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    SelectElementsContext *selectElements();
    std::vector<SelectSpecContext *> selectSpec();
    SelectSpecContext* selectSpec(size_t i);
    SelectIntoExpressionContext *selectIntoExpression();
    FromClauseContext *fromClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuerySpecificationContext* querySpecification();

  class  QuerySpecificationNointoContext : public antlr4::ParserRuleContext {
  public:
    QuerySpecificationNointoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    SelectElementsContext *selectElements();
    std::vector<SelectSpecContext *> selectSpec();
    SelectSpecContext* selectSpec(size_t i);
    FromClauseContext *fromClause();
    OrderByClauseContext *orderByClause();
    LimitClauseContext *limitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuerySpecificationNointoContext* querySpecificationNointo();

  class  UnionParenthesisContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *unionType = nullptr;;
    UnionParenthesisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    QueryExpressionNointoContext *queryExpressionNointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionParenthesisContext* unionParenthesis();

  class  UnionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *unionType = nullptr;;
    UnionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    QuerySpecificationNointoContext *querySpecificationNointo();
    QueryExpressionNointoContext *queryExpressionNointo();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionStatementContext* unionStatement();

  class  SelectSpecContext : public antlr4::ParserRuleContext {
  public:
    SelectSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTINCTROW();
    antlr4::tree::TerminalNode *HIGH_PRIORITY();
    antlr4::tree::TerminalNode *STRAIGHT_JOIN();
    antlr4::tree::TerminalNode *SQL_SMALL_RESULT();
    antlr4::tree::TerminalNode *SQL_BIG_RESULT();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_CALC_FOUND_ROWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectSpecContext* selectSpec();

  class  SelectElementsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *star = nullptr;;
    SelectElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectElementContext *> selectElement();
    SelectElementContext* selectElement(size_t i);
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectElementsContext* selectElements();

  class  SelectElementContext : public antlr4::ParserRuleContext {
  public:
    SelectElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectElementContext() = default;
    void copyFrom(SelectElementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectExpressionElementContext : public SelectElementContext {
  public:
    SelectExpressionElementContext(SelectElementContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SelectFunctionElementContext : public SelectElementContext {
  public:
    SelectFunctionElementContext(SelectElementContext *ctx);

    FunctionCallContext *functionCall();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SelectStarElementContext : public SelectElementContext {
  public:
    SelectStarElementContext(SelectElementContext *ctx);

    FullIdContext *fullId();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SelectColumnElementContext : public SelectElementContext {
  public:
    SelectColumnElementContext(SelectElementContext *ctx);

    FullColumnNameContext *fullColumnName();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SelectElementContext* selectElement();

  class  SelectIntoExpressionContext : public antlr4::ParserRuleContext {
  public:
    SelectIntoExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectIntoExpressionContext() = default;
    void copyFrom(SelectIntoExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectIntoVariablesContext : public SelectIntoExpressionContext {
  public:
    SelectIntoVariablesContext(SelectIntoExpressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    std::vector<AssignmentFieldContext *> assignmentField();
    AssignmentFieldContext* assignmentField(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SelectIntoTextFileContext : public SelectIntoExpressionContext {
  public:
    SelectIntoTextFileContext(SelectIntoExpressionContext *ctx);

    antlr4::Token *filename = nullptr;
    MySqlParser::CharsetNameContext *charset = nullptr;
    antlr4::Token *fieldsFormat = nullptr;
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *OUTFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LINES();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<SelectFieldsIntoContext *> selectFieldsInto();
    SelectFieldsIntoContext* selectFieldsInto(size_t i);
    std::vector<SelectLinesIntoContext *> selectLinesInto();
    SelectLinesIntoContext* selectLinesInto(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SelectIntoDumpFileContext : public SelectIntoExpressionContext {
  public:
    SelectIntoDumpFileContext(SelectIntoExpressionContext *ctx);

    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SelectIntoExpressionContext* selectIntoExpression();

  class  SelectFieldsIntoContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *terminationField = nullptr;;
    antlr4::Token *enclosion = nullptr;;
    antlr4::Token *escaping = nullptr;;
    SelectFieldsIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERMINATED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ENCLOSED();
    antlr4::tree::TerminalNode *OPTIONALLY();
    antlr4::tree::TerminalNode *ESCAPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectFieldsIntoContext* selectFieldsInto();

  class  SelectLinesIntoContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *starting = nullptr;;
    antlr4::Token *terminationLine = nullptr;;
    SelectLinesIntoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *TERMINATED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectLinesIntoContext* selectLinesInto();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::ExpressionContext *whereExpr = nullptr;;
    MySqlParser::ExpressionContext *havingExpr = nullptr;;
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TableSourcesContext *tableSources();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<GroupByItemContext *> groupByItem();
    GroupByItemContext* groupByItem(size_t i);
    antlr4::tree::TerminalNode *HAVING();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ROLLUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FromClauseContext* fromClause();

  class  GroupByItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *order = nullptr;;
    GroupByItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GroupByItemContext* groupByItem();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::LimitClauseAtomContext *offset = nullptr;;
    MySqlParser::LimitClauseAtomContext *limit = nullptr;;
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *OFFSET();
    std::vector<LimitClauseAtomContext *> limitClauseAtom();
    LimitClauseAtomContext* limitClauseAtom(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LimitClauseContext* limitClause();

  class  LimitClauseAtomContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    MysqlVariableContext *mysqlVariable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LimitClauseAtomContext* limitClauseAtom();

  class  StartTransactionContext : public antlr4::ParserRuleContext {
  public:
    StartTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionModeContext *> transactionMode();
    TransactionModeContext* transactionMode(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartTransactionContext* startTransaction();

  class  BeginWorkContext : public antlr4::ParserRuleContext {
  public:
    BeginWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *WORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BeginWorkContext* beginWork();

  class  CommitWorkContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nochain = nullptr;;
    antlr4::Token *norelease = nullptr;;
    CommitWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommitWorkContext* commitWork();

  class  RollbackWorkContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nochain = nullptr;;
    antlr4::Token *norelease = nullptr;;
    RollbackWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *RELEASE();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RollbackWorkContext* rollbackWork();

  class  SavepointStatementContext : public antlr4::ParserRuleContext {
  public:
    SavepointStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SavepointStatementContext* savepointStatement();

  class  RollbackStatementContext : public antlr4::ParserRuleContext {
  public:
    RollbackStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *TO();
    UidContext *uid();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *SAVEPOINT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RollbackStatementContext* rollbackStatement();

  class  ReleaseStatementContext : public antlr4::ParserRuleContext {
  public:
    ReleaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReleaseStatementContext* releaseStatement();

  class  LockTablesContext : public antlr4::ParserRuleContext {
  public:
    LockTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TABLES();
    std::vector<LockTableElementContext *> lockTableElement();
    LockTableElementContext* lockTableElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LockTablesContext* lockTables();

  class  UnlockTablesContext : public antlr4::ParserRuleContext {
  public:
    UnlockTablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNLOCK();
    antlr4::tree::TerminalNode *TABLES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnlockTablesContext* unlockTables();

  class  SetAutocommitStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *autocommitValue = nullptr;;
    SetAutocommitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetAutocommitStatementContext* setAutocommitStatement();

  class  SetTransactionStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *transactionContext = nullptr;;
    SetTransactionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *TRANSACTION();
    std::vector<TransactionOptionContext *> transactionOption();
    TransactionOptionContext* transactionOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetTransactionStatementContext* setTransactionStatement();

  class  TransactionModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TransactionModeContext* transactionMode();

  class  LockTableElementContext : public antlr4::ParserRuleContext {
  public:
    LockTableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    LockActionContext *lockAction();
    UidContext *uid();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LockTableElementContext* lockTableElement();

  class  LockActionContext : public antlr4::ParserRuleContext {
  public:
    LockActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *LOW_PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LockActionContext* lockAction();

  class  TransactionOptionContext : public antlr4::ParserRuleContext {
  public:
    TransactionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    TransactionLevelContext *transactionLevel();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TransactionOptionContext* transactionOption();

  class  TransactionLevelContext : public antlr4::ParserRuleContext {
  public:
    TransactionLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TransactionLevelContext* transactionLevel();

  class  ChangeMasterContext : public antlr4::ParserRuleContext {
  public:
    ChangeMasterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    std::vector<MasterOptionContext *> masterOption();
    MasterOptionContext* masterOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChangeMasterContext* changeMaster();

  class  ChangeReplicationFilterContext : public antlr4::ParserRuleContext {
  public:
    ChangeReplicationFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *FILTER();
    std::vector<ReplicationFilterContext *> replicationFilter();
    ReplicationFilterContext* replicationFilter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChangeReplicationFilterContext* changeReplicationFilter();

  class  PurgeBinaryLogsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *purgeFormat = nullptr;;
    antlr4::Token *fileName = nullptr;;
    antlr4::Token *timeValue = nullptr;;
    PurgeBinaryLogsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURGE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PurgeBinaryLogsContext* purgeBinaryLogs();

  class  ResetMasterContext : public antlr4::ParserRuleContext {
  public:
    ResetMasterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *MASTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetMasterContext* resetMaster();

  class  ResetSlaveContext : public antlr4::ParserRuleContext {
  public:
    ResetSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *ALL();
    ChannelOptionContext *channelOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetSlaveContext* resetSlave();

  class  StartSlaveContext : public antlr4::ParserRuleContext {
  public:
    StartSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *SLAVE();
    std::vector<ThreadTypeContext *> threadType();
    ThreadTypeContext* threadType(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    UntilOptionContext *untilOption();
    std::vector<ConnectionOptionContext *> connectionOption();
    ConnectionOptionContext* connectionOption(size_t i);
    ChannelOptionContext *channelOption();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartSlaveContext* startSlave();

  class  StopSlaveContext : public antlr4::ParserRuleContext {
  public:
    StopSlaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *SLAVE();
    std::vector<ThreadTypeContext *> threadType();
    ThreadTypeContext* threadType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StopSlaveContext* stopSlave();

  class  StartGroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    StartGroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartGroupReplicationContext* startGroupReplication();

  class  StopGroupReplicationContext : public antlr4::ParserRuleContext {
  public:
    StopGroupReplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StopGroupReplicationContext* stopGroupReplication();

  class  MasterOptionContext : public antlr4::ParserRuleContext {
  public:
    MasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MasterOptionContext() = default;
    void copyFrom(MasterOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MasterStringOptionContext : public MasterOptionContext {
  public:
    MasterStringOptionContext(MasterOptionContext *ctx);

    StringMasterOptionContext *stringMasterOption();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MasterRealOptionContext : public MasterOptionContext {
  public:
    MasterRealOptionContext(MasterOptionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MasterBoolOptionContext : public MasterOptionContext {
  public:
    MasterBoolOptionContext(MasterOptionContext *ctx);

    antlr4::Token *boolVal = nullptr;
    BoolMasterOptionContext *boolMasterOption();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MasterUidListOptionContext : public MasterOptionContext {
  public:
    MasterUidListOptionContext(MasterOptionContext *ctx);

    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MasterDecimalOptionContext : public MasterOptionContext {
  public:
    MasterDecimalOptionContext(MasterOptionContext *ctx);

    DecimalMasterOptionContext *decimalMasterOption();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  MasterOptionContext* masterOption();

  class  StringMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    StringMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_BIND();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringMasterOptionContext* stringMasterOption();

  class  DecimalMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    DecimalMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecimalMasterOptionContext* decimalMasterOption();

  class  BoolMasterOptionContext : public antlr4::ParserRuleContext {
  public:
    BoolMasterOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_VERIFY_SERVER_CERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BoolMasterOptionContext* boolMasterOption();

  class  ChannelOptionContext : public antlr4::ParserRuleContext {
  public:
    ChannelOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChannelOptionContext* channelOption();

  class  ReplicationFilterContext : public antlr4::ParserRuleContext {
  public:
    ReplicationFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ReplicationFilterContext() = default;
    void copyFrom(ReplicationFilterContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WildIgnoreTableReplicationContext : public ReplicationFilterContext {
  public:
    WildIgnoreTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SimpleStringsContext *simpleStrings();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DoTableReplicationContext : public ReplicationFilterContext {
  public:
    DoTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    TablesContext *tables();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IgnoreTableReplicationContext : public ReplicationFilterContext {
  public:
    IgnoreTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    TablesContext *tables();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RewriteDbReplicationContext : public ReplicationFilterContext {
  public:
    RewriteDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<TablePairContext *> tablePair();
    TablePairContext* tablePair(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DoDbReplicationContext : public ReplicationFilterContext {
  public:
    DoDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IgnoreDbReplicationContext : public ReplicationFilterContext {
  public:
    IgnoreDbReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WildDoTableReplicationContext : public ReplicationFilterContext {
  public:
    WildDoTableReplicationContext(ReplicationFilterContext *ctx);

    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SimpleStringsContext *simpleStrings();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ReplicationFilterContext* replicationFilter();

  class  TablePairContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::TableNameContext *firstTable = nullptr;;
    MySqlParser::TableNameContext *secondTable = nullptr;;
    TablePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TablePairContext* tablePair();

  class  ThreadTypeContext : public antlr4::ParserRuleContext {
  public:
    ThreadTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *SQL_THREAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThreadTypeContext* threadType();

  class  UntilOptionContext : public antlr4::ParserRuleContext {
  public:
    UntilOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UntilOptionContext() = default;
    void copyFrom(UntilOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GtidsUntilOptionContext : public UntilOptionContext {
  public:
    GtidsUntilOptionContext(UntilOptionContext *ctx);

    antlr4::Token *gtids = nullptr;
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    GtuidSetContext *gtuidSet();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SqlGapsUntilOptionContext : public UntilOptionContext {
  public:
    SqlGapsUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MasterLogUntilOptionContext : public UntilOptionContext {
  public:
    MasterLogUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RelayLogUntilOptionContext : public UntilOptionContext {
  public:
    RelayLogUntilOptionContext(UntilOptionContext *ctx);

    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  UntilOptionContext* untilOption();

  class  ConnectionOptionContext : public antlr4::ParserRuleContext {
  public:
    ConnectionOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConnectionOptionContext() = default;
    void copyFrom(ConnectionOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PluginDirConnectionOptionContext : public ConnectionOptionContext {
  public:
    PluginDirConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptPluginDir = nullptr;
    antlr4::tree::TerminalNode *PLUGIN_DIR();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UserConnectionOptionContext : public ConnectionOptionContext {
  public:
    UserConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptUser = nullptr;
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefaultAuthConnectionOptionContext : public ConnectionOptionContext {
  public:
    DefaultAuthConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptDefAuth = nullptr;
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PasswordConnectionOptionContext : public ConnectionOptionContext {
  public:
    PasswordConnectionOptionContext(ConnectionOptionContext *ctx);

    antlr4::Token *conOptPassword = nullptr;
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ConnectionOptionContext* connectionOption();

  class  GtuidSetContext : public antlr4::ParserRuleContext {
  public:
    GtuidSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UuidSetContext *> uuidSet();
    UuidSetContext* uuidSet(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GtuidSetContext* gtuidSet();

  class  XaStartTransactionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *xaStart = nullptr;;
    antlr4::Token *xaAction = nullptr;;
    XaStartTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    XidContext *xid();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *RESUME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XaStartTransactionContext* xaStartTransaction();

  class  XaEndTransactionContext : public antlr4::ParserRuleContext {
  public:
    XaEndTransactionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *END();
    XidContext *xid();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *MIGRATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XaEndTransactionContext* xaEndTransaction();

  class  XaPrepareStatementContext : public antlr4::ParserRuleContext {
  public:
    XaPrepareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *PREPARE();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XaPrepareStatementContext* xaPrepareStatement();

  class  XaCommitWorkContext : public antlr4::ParserRuleContext {
  public:
    XaCommitWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *COMMIT();
    XidContext *xid();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *PHASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XaCommitWorkContext* xaCommitWork();

  class  XaRollbackWorkContext : public antlr4::ParserRuleContext {
  public:
    XaRollbackWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *ROLLBACK();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XaRollbackWorkContext* xaRollbackWork();

  class  XaRecoverWorkContext : public antlr4::ParserRuleContext {
  public:
    XaRecoverWorkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *CONVERT();
    XidContext *xid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XaRecoverWorkContext* xaRecoverWork();

  class  PrepareStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *query = nullptr;;
    antlr4::Token *variable = nullptr;;
    PrepareStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LOCAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrepareStatementContext* prepareStatement();

  class  ExecuteStatementContext : public antlr4::ParserRuleContext {
  public:
    ExecuteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    UidContext *uid();
    antlr4::tree::TerminalNode *USING();
    UserVariablesContext *userVariables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExecuteStatementContext* executeStatement();

  class  DeallocatePrepareContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *dropFormat = nullptr;;
    DeallocatePrepareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DROP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeallocatePrepareContext* deallocatePrepare();

  class  RoutineBodyContext : public antlr4::ParserRuleContext {
  public:
    RoutineBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockStatementContext *blockStatement();
    SqlStatementContext *sqlStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RoutineBodyContext* routineBody();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<DeclareVariableContext *> declareVariable();
    DeclareVariableContext* declareVariable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<DeclareConditionContext *> declareCondition();
    DeclareConditionContext* declareCondition(size_t i);
    std::vector<DeclareCursorContext *> declareCursor();
    DeclareCursorContext* declareCursor(size_t i);
    std::vector<DeclareHandlerContext *> declareHandler();
    DeclareHandlerContext* declareHandler(size_t i);
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockStatementContext* blockStatement();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *END();
    UidContext *uid();
    ExpressionContext *expression();
    std::vector<CaseAlternativeContext *> caseAlternative();
    CaseAlternativeContext* caseAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseStatementContext* caseStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::ProcedureSqlStatementContext *procedureSqlStatementContext = nullptr;;
    std::vector<ProcedureSqlStatementContext *> thenStatements;;
    std::vector<ProcedureSqlStatementContext *> elseStatements;;
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *END();
    std::vector<ElifAlternativeContext *> elifAlternative();
    ElifAlternativeContext* elifAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  IterateStatementContext : public antlr4::ParserRuleContext {
  public:
    IterateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IterateStatementContext* iterateStatement();

  class  LeaveStatementContext : public antlr4::ParserRuleContext {
  public:
    LeaveStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LeaveStatementContext* leaveStatement();

  class  LoopStatementContext : public antlr4::ParserRuleContext {
  public:
    LoopStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoopStatementContext* loopStatement();

  class  RepeatStatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT();
    antlr4::tree::TerminalNode* REPEAT(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RepeatStatementContext* repeatStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *COLON_SYMB();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  CursorStatementContext : public antlr4::ParserRuleContext {
  public:
    CursorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CursorStatementContext() = default;
    void copyFrom(CursorStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CloseCursorContext : public CursorStatementContext {
  public:
    CloseCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *CLOSE();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  OpenCursorContext : public CursorStatementContext {
  public:
    OpenCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *OPEN();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FetchCursorContext : public CursorStatementContext {
  public:
    FetchCursorContext(CursorStatementContext *ctx);

    antlr4::tree::TerminalNode *FETCH();
    UidContext *uid();
    antlr4::tree::TerminalNode *INTO();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *NEXT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  CursorStatementContext* cursorStatement();

  class  DeclareVariableContext : public antlr4::ParserRuleContext {
  public:
    DeclareVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidListContext *uidList();
    DataTypeContext *dataType();
    antlr4::tree::TerminalNode *DEFAULT();
    DefaultValueContext *defaultValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareVariableContext* declareVariable();

  class  DeclareConditionContext : public antlr4::ParserRuleContext {
  public:
    DeclareConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *FOR();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareConditionContext* declareCondition();

  class  DeclareCursorContext : public antlr4::ParserRuleContext {
  public:
    DeclareCursorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    UidContext *uid();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    SelectStatementContext *selectStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareCursorContext* declareCursor();

  class  DeclareHandlerContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *handlerAction = nullptr;;
    DeclareHandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *FOR();
    std::vector<HandlerConditionValueContext *> handlerConditionValue();
    HandlerConditionValueContext* handlerConditionValue(size_t i);
    RoutineBodyContext *routineBody();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *UNDO();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareHandlerContext* declareHandler();

  class  HandlerConditionValueContext : public antlr4::ParserRuleContext {
  public:
    HandlerConditionValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    HandlerConditionValueContext() = default;
    void copyFrom(HandlerConditionValueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  HandlerConditionWarningContext : public HandlerConditionValueContext {
  public:
    HandlerConditionWarningContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLWARNING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  HandlerConditionCodeContext : public HandlerConditionValueContext {
  public:
    HandlerConditionCodeContext(HandlerConditionValueContext *ctx);

    DecimalLiteralContext *decimalLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  HandlerConditionNotfoundContext : public HandlerConditionValueContext {
  public:
    HandlerConditionNotfoundContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOUND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  HandlerConditionStateContext : public HandlerConditionValueContext {
  public:
    HandlerConditionStateContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VALUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  HandlerConditionExceptionContext : public HandlerConditionValueContext {
  public:
    HandlerConditionExceptionContext(HandlerConditionValueContext *ctx);

    antlr4::tree::TerminalNode *SQLEXCEPTION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  HandlerConditionNameContext : public HandlerConditionValueContext {
  public:
    HandlerConditionNameContext(HandlerConditionValueContext *ctx);

    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  HandlerConditionValueContext* handlerConditionValue();

  class  ProcedureSqlStatementContext : public antlr4::ParserRuleContext {
  public:
    ProcedureSqlStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    CompoundStatementContext *compoundStatement();
    SqlStatementContext *sqlStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProcedureSqlStatementContext* procedureSqlStatement();

  class  CaseAlternativeContext : public antlr4::ParserRuleContext {
  public:
    CaseAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    ConstantContext *constant();
    ExpressionContext *expression();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseAlternativeContext* caseAlternative();

  class  ElifAlternativeContext : public antlr4::ParserRuleContext {
  public:
    ElifAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSEIF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ProcedureSqlStatementContext *> procedureSqlStatement();
    ProcedureSqlStatementContext* procedureSqlStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElifAlternativeContext* elifAlternative();

  class  AlterUserContext : public antlr4::ParserRuleContext {
  public:
    AlterUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterUserContext() = default;
    void copyFrom(AlterUserContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterUserMysqlV56Context : public AlterUserContext {
  public:
    AlterUserMysqlV56Context(AlterUserContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserSpecificationContext *> userSpecification();
    UserSpecificationContext* userSpecification(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AlterUserMysqlV57Context : public AlterUserContext {
  public:
    AlterUserMysqlV57Context(AlterUserContext *ctx);

    antlr4::Token *tlsNone = nullptr;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    IfExistsContext *ifExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<UserPasswordOptionContext *> userPasswordOption();
    UserPasswordOptionContext* userPasswordOption(size_t i);
    std::vector<UserLockOptionContext *> userLockOption();
    UserLockOptionContext* userLockOption(size_t i);
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  AlterUserContext* alterUser();

  class  CreateUserContext : public antlr4::ParserRuleContext {
  public:
    CreateUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateUserContext() = default;
    void copyFrom(CreateUserContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateUserMysqlV57Context : public CreateUserContext {
  public:
    CreateUserMysqlV57Context(CreateUserContext *ctx);

    antlr4::Token *tlsNone = nullptr;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    IfNotExistsContext *ifNotExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<UserPasswordOptionContext *> userPasswordOption();
    UserPasswordOptionContext* userPasswordOption(size_t i);
    std::vector<UserLockOptionContext *> userLockOption();
    UserLockOptionContext* userLockOption(size_t i);
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CreateUserMysqlV56Context : public CreateUserContext {
  public:
    CreateUserMysqlV56Context(CreateUserContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  CreateUserContext* createUser();

  class  DropUserContext : public antlr4::ParserRuleContext {
  public:
    DropUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USER();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    IfExistsContext *ifExists();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DropUserContext* dropUser();

  class  GrantStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *privilegeObject = nullptr;;
    antlr4::Token *tlsNone = nullptr;;
    GrantStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    std::vector<PrivelegeClauseContext *> privelegeClause();
    PrivelegeClauseContext* privelegeClause(size_t i);
    antlr4::tree::TerminalNode *ON();
    PrivilegeLevelContext *privilegeLevel();
    antlr4::tree::TerminalNode *TO();
    std::vector<UserAuthOptionContext *> userAuthOption();
    UserAuthOptionContext* userAuthOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    std::vector<TlsOptionContext *> tlsOption();
    TlsOptionContext* tlsOption(size_t i);
    antlr4::tree::TerminalNode *NONE();
    std::vector<antlr4::tree::TerminalNode *> OPTION();
    antlr4::tree::TerminalNode* OPTION(size_t i);
    std::vector<UserResourceOptionContext *> userResourceOption();
    UserResourceOptionContext* userResourceOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GrantStatementContext* grantStatement();

  class  GrantProxyContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UserNameContext *fromFirst = nullptr;;
    MySqlParser::UserNameContext *toFirst = nullptr;;
    MySqlParser::UserNameContext *userNameContext = nullptr;;
    std::vector<UserNameContext *> toOther;;
    GrantProxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GrantProxyContext* grantProxy();

  class  RenameUserContext : public antlr4::ParserRuleContext {
  public:
    RenameUserContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *USER();
    std::vector<RenameUserClauseContext *> renameUserClause();
    RenameUserClauseContext* renameUserClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RenameUserContext* renameUser();

  class  RevokeStatementContext : public antlr4::ParserRuleContext {
  public:
    RevokeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RevokeStatementContext() = default;
    void copyFrom(RevokeStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DetailRevokeContext : public RevokeStatementContext {
  public:
    DetailRevokeContext(RevokeStatementContext *ctx);

    antlr4::Token *privilegeObject = nullptr;
    antlr4::tree::TerminalNode *REVOKE();
    std::vector<PrivelegeClauseContext *> privelegeClause();
    PrivelegeClauseContext* privelegeClause(size_t i);
    antlr4::tree::TerminalNode *ON();
    PrivilegeLevelContext *privilegeLevel();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShortRevokeContext : public RevokeStatementContext {
  public:
    ShortRevokeContext(RevokeStatementContext *ctx);

    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    antlr4::tree::TerminalNode *PRIVILEGES();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  RevokeStatementContext* revokeStatement();

  class  RevokeProxyContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UserNameContext *onUser = nullptr;;
    MySqlParser::UserNameContext *fromFirst = nullptr;;
    MySqlParser::UserNameContext *userNameContext = nullptr;;
    std::vector<UserNameContext *> fromOther;;
    RevokeProxyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RevokeProxyContext* revokeProxy();

  class  SetPasswordStatementContext : public antlr4::ParserRuleContext {
  public:
    SetPasswordStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    PasswordFunctionClauseContext *passwordFunctionClause();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FOR();
    UserNameContext *userName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetPasswordStatementContext* setPasswordStatement();

  class  UserSpecificationContext : public antlr4::ParserRuleContext {
  public:
    UserSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserNameContext *userName();
    UserPasswordOptionContext *userPasswordOption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserSpecificationContext* userSpecification();

  class  UserAuthOptionContext : public antlr4::ParserRuleContext {
  public:
    UserAuthOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UserAuthOptionContext() = default;
    void copyFrom(UserAuthOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleAuthOptionContext : public UserAuthOptionContext {
  public:
    SimpleAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PasswordAuthOptionContext : public UserAuthOptionContext {
  public:
    PasswordAuthOptionContext(UserAuthOptionContext *ctx);

    antlr4::Token *hashed = nullptr;
    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  StringAuthOptionContext : public UserAuthOptionContext {
  public:
    StringAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WITH();
    AuthPluginContext *authPlugin();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  HashAuthOptionContext : public UserAuthOptionContext {
  public:
    HashAuthOptionContext(UserAuthOptionContext *ctx);

    UserNameContext *userName();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *WITH();
    AuthPluginContext *authPlugin();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  UserAuthOptionContext* userAuthOption();

  class  TlsOptionContext : public antlr4::ParserRuleContext {
  public:
    TlsOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SSL();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *SUBJECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TlsOptionContext* tlsOption();

  class  UserResourceOptionContext : public antlr4::ParserRuleContext {
  public:
    UserResourceOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserResourceOptionContext* userResourceOption();

  class  UserPasswordOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *expireType = nullptr;;
    UserPasswordOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EXPIRE();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *INTERVAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserPasswordOptionContext* userPasswordOption();

  class  UserLockOptionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *lockType = nullptr;;
    UserLockOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *UNLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserLockOptionContext* userLockOption();

  class  PrivelegeClauseContext : public antlr4::ParserRuleContext {
  public:
    PrivelegeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivilegeContext *privilege();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivelegeClauseContext* privelegeClause();

  class  PrivilegeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *SESSION_VARIABLES_ADMIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivilegeContext* privilege();

  class  PrivilegeLevelContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrivilegeLevelContext() = default;
    void copyFrom(PrivilegeLevelContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefiniteSchemaPrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteSchemaPrivLevelContext(PrivilegeLevelContext *ctx);

    UidContext *uid();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefiniteFullTablePrivLevel2Context : public PrivilegeLevelContext {
  public:
    DefiniteFullTablePrivLevel2Context(PrivilegeLevelContext *ctx);

    UidContext *uid();
    DottedIdContext *dottedId();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefiniteFullTablePrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteFullTablePrivLevelContext(PrivilegeLevelContext *ctx);

    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *DOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GlobalPrivLevelContext : public PrivilegeLevelContext {
  public:
    GlobalPrivLevelContext(PrivilegeLevelContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    antlr4::tree::TerminalNode *DOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DefiniteTablePrivLevelContext : public PrivilegeLevelContext {
  public:
    DefiniteTablePrivLevelContext(PrivilegeLevelContext *ctx);

    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CurrentSchemaPriviLevelContext : public PrivilegeLevelContext {
  public:
    CurrentSchemaPriviLevelContext(PrivilegeLevelContext *ctx);

    antlr4::tree::TerminalNode *STAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PrivilegeLevelContext* privilegeLevel();

  class  RenameUserClauseContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UserNameContext *fromFirst = nullptr;;
    MySqlParser::UserNameContext *toFirst = nullptr;;
    RenameUserClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    std::vector<UserNameContext *> userName();
    UserNameContext* userName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RenameUserClauseContext* renameUserClause();

  class  AnalyzeTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    AnalyzeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AnalyzeTableContext* analyzeTable();

  class  CheckTableContext : public antlr4::ParserRuleContext {
  public:
    CheckTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    std::vector<CheckTableOptionContext *> checkTableOption();
    CheckTableOptionContext* checkTableOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CheckTableContext* checkTable();

  class  ChecksumTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    ChecksumTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChecksumTableContext* checksumTable();

  class  OptimizeTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    OptimizeTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptimizeTableContext* optimizeTable();

  class  RepairTableContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *actionOption = nullptr;;
    RepairTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *TABLE();
    TablesContext *tables();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RepairTableContext* repairTable();

  class  CheckTableOptionContext : public antlr4::ParserRuleContext {
  public:
    CheckTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *CHANGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CheckTableOptionContext* checkTableOption();

  class  CreateUdfunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *returnType = nullptr;;
    CreateUdfunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    UidContext *uid();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *AGGREGATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CreateUdfunctionContext* createUdfunction();

  class  InstallPluginContext : public antlr4::ParserRuleContext {
  public:
    InstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    UidContext *uid();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InstallPluginContext* installPlugin();

  class  UninstallPluginContext : public antlr4::ParserRuleContext {
  public:
    UninstallPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *PLUGIN();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UninstallPluginContext* uninstallPlugin();

  class  SetStatementContext : public antlr4::ParserRuleContext {
  public:
    SetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SetStatementContext() = default;
    void copyFrom(SetStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SetTransactionContext : public SetStatementContext {
  public:
    SetTransactionContext(SetStatementContext *ctx);

    SetTransactionStatementContext *setTransactionStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SetCharsetContext : public SetStatementContext {
  public:
    SetCharsetContext(SetStatementContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SetNamesContext : public SetStatementContext {
  public:
    SetNamesContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NAMES();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SetPasswordContext : public SetStatementContext {
  public:
    SetPasswordContext(SetStatementContext *ctx);

    SetPasswordStatementContext *setPasswordStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SetAutocommitContext : public SetStatementContext {
  public:
    SetAutocommitContext(SetStatementContext *ctx);

    SetAutocommitStatementContext *setAutocommitStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SetNewValueInsideTriggerContext : public SetStatementContext {
  public:
    SetNewValueInsideTriggerContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    FullIdContext *fullId();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SetVariableContext : public SetStatementContext {
  public:
    SetVariableContext(SetStatementContext *ctx);

    antlr4::tree::TerminalNode *SET();
    std::vector<VariableClauseContext *> variableClause();
    VariableClauseContext* variableClause(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUAL_SYMBOL();
    antlr4::tree::TerminalNode* EQUAL_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR_ASSIGN();
    antlr4::tree::TerminalNode* VAR_ASSIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SetStatementContext* setStatement();

  class  ShowStatementContext : public antlr4::ParserRuleContext {
  public:
    ShowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ShowStatementContext() = default;
    void copyFrom(ShowStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ShowOpenTablesContext : public ShowStatementContext {
  public:
    ShowOpenTablesContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *TABLES();
    UidContext *uid();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowGlobalInfoContext : public ShowStatementContext {
  public:
    ShowGlobalInfoContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    ShowGlobalInfoClauseContext *showGlobalInfoClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowCreateFullIdObjectContext : public ShowStatementContext {
  public:
    ShowCreateFullIdObjectContext(ShowStatementContext *ctx);

    antlr4::Token *namedEntity = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *VIEW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowCreateUserContext : public ShowStatementContext {
  public:
    ShowCreateUserContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USER();
    UserNameContext *userName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowErrorsContext : public ShowStatementContext {
  public:
    ShowErrorsContext(ShowStatementContext *ctx);

    antlr4::Token *errorFormat = nullptr;
    MySqlParser::DecimalLiteralContext *offset = nullptr;
    MySqlParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowCountErrorsContext : public ShowStatementContext {
  public:
    ShowCountErrorsContext(ShowStatementContext *ctx);

    antlr4::Token *errorFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *WARNINGS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowObjectFilterContext : public ShowStatementContext {
  public:
    ShowObjectFilterContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    ShowCommonEntityContext *showCommonEntity();
    ShowFilterContext *showFilter();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowCreateDbContext : public ShowStatementContext {
  public:
    ShowCreateDbContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    UidContext *uid();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SCHEMA();
    IfNotExistsContext *ifNotExists();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowEngineContext : public ShowStatementContext {
  public:
    ShowEngineContext(ShowStatementContext *ctx);

    antlr4::Token *engineOption = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *ENGINE();
    EngineNameContext *engineName();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *MUTEX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowSchemaFilterContext : public ShowStatementContext {
  public:
    ShowSchemaFilterContext(ShowStatementContext *ctx);

    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    ShowSchemaEntityContext *showSchemaEntity();
    UidContext *uid();
    ShowFilterContext *showFilter();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowIndexesContext : public ShowStatementContext {
  public:
    ShowIndexesContext(ShowStatementContext *ctx);

    antlr4::Token *indexFormat = nullptr;
    antlr4::Token *tableFormat = nullptr;
    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *KEYS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    UidContext *uid();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowLogEventsContext : public ShowStatementContext {
  public:
    ShowLogEventsContext(ShowStatementContext *ctx);

    antlr4::Token *logFormat = nullptr;
    antlr4::Token *filename = nullptr;
    MySqlParser::DecimalLiteralContext *fromPosition = nullptr;
    MySqlParser::DecimalLiteralContext *offset = nullptr;
    MySqlParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowMasterLogsContext : public ShowStatementContext {
  public:
    ShowMasterLogsContext(ShowStatementContext *ctx);

    antlr4::Token *logFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *MASTER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowGrantsContext : public ShowStatementContext {
  public:
    ShowGrantsContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *FOR();
    UserNameContext *userName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowSlaveStatusContext : public ShowStatementContext {
  public:
    ShowSlaveStatusContext(ShowStatementContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowRoutineContext : public ShowStatementContext {
  public:
    ShowRoutineContext(ShowStatementContext *ctx);

    antlr4::Token *routine = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CODE();
    FullIdContext *fullId();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *PROCEDURE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowProfileContext : public ShowStatementContext {
  public:
    ShowProfileContext(ShowStatementContext *ctx);

    MySqlParser::DecimalLiteralContext *queryCount = nullptr;
    MySqlParser::DecimalLiteralContext *offset = nullptr;
    MySqlParser::DecimalLiteralContext *rowCount = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *PROFILE();
    std::vector<ShowProfileTypeContext *> showProfileType();
    ShowProfileTypeContext* showProfileType(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *QUERY();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ShowColumnsContext : public ShowStatementContext {
  public:
    ShowColumnsContext(ShowStatementContext *ctx);

    antlr4::Token *columnsFormat = nullptr;
    antlr4::Token *tableFormat = nullptr;
    antlr4::Token *schemaFormat = nullptr;
    antlr4::tree::TerminalNode *SHOW();
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *FIELDS();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    antlr4::tree::TerminalNode *FULL();
    UidContext *uid();
    ShowFilterContext *showFilter();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ShowStatementContext* showStatement();

  class  VariableClauseContext : public antlr4::ParserRuleContext {
  public:
    VariableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();
    UidContext *uid();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *LOCAL();
    std::vector<antlr4::tree::TerminalNode *> AT_SIGN();
    antlr4::tree::TerminalNode* AT_SIGN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableClauseContext* variableClause();

  class  ShowCommonEntityContext : public antlr4::ParserRuleContext {
  public:
    ShowCommonEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *DATABASES();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SESSION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowCommonEntityContext* showCommonEntity();

  class  ShowFilterContext : public antlr4::ParserRuleContext {
  public:
    ShowFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowFilterContext* showFilter();

  class  ShowGlobalInfoClauseContext : public antlr4::ParserRuleContext {
  public:
    ShowGlobalInfoClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *CONTRIBUTORS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowGlobalInfoClauseContext* showGlobalInfoClause();

  class  ShowSchemaEntityContext : public antlr4::ParserRuleContext {
  public:
    ShowSchemaEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *TRIGGERS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowSchemaEntityContext* showSchemaEntity();

  class  ShowProfileTypeContext : public antlr4::ParserRuleContext {
  public:
    ShowProfileTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SWAPS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShowProfileTypeContext* showProfileType();

  class  BinlogStatementContext : public antlr4::ParserRuleContext {
  public:
    BinlogStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinlogStatementContext* binlogStatement();

  class  CacheIndexStatementContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UidContext *schema = nullptr;;
    CacheIndexStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *INDEX();
    std::vector<TableIndexesContext *> tableIndexes();
    TableIndexesContext* tableIndexes(size_t i);
    antlr4::tree::TerminalNode *IN();
    UidContext *uid();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CacheIndexStatementContext* cacheIndexStatement();

  class  FlushStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *flushFormat = nullptr;;
    FlushStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    std::vector<FlushOptionContext *> flushOption();
    FlushOptionContext* flushOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO_WRITE_TO_BINLOG();
    antlr4::tree::TerminalNode *LOCAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FlushStatementContext* flushStatement();

  class  KillStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *connectionFormat = nullptr;;
    KillStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KILL();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *QUERY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KillStatementContext* killStatement();

  class  LoadIndexIntoCacheContext : public antlr4::ParserRuleContext {
  public:
    LoadIndexIntoCacheContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *CACHE();
    std::vector<LoadedTableIndexesContext *> loadedTableIndexes();
    LoadedTableIndexesContext* loadedTableIndexes(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadIndexIntoCacheContext* loadIndexIntoCache();

  class  ResetStatementContext : public antlr4::ParserRuleContext {
  public:
    ResetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ResetStatementContext* resetStatement();

  class  ShutdownStatementContext : public antlr4::ParserRuleContext {
  public:
    ShutdownStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHUTDOWN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShutdownStatementContext* shutdownStatement();

  class  TableIndexesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *indexFormat = nullptr;;
    TableIndexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *LR_BRACKET();
    UidListContext *uidList();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableIndexesContext* tableIndexes();

  class  FlushOptionContext : public antlr4::ParserRuleContext {
  public:
    FlushOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FlushOptionContext() = default;
    void copyFrom(FlushOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableFlushOptionContext : public FlushOptionContext {
  public:
    TableFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *TABLES();
    TablesContext *tables();
    FlushTableOptionContext *flushTableOption();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ChannelFlushOptionContext : public FlushOptionContext {
  public:
    ChannelFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *LOGS();
    ChannelOptionContext *channelOption();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SimpleFlushOptionContext : public FlushOptionContext {
  public:
    SimpleFlushOptionContext(FlushOptionContext *ctx);

    antlr4::tree::TerminalNode *DES_KEY_FILE();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *SLOW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  FlushOptionContext* flushOption();

  class  FlushTableOptionContext : public antlr4::ParserRuleContext {
  public:
    FlushTableOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EXPORT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FlushTableOptionContext* flushTableOption();

  class  LoadedTableIndexesContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::UidListContext *partitionList = nullptr;;
    antlr4::Token *indexFormat = nullptr;;
    MySqlParser::UidListContext *indexList = nullptr;;
    LoadedTableIndexesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *LEAVES();
    std::vector<UidListContext *> uidList();
    UidListContext* uidList(size_t i);
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoadedTableIndexesContext* loadedTableIndexes();

  class  SimpleDescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *command = nullptr;;
    MySqlParser::UidContext *column = nullptr;;
    antlr4::Token *pattern = nullptr;;
    SimpleDescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TableNameContext *tableName();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleDescribeStatementContext* simpleDescribeStatement();

  class  FullDescribeStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *command = nullptr;;
    antlr4::Token *formatType = nullptr;;
    antlr4::Token *formatValue = nullptr;;
    FullDescribeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescribeObjectClauseContext *describeObjectClause();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *JSON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FullDescribeStatementContext* fullDescribeStatement();

  class  HelpStatementContext : public antlr4::ParserRuleContext {
  public:
    HelpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HelpStatementContext* helpStatement();

  class  UseStatementContext : public antlr4::ParserRuleContext {
  public:
    UseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UseStatementContext* useStatement();

  class  SignalStatementContext : public antlr4::ParserRuleContext {
  public:
    SignalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();
    antlr4::tree::TerminalNode *SET();
    std::vector<SignalConditionInformationContext *> signalConditionInformation();
    SignalConditionInformationContext* signalConditionInformation(size_t i);
    antlr4::tree::TerminalNode *SQLSTATE();
    StringLiteralContext *stringLiteral();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SignalStatementContext* signalStatement();

  class  SignalConditionInformationContext : public antlr4::ParserRuleContext {
  public:
    SignalConditionInformationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *CLASS_ORIGIN();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *MYSQL_ERRNO();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME();
    antlr4::tree::TerminalNode *CATALOG_NAME();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *TABLE_NAME();
    antlr4::tree::TerminalNode *COLUMN_NAME();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SignalConditionInformationContext* signalConditionInformation();

  class  DescribeObjectClauseContext : public antlr4::ParserRuleContext {
  public:
    DescribeObjectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DescribeObjectClauseContext() = default;
    void copyFrom(DescribeObjectClauseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DescribeStatementsContext : public DescribeObjectClauseContext {
  public:
    DescribeStatementsContext(DescribeObjectClauseContext *ctx);

    SelectStatementContext *selectStatement();
    DeleteStatementContext *deleteStatement();
    InsertStatementContext *insertStatement();
    ReplaceStatementContext *replaceStatement();
    UpdateStatementContext *updateStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DescribeConnectionContext : public DescribeObjectClauseContext {
  public:
    DescribeConnectionContext(DescribeObjectClauseContext *ctx);

    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CONNECTION();
    UidContext *uid();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  DescribeObjectClauseContext* describeObjectClause();

  class  FullIdContext : public antlr4::ParserRuleContext {
  public:
    FullIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    antlr4::tree::TerminalNode *DOT_ID();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FullIdContext* fullId();

  class  TableNameContext : public antlr4::ParserRuleContext {
  public:
    TableNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdContext *fullId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableNameContext* tableName();

  class  FullColumnNameContext : public antlr4::ParserRuleContext {
  public:
    FullColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    std::vector<DottedIdContext *> dottedId();
    DottedIdContext* dottedId(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FullColumnNameContext* fullColumnName();

  class  IndexColumnNameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *sortType = nullptr;;
    IndexColumnNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexColumnNameContext* indexColumnName();

  class  UserNameContext : public antlr4::ParserRuleContext {
  public:
    UserNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_USER_NAME();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserNameContext* userName();

  class  MysqlVariableContext : public antlr4::ParserRuleContext {
  public:
    MysqlVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *GLOBAL_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MysqlVariableContext* mysqlVariable();

  class  CharsetNameContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameBaseContext *charsetNameBase();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharsetNameContext* charsetName();

  class  CollationNameContext : public antlr4::ParserRuleContext {
  public:
    CollationNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CollationNameContext* collationName();

  class  EngineNameContext : public antlr4::ParserRuleContext {
  public:
    EngineNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARCHIVE();
    antlr4::tree::TerminalNode *BLACKHOLE();
    antlr4::tree::TerminalNode *CSV();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *INNODB();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MRG_MYISAM();
    antlr4::tree::TerminalNode *MYISAM();
    antlr4::tree::TerminalNode *NDB();
    antlr4::tree::TerminalNode *NDBCLUSTER();
    antlr4::tree::TerminalNode *PERFORMANCE_SCHEMA();
    antlr4::tree::TerminalNode *TOKUDB();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EngineNameContext* engineName();

  class  UuidSetContext : public antlr4::ParserRuleContext {
  public:
    UuidSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON_SYMB();
    antlr4::tree::TerminalNode* COLON_SYMB(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UuidSetContext* uuidSet();

  class  XidContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::XuidStringIdContext *globalTableUid = nullptr;;
    MySqlParser::XuidStringIdContext *qualifier = nullptr;;
    MySqlParser::DecimalLiteralContext *idFormat = nullptr;;
    XidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<XuidStringIdContext *> xuidStringId();
    XuidStringIdContext* xuidStringId(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XidContext* xid();

  class  XuidStringIdContext : public antlr4::ParserRuleContext {
  public:
    XuidStringIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    std::vector<antlr4::tree::TerminalNode *> HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode* HEXADECIMAL_LITERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XuidStringIdContext* xuidStringId();

  class  AuthPluginContext : public antlr4::ParserRuleContext {
  public:
    AuthPluginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UidContext *uid();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AuthPluginContext* authPlugin();

  class  UidContext : public antlr4::ParserRuleContext {
  public:
    UidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleIdContext *simpleId();
    antlr4::tree::TerminalNode *REVERSE_QUOTE_ID();
    antlr4::tree::TerminalNode *CHARSET_REVERSE_QOUTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UidContext* uid();

  class  SimpleIdContext : public antlr4::ParserRuleContext {
  public:
    SimpleIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    CharsetNameBaseContext *charsetNameBase();
    TransactionLevelBaseContext *transactionLevelBase();
    EngineNameContext *engineName();
    PrivilegesBaseContext *privilegesBase();
    IntervalTypeBaseContext *intervalTypeBase();
    DataTypeBaseContext *dataTypeBase();
    KeywordsCanBeIdContext *keywordsCanBeId();
    FunctionNameBaseContext *functionNameBase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleIdContext* simpleId();

  class  DottedIdContext : public antlr4::ParserRuleContext {
  public:
    DottedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT_ID();
    antlr4::tree::TerminalNode *DOT();
    UidContext *uid();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DottedIdContext* dottedId();

  class  DecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    DecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *ZERO_DECIMAL();
    antlr4::tree::TerminalNode *ONE_DECIMAL();
    antlr4::tree::TerminalNode *TWO_DECIMAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecimalLiteralContext* decimalLiteral();

  class  FileSizeLiteralContext : public antlr4::ParserRuleContext {
  public:
    FileSizeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILESIZE_LITERAL();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileSizeLiteralContext* fileSizeLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *START_NATIONAL_STRING_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  HexadecimalLiteralContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode *STRING_CHARSET_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HexadecimalLiteralContext* hexadecimalLiteral();

  class  NullNotnullContext : public antlr4::ParserRuleContext {
  public:
    NullNotnullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullNotnullContext* nullNotnull();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nullLiteral = nullptr;;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *MINUS();
    HexadecimalLiteralContext *hexadecimalLiteral();
    BooleanLiteralContext *booleanLiteral();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *BIT_STRING();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NULL_SPEC_LITERAL();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DataTypeContext() = default;
    void copyFrom(DataTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpatialDataTypeContext : public DataTypeContext {
  public:
    SpatialDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GEOMCOLLECTION();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *GEOMETRY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CollectionDataTypeContext : public DataTypeContext {
  public:
    CollectionDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    CollectionOptionsContext *collectionOptions();
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARSET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NationalVaryingStringDataTypeContext : public DataTypeContext {
  public:
    NationalVaryingStringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DimensionDataTypeContext : public DataTypeContext {
  public:
    DimensionDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *MEDIUMINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BIGINT();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *ZEROFILL();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *REAL();
    LengthTwoDimensionContext *lengthTwoDimension();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *FLOAT();
    LengthTwoOptionalDimensionContext *lengthTwoOptionalDimension();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *YEAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  StringDataTypeContext : public DataTypeContext {
  public:
    StringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *TINYTEXT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *MEDIUMTEXT();
    antlr4::tree::TerminalNode *LONGTEXT();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NVARCHAR();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NationalStringDataTypeContext : public DataTypeContext {
  public:
    NationalStringDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NCHAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SimpleDataTypeContext : public DataTypeContext {
  public:
    SimpleDataTypeContext(DataTypeContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TINYBLOB();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *MEDIUMBLOB();
    antlr4::tree::TerminalNode *LONGBLOB();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *SERIAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  DataTypeContext* dataType();

  class  CollectionOptionsContext : public antlr4::ParserRuleContext {
  public:
    CollectionOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CollectionOptionsContext* collectionOptions();

  class  ConvertedDataTypeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *typeName = nullptr;;
    ConvertedDataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *NCHAR();
    LengthOneDimensionContext *lengthOneDimension();
    antlr4::tree::TerminalNode *CHAR();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *DECIMAL();
    LengthTwoDimensionContext *lengthTwoDimension();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConvertedDataTypeContext* convertedDataType();

  class  LengthOneDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthOneDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LengthOneDimensionContext* lengthOneDimension();

  class  LengthTwoDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthTwoDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LengthTwoDimensionContext* lengthTwoDimension();

  class  LengthTwoOptionalDimensionContext : public antlr4::ParserRuleContext {
  public:
    LengthTwoOptionalDimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LengthTwoOptionalDimensionContext* lengthTwoOptionalDimension();

  class  UidListContext : public antlr4::ParserRuleContext {
  public:
    UidListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UidContext *> uid();
    UidContext* uid(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UidListContext* uidList();

  class  TablesContext : public antlr4::ParserRuleContext {
  public:
    TablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableNameContext *> tableName();
    TableNameContext* tableName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TablesContext* tables();

  class  IndexColumnNamesContext : public antlr4::ParserRuleContext {
  public:
    IndexColumnNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<IndexColumnNameContext *> indexColumnName();
    IndexColumnNameContext* indexColumnName(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexColumnNamesContext* indexColumnNames();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionsContext* expressions();

  class  ExpressionsWithDefaultsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsWithDefaultsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionOrDefaultContext *> expressionOrDefault();
    ExpressionOrDefaultContext* expressionOrDefault(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionsWithDefaultsContext* expressionsWithDefaults();

  class  ConstantsContext : public antlr4::ParserRuleContext {
  public:
    ConstantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantsContext* constants();

  class  SimpleStringsContext : public antlr4::ParserRuleContext {
  public:
    SimpleStringsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_LITERAL();
    antlr4::tree::TerminalNode* STRING_LITERAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleStringsContext* simpleStrings();

  class  UserVariablesContext : public antlr4::ParserRuleContext {
  public:
    UserVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOCAL_ID();
    antlr4::tree::TerminalNode* LOCAL_ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UserVariablesContext* userVariables();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_LITERAL();
    ConstantContext *constant();
    UnaryOperatorContext *unaryOperator();
    std::vector<CurrentTimestampContext *> currentTimestamp();
    CurrentTimestampContext* currentTimestamp(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultValueContext* defaultValue();

  class  CurrentTimestampContext : public antlr4::ParserRuleContext {
  public:
    CurrentTimestampContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    DecimalLiteralContext *decimalLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CurrentTimestampContext* currentTimestamp();

  class  ExpressionOrDefaultContext : public antlr4::ParserRuleContext {
  public:
    ExpressionOrDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionOrDefaultContext* expressionOrDefault();

  class  IfExistsContext : public antlr4::ParserRuleContext {
  public:
    IfExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfExistsContext* ifExists();

  class  IfNotExistsContext : public antlr4::ParserRuleContext {
  public:
    IfNotExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfNotExistsContext* ifNotExists();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionCallContext() = default;
    void copyFrom(FunctionCallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SpecificFunctionCallContext : public FunctionCallContext {
  public:
    SpecificFunctionCallContext(FunctionCallContext *ctx);

    SpecificFunctionContext *specificFunction();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PasswordFunctionCallContext : public FunctionCallContext {
  public:
    PasswordFunctionCallContext(FunctionCallContext *ctx);

    PasswordFunctionClauseContext *passwordFunctionClause();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UdfFunctionCallContext : public FunctionCallContext {
  public:
    UdfFunctionCallContext(FunctionCallContext *ctx);

    FullIdContext *fullId();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    FunctionArgsContext *functionArgs();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AggregateFunctionCallContext : public FunctionCallContext {
  public:
    AggregateFunctionCallContext(FunctionCallContext *ctx);

    AggregateWindowedFunctionContext *aggregateWindowedFunction();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ScalarFunctionCallContext : public FunctionCallContext {
  public:
    ScalarFunctionCallContext(FunctionCallContext *ctx);

    ScalarFunctionNameContext *scalarFunctionName();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    FunctionArgsContext *functionArgs();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  FunctionCallContext* functionCall();

  class  SpecificFunctionContext : public antlr4::ParserRuleContext {
  public:
    SpecificFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SpecificFunctionContext() = default;
    void copyFrom(SpecificFunctionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PositionFunctionCallContext : public SpecificFunctionContext {
  public:
    PositionFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::StringLiteralContext *positionString = nullptr;
    MySqlParser::ExpressionContext *positionExpression = nullptr;
    MySqlParser::StringLiteralContext *inString = nullptr;
    MySqlParser::ExpressionContext *inExpression = nullptr;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<StringLiteralContext *> stringLiteral();
    StringLiteralContext* stringLiteral(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TrimFunctionCallContext : public SpecificFunctionContext {
  public:
    TrimFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *positioinForm = nullptr;
    MySqlParser::StringLiteralContext *sourceString = nullptr;
    MySqlParser::ExpressionContext *sourceExpression = nullptr;
    MySqlParser::StringLiteralContext *fromString = nullptr;
    MySqlParser::ExpressionContext *fromExpression = nullptr;
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *TRAILING();
    std::vector<StringLiteralContext *> stringLiteral();
    StringLiteralContext* stringLiteral(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SimpleFunctionCallContext : public SpecificFunctionContext {
  public:
    SimpleFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *LOCALTIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CharFunctionCallContext : public SpecificFunctionContext {
  public:
    CharFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *LR_BRACKET();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WeightFunctionCallContext : public SpecificFunctionContext {
  public:
    WeightFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *stringFormat = nullptr;
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    StringLiteralContext *stringLiteral();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    DecimalLiteralContext *decimalLiteral();
    LevelsInWeightStringContext *levelsInWeightString();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BINARY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GetFormatFunctionCallContext : public SpecificFunctionContext {
  public:
    GetFormatFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *datetimeFormat = nullptr;
    antlr4::tree::TerminalNode *GET_FORMAT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *DATETIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CaseFunctionCallContext : public SpecificFunctionContext {
  public:
    CaseFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::FunctionArgContext *elseArg = nullptr;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *END();
    std::vector<CaseFuncAlternativeContext *> caseFuncAlternative();
    CaseFuncAlternativeContext* caseFuncAlternative(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    FunctionArgContext *functionArg();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExtractFunctionCallContext : public SpecificFunctionContext {
  public:
    ExtractFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::StringLiteralContext *sourceString = nullptr;
    MySqlParser::ExpressionContext *sourceExpression = nullptr;
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    IntervalTypeContext *intervalType();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *RR_BRACKET();
    StringLiteralContext *stringLiteral();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DataTypeFunctionCallContext : public SpecificFunctionContext {
  public:
    DataTypeFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::Token *separator = nullptr;
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    ConvertedDataTypeContext *convertedDataType();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *USING();
    CharsetNameContext *charsetName();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ValuesFunctionCallContext : public SpecificFunctionContext {
  public:
    ValuesFunctionCallContext(SpecificFunctionContext *ctx);

    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    FullColumnNameContext *fullColumnName();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubstrFunctionCallContext : public SpecificFunctionContext {
  public:
    SubstrFunctionCallContext(SpecificFunctionContext *ctx);

    MySqlParser::StringLiteralContext *sourceString = nullptr;
    MySqlParser::ExpressionContext *sourceExpression = nullptr;
    MySqlParser::DecimalLiteralContext *fromDecimal = nullptr;
    MySqlParser::ExpressionContext *fromExpression = nullptr;
    MySqlParser::DecimalLiteralContext *forDecimal = nullptr;
    MySqlParser::ExpressionContext *forExpression = nullptr;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    StringLiteralContext *stringLiteral();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    antlr4::tree::TerminalNode *FOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SpecificFunctionContext* specificFunction();

  class  CaseFuncAlternativeContext : public antlr4::ParserRuleContext {
  public:
    MySqlParser::FunctionArgContext *condition = nullptr;;
    MySqlParser::FunctionArgContext *consequent = nullptr;;
    CaseFuncAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<FunctionArgContext *> functionArg();
    FunctionArgContext* functionArg(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseFuncAlternativeContext* caseFuncAlternative();

  class  LevelsInWeightStringContext : public antlr4::ParserRuleContext {
  public:
    LevelsInWeightStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LevelsInWeightStringContext() = default;
    void copyFrom(LevelsInWeightStringContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LevelWeightRangeContext : public LevelsInWeightStringContext {
  public:
    LevelWeightRangeContext(LevelsInWeightStringContext *ctx);

    MySqlParser::DecimalLiteralContext *firstLevel = nullptr;
    MySqlParser::DecimalLiteralContext *lastLevel = nullptr;
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *MINUS();
    std::vector<DecimalLiteralContext *> decimalLiteral();
    DecimalLiteralContext* decimalLiteral(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LevelWeightListContext : public LevelsInWeightStringContext {
  public:
    LevelWeightListContext(LevelsInWeightStringContext *ctx);

    antlr4::tree::TerminalNode *LEVEL();
    std::vector<LevelInWeightListElementContext *> levelInWeightListElement();
    LevelInWeightListElementContext* levelInWeightListElement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  LevelsInWeightStringContext* levelsInWeightString();

  class  LevelInWeightListElementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *orderType = nullptr;;
    LevelInWeightListElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DecimalLiteralContext *decimalLiteral();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *REVERSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LevelInWeightListElementContext* levelInWeightListElement();

  class  AggregateWindowedFunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *aggregator = nullptr;;
    antlr4::Token *starArg = nullptr;;
    antlr4::Token *separator = nullptr;;
    AggregateWindowedFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    FunctionArgContext *functionArg();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *STAR();
    FunctionArgsContext *functionArgs();
    antlr4::tree::TerminalNode *BIT_AND();
    antlr4::tree::TerminalNode *BIT_OR();
    antlr4::tree::TerminalNode *BIT_XOR();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *GROUP_CONCAT();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<OrderByExpressionContext *> orderByExpression();
    OrderByExpressionContext* orderByExpression(size_t i);
    antlr4::tree::TerminalNode *SEPARATOR();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AggregateWindowedFunctionContext* aggregateWindowedFunction();

  class  ScalarFunctionNameContext : public antlr4::ParserRuleContext {
  public:
    ScalarFunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionNameBaseContext *functionNameBase();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *CURDATE();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURTIME();
    antlr4::tree::TerminalNode *DATE_ADD();
    antlr4::tree::TerminalNode *DATE_SUB();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *NOW();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SYSDATE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *UTC_DATE();
    antlr4::tree::TerminalNode *UTC_TIME();
    antlr4::tree::TerminalNode *UTC_TIMESTAMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScalarFunctionNameContext* scalarFunctionName();

  class  PasswordFunctionClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;;
    PasswordFunctionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    FunctionArgContext *functionArg();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *OLD_PASSWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PasswordFunctionClauseContext* passwordFunctionClause();

  class  FunctionArgsContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<FullColumnNameContext *> fullColumnName();
    FullColumnNameContext* fullColumnName(size_t i);
    std::vector<FunctionCallContext *> functionCall();
    FunctionCallContext* functionCall(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionArgsContext* functionArgs();

  class  FunctionArgContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    FullColumnNameContext *fullColumnName();
    FunctionCallContext *functionCall();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionArgContext* functionArg();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IsExpressionContext : public ExpressionContext {
  public:
    IsExpressionContext(ExpressionContext *ctx);

    antlr4::Token *testValue = nullptr;
    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NotExpressionContext : public ExpressionContext {
  public:
    NotExpressionContext(ExpressionContext *ctx);

    antlr4::Token *notOperator = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalExpressionContext : public ExpressionContext {
  public:
    LogicalExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    LogicalOperatorContext *logicalOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PredicateExpressionContext : public ExpressionContext {
  public:
    PredicateExpressionContext(ExpressionContext *ctx);

    PredicateContext *predicate();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateContext() = default;
    void copyFrom(PredicateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SoundsLikePredicateContext : public PredicateContext {
  public:
    SoundsLikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *LIKE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExpressionAtomPredicateContext : public PredicateContext {
  public:
    ExpressionAtomPredicateContext(PredicateContext *ctx);

    ExpressionAtomContext *expressionAtom();
    antlr4::tree::TerminalNode *LOCAL_ID();
    antlr4::tree::TerminalNode *VAR_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  InPredicateContext : public PredicateContext {
  public:
    InPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    SelectStatementContext *selectStatement();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubqueryComparasionPredicateContext : public PredicateContext {
  public:
    SubqueryComparasionPredicateContext(PredicateContext *ctx);

    antlr4::Token *quantifier = nullptr;
    PredicateContext *predicate();
    ComparisonOperatorContext *comparisonOperator();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BetweenPredicateContext : public PredicateContext {
  public:
    BetweenPredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BinaryComparasionPredicateContext : public PredicateContext {
  public:
    BinaryComparasionPredicateContext(PredicateContext *ctx);

    MySqlParser::PredicateContext *left = nullptr;
    MySqlParser::PredicateContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IsNullPredicateContext : public PredicateContext {
  public:
    IsNullPredicateContext(PredicateContext *ctx);

    PredicateContext *predicate();
    antlr4::tree::TerminalNode *IS();
    NullNotnullContext *nullNotnull();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LikePredicateContext : public PredicateContext {
  public:
    LikePredicateContext(PredicateContext *ctx);

    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RegexpPredicateContext : public PredicateContext {
  public:
    RegexpPredicateContext(PredicateContext *ctx);

    antlr4::Token *regex = nullptr;
    std::vector<PredicateContext *> predicate();
    PredicateContext* predicate(size_t i);
    antlr4::tree::TerminalNode *REGEXP();
    antlr4::tree::TerminalNode *RLIKE();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PredicateContext* predicate();
  PredicateContext* predicate(int precedence);
  class  ExpressionAtomContext : public antlr4::ParserRuleContext {
  public:
    ExpressionAtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionAtomContext() = default;
    void copyFrom(ExpressionAtomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnaryExpressionAtomContext : public ExpressionAtomContext {
  public:
    UnaryExpressionAtomContext(ExpressionAtomContext *ctx);

    UnaryOperatorContext *unaryOperator();
    ExpressionAtomContext *expressionAtom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  CollateExpressionAtomContext : public ExpressionAtomContext {
  public:
    CollateExpressionAtomContext(ExpressionAtomContext *ctx);

    ExpressionAtomContext *expressionAtom();
    antlr4::tree::TerminalNode *COLLATE();
    CollationNameContext *collationName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SubqueryExpessionAtomContext : public ExpressionAtomContext {
  public:
    SubqueryExpessionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MysqlVariableExpressionAtomContext : public ExpressionAtomContext {
  public:
    MysqlVariableExpressionAtomContext(ExpressionAtomContext *ctx);

    MysqlVariableContext *mysqlVariable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NestedExpressionAtomContext : public ExpressionAtomContext {
  public:
    NestedExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NestedRowExpressionAtomContext : public ExpressionAtomContext {
  public:
    NestedRowExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MathExpressionAtomContext : public ExpressionAtomContext {
  public:
    MathExpressionAtomContext(ExpressionAtomContext *ctx);

    MySqlParser::ExpressionAtomContext *left = nullptr;
    MySqlParser::ExpressionAtomContext *right = nullptr;
    MathOperatorContext *mathOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IntervalExpressionAtomContext : public ExpressionAtomContext {
  public:
    IntervalExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *INTERVAL();
    ExpressionContext *expression();
    IntervalTypeContext *intervalType();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExistsExpessionAtomContext : public ExpressionAtomContext {
  public:
    ExistsExpessionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    SelectStatementContext *selectStatement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ConstantExpressionAtomContext : public ExpressionAtomContext {
  public:
    ConstantExpressionAtomContext(ExpressionAtomContext *ctx);

    ConstantContext *constant();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FunctionCallExpressionAtomContext : public ExpressionAtomContext {
  public:
    FunctionCallExpressionAtomContext(ExpressionAtomContext *ctx);

    FunctionCallContext *functionCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BinaryExpressionAtomContext : public ExpressionAtomContext {
  public:
    BinaryExpressionAtomContext(ExpressionAtomContext *ctx);

    antlr4::tree::TerminalNode *BINARY();
    ExpressionAtomContext *expressionAtom();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FullColumnNameExpressionAtomContext : public ExpressionAtomContext {
  public:
    FullColumnNameExpressionAtomContext(ExpressionAtomContext *ctx);

    FullColumnNameContext *fullColumnName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitExpressionAtomContext : public ExpressionAtomContext {
  public:
    BitExpressionAtomContext(ExpressionAtomContext *ctx);

    MySqlParser::ExpressionAtomContext *left = nullptr;
    MySqlParser::ExpressionAtomContext *right = nullptr;
    BitOperatorContext *bitOperator();
    std::vector<ExpressionAtomContext *> expressionAtom();
    ExpressionAtomContext* expressionAtom(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExpressionAtomContext* expressionAtom();
  ExpressionAtomContext* expressionAtom(int precedence);
  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();
    antlr4::tree::TerminalNode *BIT_NOT_OP();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL_SYMBOL();
    antlr4::tree::TerminalNode *GREATER_SYMBOL();
    antlr4::tree::TerminalNode *LESS_SYMBOL();
    antlr4::tree::TerminalNode *EXCLAMATION_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  LogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    std::vector<antlr4::tree::TerminalNode *> BIT_AND_OP();
    antlr4::tree::TerminalNode* BIT_AND_OP(size_t i);
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *OR();
    std::vector<antlr4::tree::TerminalNode *> BIT_OR_OP();
    antlr4::tree::TerminalNode* BIT_OR_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicalOperatorContext* logicalOperator();

  class  BitOperatorContext : public antlr4::ParserRuleContext {
  public:
    BitOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LESS_SYMBOL();
    antlr4::tree::TerminalNode* LESS_SYMBOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GREATER_SYMBOL();
    antlr4::tree::TerminalNode* GREATER_SYMBOL(size_t i);
    antlr4::tree::TerminalNode *BIT_AND_OP();
    antlr4::tree::TerminalNode *BIT_XOR_OP();
    antlr4::tree::TerminalNode *BIT_OR_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitOperatorContext* bitOperator();

  class  MathOperatorContext : public antlr4::ParserRuleContext {
  public:
    MathOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MINUSMINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MathOperatorContext* mathOperator();

  class  CharsetNameBaseContext : public antlr4::ParserRuleContext {
  public:
    CharsetNameBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARMSCII8();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *BIG5();
    antlr4::tree::TerminalNode *CP1250();
    antlr4::tree::TerminalNode *CP1251();
    antlr4::tree::TerminalNode *CP1256();
    antlr4::tree::TerminalNode *CP1257();
    antlr4::tree::TerminalNode *CP850();
    antlr4::tree::TerminalNode *CP852();
    antlr4::tree::TerminalNode *CP866();
    antlr4::tree::TerminalNode *CP932();
    antlr4::tree::TerminalNode *DEC8();
    antlr4::tree::TerminalNode *EUCJPMS();
    antlr4::tree::TerminalNode *EUCKR();
    antlr4::tree::TerminalNode *GB2312();
    antlr4::tree::TerminalNode *GBK();
    antlr4::tree::TerminalNode *GEOSTD8();
    antlr4::tree::TerminalNode *GREEK();
    antlr4::tree::TerminalNode *HEBREW();
    antlr4::tree::TerminalNode *HP8();
    antlr4::tree::TerminalNode *KEYBCS2();
    antlr4::tree::TerminalNode *KOI8R();
    antlr4::tree::TerminalNode *KOI8U();
    antlr4::tree::TerminalNode *LATIN1();
    antlr4::tree::TerminalNode *LATIN2();
    antlr4::tree::TerminalNode *LATIN5();
    antlr4::tree::TerminalNode *LATIN7();
    antlr4::tree::TerminalNode *MACCE();
    antlr4::tree::TerminalNode *MACROMAN();
    antlr4::tree::TerminalNode *SJIS();
    antlr4::tree::TerminalNode *SWE7();
    antlr4::tree::TerminalNode *TIS620();
    antlr4::tree::TerminalNode *UCS2();
    antlr4::tree::TerminalNode *UJIS();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTF16LE();
    antlr4::tree::TerminalNode *UTF32();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF8MB3();
    antlr4::tree::TerminalNode *UTF8MB4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharsetNameBaseContext* charsetNameBase();

  class  TransactionLevelBaseContext : public antlr4::ParserRuleContext {
  public:
    TransactionLevelBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *SERIALIZABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TransactionLevelBaseContext* transactionLevelBase();

  class  PrivilegesBaseContext : public antlr4::ParserRuleContext {
  public:
    PrivilegesBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *ROUTINE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *PROCESS();
    antlr4::tree::TerminalNode *RELOAD();
    antlr4::tree::TerminalNode *SHUTDOWN();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *PRIVILEGES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivilegesBaseContext* privilegesBase();

  class  IntervalTypeBaseContext : public antlr4::ParserRuleContext {
  public:
    IntervalTypeBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *MICROSECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IntervalTypeBaseContext* intervalTypeBase();

  class  DataTypeBaseContext : public antlr4::ParserRuleContext {
  public:
    DataTypeBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *DATETIME();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DataTypeBaseContext* dataTypeBase();

  class  KeywordsCanBeIdContext : public antlr4::ParserRuleContext {
  public:
    KeywordsCanBeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCOUNT();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *ALGORITHM();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *AUTHORS();
    antlr4::tree::TerminalNode *AUTOCOMMIT();
    antlr4::tree::TerminalNode *AUTOEXTEND_SIZE();
    antlr4::tree::TerminalNode *AUTO_INCREMENT();
    antlr4::tree::TerminalNode *AVG_ROW_LENGTH();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BINLOG();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOCK();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BTREE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CHAIN();
    antlr4::tree::TerminalNode *CHANGED();
    antlr4::tree::TerminalNode *CHANNEL();
    antlr4::tree::TerminalNode *CHECKSUM();
    antlr4::tree::TerminalNode *PAGE_CHECKSUM();
    antlr4::tree::TerminalNode *CATALOG_NAME();
    antlr4::tree::TerminalNode *CIPHER();
    antlr4::tree::TerminalNode *CLASS_ORIGIN();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODE();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COLUMN_FORMAT();
    antlr4::tree::TerminalNode *COLUMN_NAME();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPLETION();
    antlr4::tree::TerminalNode *COMPRESSED();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *CONCURRENT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONSISTENT();
    antlr4::tree::TerminalNode *CONSTRAINT_CATALOG();
    antlr4::tree::TerminalNode *CONSTRAINT_NAME();
    antlr4::tree::TerminalNode *CONSTRAINT_SCHEMA();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTRIBUTORS();
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAFILE();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEFAULT_AUTH();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DELAY_KEY_WRITE();
    antlr4::tree::TerminalNode *DES_KEY_FILE();
    antlr4::tree::TerminalNode *DIRECTORY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISCARD();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DUMPFILE();
    antlr4::tree::TerminalNode *DUPLICATE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDS();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *ENGINES();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ERRORS();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EVEN();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVENTS();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXCHANGE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXPIRE();
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *EXTENDED();
    antlr4::tree::TerminalNode *EXTENT_SIZE();
    antlr4::tree::TerminalNode *FAST();
    antlr4::tree::TerminalNode *FAULTS();
    antlr4::tree::TerminalNode *FIELDS();
    antlr4::tree::TerminalNode *FILE_BLOCK_SIZE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FIXED();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOLLOWS();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GRANTS();
    antlr4::tree::TerminalNode *GROUP_REPLICATION();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HELP();
    antlr4::tree::TerminalNode *HOST();
    antlr4::tree::TerminalNode *HOSTS();
    antlr4::tree::TerminalNode *IDENTIFIED();
    antlr4::tree::TerminalNode *IGNORE_SERVER_IDS();
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INITIAL_SIZE();
    antlr4::tree::TerminalNode *INPLACE();
    antlr4::tree::TerminalNode *INSERT_METHOD();
    antlr4::tree::TerminalNode *INSTALL();
    antlr4::tree::TerminalNode *INSTANCE();
    antlr4::tree::TerminalNode *INTERNAL();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IO();
    antlr4::tree::TerminalNode *IO_THREAD();
    antlr4::tree::TerminalNode *IPC();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ISSUER();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *KEY_BLOCK_SIZE();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LEAVES();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOGFILE();
    antlr4::tree::TerminalNode *LOGS();
    antlr4::tree::TerminalNode *MASTER();
    antlr4::tree::TerminalNode *MASTER_AUTO_POSITION();
    antlr4::tree::TerminalNode *MASTER_CONNECT_RETRY();
    antlr4::tree::TerminalNode *MASTER_DELAY();
    antlr4::tree::TerminalNode *MASTER_HEARTBEAT_PERIOD();
    antlr4::tree::TerminalNode *MASTER_HOST();
    antlr4::tree::TerminalNode *MASTER_LOG_FILE();
    antlr4::tree::TerminalNode *MASTER_LOG_POS();
    antlr4::tree::TerminalNode *MASTER_PASSWORD();
    antlr4::tree::TerminalNode *MASTER_PORT();
    antlr4::tree::TerminalNode *MASTER_RETRY_COUNT();
    antlr4::tree::TerminalNode *MASTER_SSL();
    antlr4::tree::TerminalNode *MASTER_SSL_CA();
    antlr4::tree::TerminalNode *MASTER_SSL_CAPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_CERT();
    antlr4::tree::TerminalNode *MASTER_SSL_CIPHER();
    antlr4::tree::TerminalNode *MASTER_SSL_CRL();
    antlr4::tree::TerminalNode *MASTER_SSL_CRLPATH();
    antlr4::tree::TerminalNode *MASTER_SSL_KEY();
    antlr4::tree::TerminalNode *MASTER_TLS_VERSION();
    antlr4::tree::TerminalNode *MASTER_USER();
    antlr4::tree::TerminalNode *MAX_CONNECTIONS_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_QUERIES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_ROWS();
    antlr4::tree::TerminalNode *MAX_SIZE();
    antlr4::tree::TerminalNode *MAX_UPDATES_PER_HOUR();
    antlr4::tree::TerminalNode *MAX_USER_CONNECTIONS();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMORY();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *MID();
    antlr4::tree::TerminalNode *MIGRATE();
    antlr4::tree::TerminalNode *MIN_ROWS();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MUTEX();
    antlr4::tree::TerminalNode *MYSQL();
    antlr4::tree::TerminalNode *MYSQL_ERRNO();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMES();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NEVER();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NODEGROUP();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *OFFLINE();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OJ();
    antlr4::tree::TerminalNode *OLD_PASSWORD();
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZER_COSTS();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OWNER();
    antlr4::tree::TerminalNode *PACK_KEYS();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PARSER();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITIONING();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PHASE();
    antlr4::tree::TerminalNode *PLUGINS();
    antlr4::tree::TerminalNode *PLUGIN_DIR();
    antlr4::tree::TerminalNode *PLUGIN();
    antlr4::tree::TerminalNode *PORT();
    antlr4::tree::TerminalNode *PRECEDES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREV();
    antlr4::tree::TerminalNode *PROCESSLIST();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROFILES();
    antlr4::tree::TerminalNode *PROXY();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUICK();
    antlr4::tree::TerminalNode *REBUILD();
    antlr4::tree::TerminalNode *RECOVER();
    antlr4::tree::TerminalNode *REDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *REDUNDANT();
    antlr4::tree::TerminalNode *RELAY();
    antlr4::tree::TerminalNode *RELAYLOG();
    antlr4::tree::TerminalNode *RELAY_LOG_FILE();
    antlr4::tree::TerminalNode *RELAY_LOG_POS();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *REORGANIZE();
    antlr4::tree::TerminalNode *REPAIR();
    antlr4::tree::TerminalNode *REPLICATE_DO_DB();
    antlr4::tree::TerminalNode *REPLICATE_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_DB();
    antlr4::tree::TerminalNode *REPLICATE_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_REWRITE_DB();
    antlr4::tree::TerminalNode *REPLICATE_WILD_DO_TABLE();
    antlr4::tree::TerminalNode *REPLICATE_WILD_IGNORE_TABLE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROTATE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_FORMAT();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SCHEDULE();
    antlr4::tree::TerminalNode *SCHEMA_NAME();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SERIAL();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARED();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *SIMPLE();
    antlr4::tree::TerminalNode *SLAVE();
    antlr4::tree::TerminalNode *SLOW();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOCKET();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SONAME();
    antlr4::tree::TerminalNode *SOUNDS();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SQL_AFTER_GTIDS();
    antlr4::tree::TerminalNode *SQL_AFTER_MTS_GAPS();
    antlr4::tree::TerminalNode *SQL_BEFORE_GTIDS();
    antlr4::tree::TerminalNode *SQL_BUFFER_RESULT();
    antlr4::tree::TerminalNode *SQL_CACHE();
    antlr4::tree::TerminalNode *SQL_NO_CACHE();
    antlr4::tree::TerminalNode *SQL_THREAD();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *STATS_AUTO_RECALC();
    antlr4::tree::TerminalNode *STATS_PERSISTENT();
    antlr4::tree::TerminalNode *STATS_SAMPLE_PAGES();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SUBCLASS_ORIGIN();
    antlr4::tree::TerminalNode *SUBJECT();
    antlr4::tree::TerminalNode *SUBPARTITION();
    antlr4::tree::TerminalNode *SUBPARTITIONS();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWAPS();
    antlr4::tree::TerminalNode *SWITCHES();
    antlr4::tree::TerminalNode *TABLE_NAME();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEMPTABLE();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *TRADITIONAL();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *UNDEFINED();
    antlr4::tree::TerminalNode *UNDOFILE();
    antlr4::tree::TerminalNode *UNDO_BUFFER_SIZE();
    antlr4::tree::TerminalNode *UNINSTALL();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UPGRADE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USE_FRM();
    antlr4::tree::TerminalNode *USER_RESOURCES();
    antlr4::tree::TerminalNode *VALIDATION();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VARIABLES();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WARNINGS();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *X509();
    antlr4::tree::TerminalNode *XA();
    antlr4::tree::TerminalNode *XML();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordsCanBeIdContext* keywordsCanBeId();

  class  FunctionNameBaseContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABS();
    antlr4::tree::TerminalNode *ACOS();
    antlr4::tree::TerminalNode *ADDDATE();
    antlr4::tree::TerminalNode *ADDTIME();
    antlr4::tree::TerminalNode *AES_DECRYPT();
    antlr4::tree::TerminalNode *AES_ENCRYPT();
    antlr4::tree::TerminalNode *AREA();
    antlr4::tree::TerminalNode *ASBINARY();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASTEXT();
    antlr4::tree::TerminalNode *ASWKB();
    antlr4::tree::TerminalNode *ASWKT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DECRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_DERIVE();
    antlr4::tree::TerminalNode *ASYMMETRIC_ENCRYPT();
    antlr4::tree::TerminalNode *ASYMMETRIC_SIGN();
    antlr4::tree::TerminalNode *ASYMMETRIC_VERIFY();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *BMARK();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BIT_COUNT();
    antlr4::tree::TerminalNode *BIT_LENGTH();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTROID();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHARSET();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *COERCIBILITY();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCAT_WS();
    antlr4::tree::TerminalNode *CONNECTION_ID();
    antlr4::tree::TerminalNode *CONV();
    antlr4::tree::TerminalNode *CONVERT_TZ();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COT();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *CRC32();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PRIV_KEY();
    antlr4::tree::TerminalNode *CREATE_ASYMMETRIC_PUB_KEY();
    antlr4::tree::TerminalNode *CREATE_DH_PARAMETERS();
    antlr4::tree::TerminalNode *CREATE_DIGEST();
    antlr4::tree::TerminalNode *CROSSES();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DATEDIFF();
    antlr4::tree::TerminalNode *DATE_FORMAT();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYNAME();
    antlr4::tree::TerminalNode *DAYOFMONTH();
    antlr4::tree::TerminalNode *DAYOFWEEK();
    antlr4::tree::TerminalNode *DAYOFYEAR();
    antlr4::tree::TerminalNode *DECODE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DES_DECRYPT();
    antlr4::tree::TerminalNode *DES_ENCRYPT();
    antlr4::tree::TerminalNode *DIMENSION();
    antlr4::tree::TerminalNode *DISJOINT();
    antlr4::tree::TerminalNode *ELT();
    antlr4::tree::TerminalNode *ENCODE();
    antlr4::tree::TerminalNode *ENCRYPT();
    antlr4::tree::TerminalNode *ENDPOINT();
    antlr4::tree::TerminalNode *ENVELOPE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPORT_SET();
    antlr4::tree::TerminalNode *EXTERIORRING();
    antlr4::tree::TerminalNode *EXTRACTVALUE();
    antlr4::tree::TerminalNode *FIELD();
    antlr4::tree::TerminalNode *FIND_IN_SET();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND_ROWS();
    antlr4::tree::TerminalNode *FROM_BASE64();
    antlr4::tree::TerminalNode *FROM_DAYS();
    antlr4::tree::TerminalNode *FROM_UNIXTIME();
    antlr4::tree::TerminalNode *GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTION();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *GEOMETRYN();
    antlr4::tree::TerminalNode *GEOMETRYTYPE();
    antlr4::tree::TerminalNode *GEOMFROMTEXT();
    antlr4::tree::TerminalNode *GEOMFROMWKB();
    antlr4::tree::TerminalNode *GET_FORMAT();
    antlr4::tree::TerminalNode *GET_LOCK();
    antlr4::tree::TerminalNode *GLENGTH();
    antlr4::tree::TerminalNode *GREATEST();
    antlr4::tree::TerminalNode *GTID_SUBSET();
    antlr4::tree::TerminalNode *GTID_SUBTRACT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *IFNULL();
    antlr4::tree::TerminalNode *INET6_ATON();
    antlr4::tree::TerminalNode *INET6_NTOA();
    antlr4::tree::TerminalNode *INET_ATON();
    antlr4::tree::TerminalNode *INET_NTOA();
    antlr4::tree::TerminalNode *INSTR();
    antlr4::tree::TerminalNode *INTERIORRINGN();
    antlr4::tree::TerminalNode *INTERSECTS();
    antlr4::tree::TerminalNode *INVISIBLE();
    antlr4::tree::TerminalNode *ISCLOSED();
    antlr4::tree::TerminalNode *ISEMPTY();
    antlr4::tree::TerminalNode *ISNULL();
    antlr4::tree::TerminalNode *ISSIMPLE();
    antlr4::tree::TerminalNode *IS_FREE_LOCK();
    antlr4::tree::TerminalNode *IS_IPV4();
    antlr4::tree::TerminalNode *IS_IPV4_COMPAT();
    antlr4::tree::TerminalNode *IS_IPV4_MAPPED();
    antlr4::tree::TerminalNode *IS_IPV6();
    antlr4::tree::TerminalNode *IS_USED_LOCK();
    antlr4::tree::TerminalNode *LAST_INSERT_ID();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LEAST();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LINEFROMTEXT();
    antlr4::tree::TerminalNode *LINEFROMWKB();
    antlr4::tree::TerminalNode *LINESTRING();
    antlr4::tree::TerminalNode *LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD_FILE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG2();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LPAD();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAKEDATE();
    antlr4::tree::TerminalNode *MAKETIME();
    antlr4::tree::TerminalNode *MAKE_SET();
    antlr4::tree::TerminalNode *MASTER_POS_WAIT();
    antlr4::tree::TerminalNode *MBRCONTAINS();
    antlr4::tree::TerminalNode *MBRDISJOINT();
    antlr4::tree::TerminalNode *MBREQUAL();
    antlr4::tree::TerminalNode *MBRINTERSECTS();
    antlr4::tree::TerminalNode *MBROVERLAPS();
    antlr4::tree::TerminalNode *MBRTOUCHES();
    antlr4::tree::TerminalNode *MBRWITHIN();
    antlr4::tree::TerminalNode *MD5();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MLINEFROMTEXT();
    antlr4::tree::TerminalNode *MLINEFROMWKB();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHNAME();
    antlr4::tree::TerminalNode *MPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MPOINTFROMWKB();
    antlr4::tree::TerminalNode *MPOLYFROMTEXT();
    antlr4::tree::TerminalNode *MPOLYFROMWKB();
    antlr4::tree::TerminalNode *MULTILINESTRING();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *MULTILINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOINT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOINTFROMWKB();
    antlr4::tree::TerminalNode *MULTIPOLYGON();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMTEXT();
    antlr4::tree::TerminalNode *MULTIPOLYGONFROMWKB();
    antlr4::tree::TerminalNode *NAME_CONST();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NUMGEOMETRIES();
    antlr4::tree::TerminalNode *NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *NUMPOINTS();
    antlr4::tree::TerminalNode *OCT();
    antlr4::tree::TerminalNode *OCTET_LENGTH();
    antlr4::tree::TerminalNode *ORD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *PERIOD_ADD();
    antlr4::tree::TerminalNode *PERIOD_DIFF();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *POINT();
    antlr4::tree::TerminalNode *POINTFROMTEXT();
    antlr4::tree::TerminalNode *POINTFROMWKB();
    antlr4::tree::TerminalNode *POINTN();
    antlr4::tree::TerminalNode *POLYFROMTEXT();
    antlr4::tree::TerminalNode *POLYFROMWKB();
    antlr4::tree::TerminalNode *POLYGON();
    antlr4::tree::TerminalNode *POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *POLYGONFROMWKB();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *POW();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *RANDOM_BYTES();
    antlr4::tree::TerminalNode *RELEASE_LOCK();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROUND();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RPAD();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SEC_TO_TIME();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SESSION_VARIABLES_ADMIN();
    antlr4::tree::TerminalNode *SHA();
    antlr4::tree::TerminalNode *SHA1();
    antlr4::tree::TerminalNode *SHA2();
    antlr4::tree::TerminalNode *SIGN();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SLEEP();
    antlr4::tree::TerminalNode *SOUNDEX();
    antlr4::tree::TerminalNode *SQL_THREAD_WAIT_AFTER_GTIDS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *SRID();
    antlr4::tree::TerminalNode *STARTPOINT();
    antlr4::tree::TerminalNode *STRCMP();
    antlr4::tree::TerminalNode *STR_TO_DATE();
    antlr4::tree::TerminalNode *ST_AREA();
    antlr4::tree::TerminalNode *ST_ASBINARY();
    antlr4::tree::TerminalNode *ST_ASTEXT();
    antlr4::tree::TerminalNode *ST_ASWKB();
    antlr4::tree::TerminalNode *ST_ASWKT();
    antlr4::tree::TerminalNode *ST_BUFFER();
    antlr4::tree::TerminalNode *ST_CENTROID();
    antlr4::tree::TerminalNode *ST_CONTAINS();
    antlr4::tree::TerminalNode *ST_CROSSES();
    antlr4::tree::TerminalNode *ST_DIFFERENCE();
    antlr4::tree::TerminalNode *ST_DIMENSION();
    antlr4::tree::TerminalNode *ST_DISJOINT();
    antlr4::tree::TerminalNode *ST_DISTANCE();
    antlr4::tree::TerminalNode *ST_ENDPOINT();
    antlr4::tree::TerminalNode *ST_ENVELOPE();
    antlr4::tree::TerminalNode *ST_EQUALS();
    antlr4::tree::TerminalNode *ST_EXTERIORRING();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMTXT();
    antlr4::tree::TerminalNode *ST_GEOMCOLLFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYCOLLECTIONFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMETRYFROMWKB();
    antlr4::tree::TerminalNode *ST_GEOMETRYN();
    antlr4::tree::TerminalNode *ST_GEOMETRYTYPE();
    antlr4::tree::TerminalNode *ST_GEOMFROMTEXT();
    antlr4::tree::TerminalNode *ST_GEOMFROMWKB();
    antlr4::tree::TerminalNode *ST_INTERIORRINGN();
    antlr4::tree::TerminalNode *ST_INTERSECTION();
    antlr4::tree::TerminalNode *ST_INTERSECTS();
    antlr4::tree::TerminalNode *ST_ISCLOSED();
    antlr4::tree::TerminalNode *ST_ISEMPTY();
    antlr4::tree::TerminalNode *ST_ISSIMPLE();
    antlr4::tree::TerminalNode *ST_LINEFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINEFROMWKB();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMTEXT();
    antlr4::tree::TerminalNode *ST_LINESTRINGFROMWKB();
    antlr4::tree::TerminalNode *ST_NUMGEOMETRIES();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRING();
    antlr4::tree::TerminalNode *ST_NUMINTERIORRINGS();
    antlr4::tree::TerminalNode *ST_NUMPOINTS();
    antlr4::tree::TerminalNode *ST_OVERLAPS();
    antlr4::tree::TerminalNode *ST_POINTFROMTEXT();
    antlr4::tree::TerminalNode *ST_POINTFROMWKB();
    antlr4::tree::TerminalNode *ST_POINTN();
    antlr4::tree::TerminalNode *ST_POLYFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYFROMWKB();
    antlr4::tree::TerminalNode *ST_POLYGONFROMTEXT();
    antlr4::tree::TerminalNode *ST_POLYGONFROMWKB();
    antlr4::tree::TerminalNode *ST_SRID();
    antlr4::tree::TerminalNode *ST_STARTPOINT();
    antlr4::tree::TerminalNode *ST_SYMDIFFERENCE();
    antlr4::tree::TerminalNode *ST_TOUCHES();
    antlr4::tree::TerminalNode *ST_UNION();
    antlr4::tree::TerminalNode *ST_WITHIN();
    antlr4::tree::TerminalNode *ST_X();
    antlr4::tree::TerminalNode *ST_Y();
    antlr4::tree::TerminalNode *SUBDATE();
    antlr4::tree::TerminalNode *SUBSTRING_INDEX();
    antlr4::tree::TerminalNode *SUBTIME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEDIFF();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMESTAMPADD();
    antlr4::tree::TerminalNode *TIMESTAMPDIFF();
    antlr4::tree::TerminalNode *TIME_FORMAT();
    antlr4::tree::TerminalNode *TIME_TO_SEC();
    antlr4::tree::TerminalNode *TOUCHES();
    antlr4::tree::TerminalNode *TO_BASE64();
    antlr4::tree::TerminalNode *TO_DAYS();
    antlr4::tree::TerminalNode *TO_SECONDS();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNCOMPRESS();
    antlr4::tree::TerminalNode *UNCOMPRESSED_LENGTH();
    antlr4::tree::TerminalNode *UNHEX();
    antlr4::tree::TerminalNode *UNIX_TIMESTAMP();
    antlr4::tree::TerminalNode *UPDATEXML();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UUID();
    antlr4::tree::TerminalNode *UUID_SHORT();
    antlr4::tree::TerminalNode *VALIDATE_PASSWORD_STRENGTH();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VISIBLE();
    antlr4::tree::TerminalNode *WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WEEKDAY();
    antlr4::tree::TerminalNode *WEEKOFYEAR();
    antlr4::tree::TerminalNode *WEIGHT_STRING();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARWEEK();
    antlr4::tree::TerminalNode *Y_FUNCTION();
    antlr4::tree::TerminalNode *X_FUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionNameBaseContext* functionNameBase();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool predicateSempred(PredicateContext *_localctx, size_t predicateIndex);
  bool expressionAtomSempred(ExpressionAtomContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace parsers
