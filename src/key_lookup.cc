using std::pair;
using char_key = pair<std::string const,int>;

const std::map<std::string const,int const> key_lookup {
 
  char_key("up",SDLK_UP),
  char_key("down",SDLK_DOWN),
  char_key("left",SDLK_LEFT),
  char_key("right",SDLK_RIGHT),
  char_key("space",SDLK_SPACE),
  char_key("lshift",SDLK_LSHIFT),
  char_key("return",SDLK_RETURN),
  char_key("backspace",SDLK_BACKSPACE),
  char_key("tab",SDLK_TAB),
  char_key("space",SDLK_SPACE),
  char_key("!",SDLK_EXCLAIM),
  char_key("\"",SDLK_QUOTEDBL),
  char_key("#",SDLK_HASH),
  char_key("%",SDLK_PERCENT),
  char_key("$",SDLK_DOLLAR),
  char_key("&",SDLK_AMPERSAND),
  char_key("\'",SDLK_QUOTE),
  char_key("(",SDLK_LEFTPAREN),
  char_key(")",SDLK_RIGHTPAREN),
  char_key("*",SDLK_ASTERISK),
  char_key("+",SDLK_PLUS),
  char_key(",",SDLK_COMMA),
  char_key("-",SDLK_MINUS),
  char_key(".",SDLK_PERIOD),
  char_key("/",SDLK_SLASH),
  char_key("0",SDLK_0),
  char_key("1",SDLK_1),
  char_key("2",SDLK_2),
  char_key("3",SDLK_3),
  char_key("4",SDLK_4),
  char_key("5",SDLK_5),
  char_key("6",SDLK_6),
  char_key("7",SDLK_7),
  char_key("8",SDLK_8),
  char_key("9",SDLK_9),
  char_key(":",SDLK_COLON),
  char_key(";",SDLK_SEMICOLON),
  char_key("<",SDLK_LESS),
  char_key("=",SDLK_EQUALS),
  char_key(">",SDLK_GREATER),
  char_key("?",SDLK_QUESTION),
  char_key("@",SDLK_AT),
  char_key("[",SDLK_LEFTBRACKET),
  char_key("\\",SDLK_BACKSLASH),
  char_key("]",SDLK_RIGHTBRACKET),
  char_key("^",SDLK_CARET),
  char_key("_",SDLK_UNDERSCORE),
  char_key("`",SDLK_BACKQUOTE),
  char_key("a",SDLK_a),
  char_key("b",SDLK_b),
  char_key("c",SDLK_c),
  char_key("d",SDLK_d),
  char_key("e",SDLK_e),
  char_key("f",SDLK_f),
  char_key("g",SDLK_g),
  char_key("h",SDLK_h),
  char_key("i",SDLK_i),
  char_key("j",SDLK_j),
  char_key("k",SDLK_k),
  char_key("l",SDLK_l),
  char_key("m",SDLK_m),
  char_key("n",SDLK_n),
  char_key("o",SDLK_o),
  char_key("p",SDLK_p),
  char_key("q",SDLK_q),
  char_key("r",SDLK_r),
  char_key("s",SDLK_s),
  char_key("t",SDLK_t),
  char_key("u",SDLK_u),
  char_key("v",SDLK_v),
  char_key("w",SDLK_w),
  char_key("x",SDLK_x),
  char_key("y",SDLK_y),
  char_key("z",SDLK_z),
  char_key("capslock",SDLK_CAPSLOCK),
  char_key("f1",SDLK_F1),
  char_key("f2",SDLK_F2),
  char_key("f3",SDLK_F3),
  char_key("f4",SDLK_F4),
  char_key("f5",SDLK_F5),
  char_key("f6",SDLK_F6),
  char_key("f7",SDLK_F7),
  char_key("f8",SDLK_F8),
  char_key("f9",SDLK_F9),
  char_key("f10",SDLK_F10),
  char_key("f11",SDLK_F11),
  char_key("f12",SDLK_F12),
  char_key("prtsc",SDLK_PRINTSCREEN),
  char_key("scrlk",SDLK_SCROLLLOCK),
  char_key("pause",SDLK_PAUSE),
  char_key("insert",SDLK_INSERT),
  char_key("home",SDLK_HOME),
  char_key("pgup",SDLK_PAGEUP),
  char_key("del",SDLK_DELETE),
  char_key("end",SDLK_END),
  char_key("pgdn",SDLK_PAGEDOWN),
  char_key("numlk",SDLK_NUMLOCKCLEAR),
  char_key("kp/",SDLK_KP_DIVIDE),
  char_key("kp*",SDLK_KP_MULTIPLY),
  char_key("kp-",SDLK_KP_MINUS),
  char_key("kp+",SDLK_KP_PLUS),
  char_key("kp_enter",SDLK_KP_ENTER),
  char_key("kp1",SDLK_KP_1),
  char_key("kp2",SDLK_KP_2),
  char_key("kp3",SDLK_KP_3),
  char_key("kp4",SDLK_KP_4),
  char_key("kp5",SDLK_KP_5),
  char_key("kp6",SDLK_KP_6),
  char_key("kp7",SDLK_KP_7),
  char_key("kp8",SDLK_KP_8),
  char_key("kp9",SDLK_KP_9),
  char_key("kp0",SDLK_KP_0),
  char_key("kp.",SDLK_KP_PERIOD),
  char_key("application",SDLK_APPLICATION),
  char_key("power",SDLK_POWER),
  char_key("kp=",SDLK_KP_EQUALS),
  char_key("f13",SDLK_F13),
  char_key("f14",SDLK_F14),
  char_key("f15",SDLK_F15),
  char_key("f16",SDLK_F16),
  char_key("f17",SDLK_F17),
  char_key("f18",SDLK_F18),
  char_key("f19",SDLK_F19),
  char_key("f20",SDLK_F20),
  char_key("f21",SDLK_F21),
  char_key("f22",SDLK_F22),
  char_key("f23",SDLK_F23),
  char_key("f24",SDLK_F24),
  char_key("execute",SDLK_EXECUTE),
  char_key("help",SDLK_HELP),
  char_key("menu",SDLK_MENU),
  char_key("select",SDLK_SELECT),
  char_key("stop",SDLK_STOP),
  char_key("again",SDLK_AGAIN),
  char_key("undo",SDLK_UNDO),
  char_key("cut",SDLK_CUT),
  char_key("copy",SDLK_COPY),
  char_key("paste",SDLK_PASTE),
  char_key("find",SDLK_FIND),
  char_key("mute",SDLK_MUTE),
  char_key("volume_up",SDLK_VOLUMEUP),
  char_key("volume_down",SDLK_VOLUMEDOWN),
  char_key("kp,",SDLK_KP_COMMA),
  char_key("kp=as400",SDLK_KP_EQUALSAS400),
  char_key("alterase",SDLK_ALTERASE),
  char_key("sesreq",SDLK_SYSREQ),
  char_key("cancel",SDLK_CANCEL),
  char_key("clear",SDLK_CLEAR),
  char_key("prior",SDLK_PRIOR),
  char_key("return2",SDLK_RETURN2),
  char_key("separator",SDLK_SEPARATOR),
  char_key("out",SDLK_OUT),
  char_key("oper",SDLK_OPER),
  char_key("clearagain",SDLK_CLEARAGAIN),
  char_key("crsel",SDLK_CRSEL),
  char_key("exsel",SDLK_EXSEL),
  char_key("kp00",SDLK_KP_00),
  char_key("kp000",SDLK_KP_000),
  char_key("thouseparator",SDLK_THOUSANDSSEPARATOR),
  char_key("decseparator",SDLK_DECIMALSEPARATOR),
  char_key("currencyunit",SDLK_CURRENCYUNIT),
  char_key("currencysubunit",SDLK_CURRENCYSUBUNIT),
  char_key("kp(",SDLK_KP_LEFTPAREN),
  char_key("kp)",SDLK_KP_RIGHTPAREN),
  char_key("kp{",SDLK_KP_LEFTBRACE),
  char_key("kp}",SDLK_KP_RIGHTBRACE),
  char_key("kp_tab",SDLK_KP_TAB),
  char_key("kp_backspace",SDLK_KP_BACKSPACE),
  char_key("kp_a",SDLK_KP_A),
  char_key("kp_b",SDLK_KP_B),
  char_key("kp_c",SDLK_KP_C),
  char_key("kp_d",SDLK_KP_D),
  char_key("kp_e",SDLK_KP_E),
  char_key("kp_f",SDLK_KP_F),
  char_key("kp_xor",SDLK_KP_XOR),
  char_key("kp_power",SDLK_KP_POWER),
  char_key("kp%",SDLK_KP_PERCENT),
  char_key("kp<",SDLK_KP_LESS),
  char_key("kp>",SDLK_KP_GREATER),
  char_key("kp&",SDLK_KP_AMPERSAND),
  char_key("kp&&",SDLK_KP_DBLAMPERSAND),
  char_key("kp|",SDLK_KP_VERTICALBAR),
  char_key("kp||",SDLK_KP_DBLVERTICALBAR),
  char_key("kp:",SDLK_KP_COLON),
  char_key("kp#",SDLK_KP_HASH),
  char_key("kp_space",SDLK_KP_SPACE),
  char_key("kp@",SDLK_KP_AT),
  char_key("kp!",SDLK_KP_EXCLAM),
  char_key("kp_memstore",SDLK_KP_MEMSTORE),
  char_key("kp_memrecall",SDLK_KP_MEMRECALL),
  char_key("kp_memclear",SDLK_KP_MEMCLEAR),
  char_key("kp_memadd",SDLK_KP_MEMADD),
  char_key("kp_memsubtract",SDLK_KP_MEMSUBTRACT),
  char_key("kp_memmultiply",SDLK_KP_MEMMULTIPLY),
  char_key("kp_memdivide",SDLK_KP_MEMDIVIDE),
  char_key("kp_plusminus",SDLK_KP_PLUSMINUS),
  char_key("kp_clear",SDLK_KP_CLEAR),
  char_key("kp_clearentry",SDLK_KP_CLEARENTRY),
  char_key("kp_binary",SDLK_KP_BINARY),
  char_key("kp_octal",SDLK_KP_OCTAL),
  char_key("kp_decimal",SDLK_KP_DECIMAL),
  char_key("kp_hexadecimal",SDLK_KP_HEXADECIMAL),
  char_key("lctrl",SDLK_LCTRL),
  char_key("lshift",SDLK_LSHIFT),
  char_key("lalt",SDLK_LALT),
  char_key("lgui",SDLK_LGUI),
  char_key("rctrl",SDLK_RCTRL),
  char_key("rshift",SDLK_RSHIFT),
  char_key("ralt",SDLK_RALT),
  char_key("rgui",SDLK_RGUI),
  char_key("mode",SDLK_MODE),
  char_key("audionext",SDLK_AUDIONEXT),
  char_key("audioprev",SDLK_AUDIOPREV),
  char_key("audiostop",SDLK_AUDIOSTOP),
  char_key("audioplay",SDLK_AUDIOPLAY),
  char_key("audiomute",SDLK_AUDIOMUTE),
  char_key("mediaselect",SDLK_MEDIASELECT),
  char_key("www",SDLK_WWW),
  char_key("mail",SDLK_MAIL),
  char_key("calculator",SDLK_CALCULATOR),
  char_key("computer",SDLK_COMPUTER),
  char_key("ac_search",SDLK_AC_SEARCH),
  char_key("ac_home",SDLK_AC_HOME),
  char_key("ac_back",SDLK_AC_BACK),
  char_key("ac_forward",SDLK_AC_FORWARD),
  char_key("ac_stop",SDLK_AC_STOP),
  char_key("ac_refresh",SDLK_AC_REFRESH),
  char_key("ac_bookmarks",SDLK_AC_BOOKMARKS),
  char_key("brightnessdown",SDLK_BRIGHTNESSDOWN),
  char_key("brightnessup",SDLK_BRIGHTNESSUP),
  char_key("displayswitch",SDLK_DISPLAYSWITCH),
  char_key("kbdillumtoggle",SDLK_KBDILLUMTOGGLE),
  char_key("kbdillumdown",SDLK_KBDILLUMDOWN),
  char_key("kbdillumup",SDLK_KBDILLUMUP),
  char_key("eject",SDLK_EJECT),
  char_key("sleep",SDLK_SLEEP)
  
};
 