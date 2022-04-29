// Copyright © 2022 David Caldwell <david@porkrind.org>

import Map from "./map.js";

// WASI stuff. Shouldn't this exist in a js package somewhere??
const WASI_ERRNO_SUCCESS        = 0;
const WASI_ERRNO_2BIG           = 1;
const WASI_ERRNO_ACCES          = 2;
const WASI_ERRNO_ADDRINUSE      = 3;
const WASI_ERRNO_ADDRNOTAVAIL   = 4;
const WASI_ERRNO_AFNOSUPPORT    = 5;
const WASI_ERRNO_AGAIN          = 6;
const WASI_ERRNO_ALREADY        = 7;
const WASI_ERRNO_BADF           = 8;
const WASI_ERRNO_BADMSG         = 9;
const WASI_ERRNO_BUSY           = 10;
const WASI_ERRNO_CANCELED       = 11;
const WASI_ERRNO_CHILD          = 12;
const WASI_ERRNO_CONNABORTED    = 13;
const WASI_ERRNO_CONNREFUSED    = 14;
const WASI_ERRNO_CONNRESET      = 15;
const WASI_ERRNO_DEADLK         = 16;
const WASI_ERRNO_DESTADDRREQ    = 17;
const WASI_ERRNO_DOM            = 18;
const WASI_ERRNO_DQUOT          = 19;
const WASI_ERRNO_EXIST          = 20;
const WASI_ERRNO_FAULT          = 21;
const WASI_ERRNO_FBIG           = 22;
const WASI_ERRNO_HOSTUNREACH    = 23;
const WASI_ERRNO_IDRM           = 24;
const WASI_ERRNO_ILSEQ          = 25;
const WASI_ERRNO_INPROGRESS     = 26;
const WASI_ERRNO_INTR           = 27;
const WASI_ERRNO_INVAL          = 28;
const WASI_ERRNO_IO             = 29;
const WASI_ERRNO_ISCONN         = 30;
const WASI_ERRNO_ISDIR          = 31;
const WASI_ERRNO_LOOP           = 32;
const WASI_ERRNO_MFILE          = 33;
const WASI_ERRNO_MLINK          = 34;
const WASI_ERRNO_MSGSIZE        = 35;
const WASI_ERRNO_MULTIHOP       = 36;
const WASI_ERRNO_NAMETOOLONG    = 37;
const WASI_ERRNO_NETDOWN        = 38;
const WASI_ERRNO_NETRESET       = 39;
const WASI_ERRNO_NETUNREACH     = 40;
const WASI_ERRNO_NFILE          = 41;
const WASI_ERRNO_NOBUFS         = 42;
const WASI_ERRNO_NODEV          = 43;
const WASI_ERRNO_NOENT          = 44;
const WASI_ERRNO_NOEXEC         = 45;
const WASI_ERRNO_NOLCK          = 46;
const WASI_ERRNO_NOLINK         = 47;
const WASI_ERRNO_NOMEM          = 48;
const WASI_ERRNO_NOMSG          = 49;
const WASI_ERRNO_NOPROTOOPT     = 50;
const WASI_ERRNO_NOSPC          = 51;
const WASI_ERRNO_NOSYS          = 52;
const WASI_ERRNO_NOTCONN        = 53;
const WASI_ERRNO_NOTDIR         = 54;
const WASI_ERRNO_NOTEMPTY       = 55;
const WASI_ERRNO_NOTRECOVERABLE = 56;
const WASI_ERRNO_NOTSOCK        = 57;
const WASI_ERRNO_NOTSUP         = 58;
const WASI_ERRNO_NOTTY          = 59;
const WASI_ERRNO_NXIO           = 60;
const WASI_ERRNO_OVERFLOW       = 61;
const WASI_ERRNO_OWNERDEAD      = 62;
const WASI_ERRNO_PERM           = 63;
const WASI_ERRNO_PIPE           = 64;
const WASI_ERRNO_PROTO          = 65;
const WASI_ERRNO_PROTONOSUPPORT = 66;
const WASI_ERRNO_PROTOTYPE      = 67;
const WASI_ERRNO_RANGE          = 68;
const WASI_ERRNO_ROFS           = 69;
const WASI_ERRNO_SPIPE          = 70;
const WASI_ERRNO_SRCH           = 71;
const WASI_ERRNO_STALE          = 72;
const WASI_ERRNO_TIMEDOUT       = 73;
const WASI_ERRNO_TXTBSY         = 74;
const WASI_ERRNO_XDEV           = 75;
const WASI_ERRNO_NOTCAPABLE     = 76;

const WASI_FILETYPE_UNKNOWN           = 0;
const WASI_FILETYPE_BLOCK_DEVICE      = 1;
const WASI_FILETYPE_CHARACTER_DEVICE  = 2;
const WASI_FILETYPE_DIRECTORY         = 3;
const WASI_FILETYPE_REGULAR_FILE      = 4;
const WASI_FILETYPE_SOCKET_DGRAM      = 5;
const WASI_FILETYPE_SOCKET_STREAM     = 6;
const WASI_FILETYPE_SYMBOLIC_LINK     = 7;

const WASI_FDFLAGS_APPEND    = 1 << 0;
const WASI_FDFLAGS_DSYNC     = 1 << 1;
const WASI_FDFLAGS_NONBLOCK  = 1 << 2;
const WASI_FDFLAGS_RSYNC     = 1 << 3;
const WASI_FDFLAGS_SYNC      = 1 << 4;

const WASI_RIGHTS_FD_DATASYNC              = 1n <<  0n;
const WASI_RIGHTS_FD_READ                  = 1n <<  1n;
const WASI_RIGHTS_FD_SEEK                  = 1n <<  2n;
const WASI_RIGHTS_FD_FDSTAT_SET_FLAGS      = 1n <<  3n;

const WASI_RIGHTS_FD_SYNC                  = 1n <<  4n;
const WASI_RIGHTS_FD_TELL                  = 1n <<  5n;
const WASI_RIGHTS_FD_WRITE                 = 1n <<  6n;
const WASI_RIGHTS_FD_ADVISE                = 1n <<  7n;

const WASI_RIGHTS_FD_ALLOCATE              = 1n <<  8n;
const WASI_RIGHTS_PATH_CREATE_DIRECTORY    = 1n <<  9n;
const WASI_RIGHTS_PATH_CREATE_FILE         = 1n << 10n;
const WASI_RIGHTS_PATH_LINK_SOURCE         = 1n << 11n;

const WASI_RIGHTS_PATH_LINK_TARGET         = 1n << 12n;
const WASI_RIGHTS_PATH_OPEN                = 1n << 13n;
const WASI_RIGHTS_FD_READDIR               = 1n << 14n;
const WASI_RIGHTS_PATH_READLINK            = 1n << 15n;

const WASI_RIGHTS_PATH_RENAME_SOURCE       = 1n << 16n;
const WASI_RIGHTS_PATH_RENAME_TARGET       = 1n << 17n;
const WASI_RIGHTS_PATH_FILESTAT_GET        = 1n << 18n;
const WASI_RIGHTS_PATH_FILESTAT_SET_SIZE   = 1n << 19n;
const WASI_RIGHTS_PATH_FILESTAT_SET_TIMES  = 1n << 20n;
const WASI_RIGHTS_FD_FILESTAT_GET          = 1n << 21n;
const WASI_RIGHTS_FD_FILESTAT_SET_SIZE     = 1n << 22n;
const WASI_RIGHTS_FD_FILESTAT_SET_TIMES    = 1n << 23n;
const WASI_RIGHTS_PATH_SYMLINK             = 1n << 24n;
const WASI_RIGHTS_PATH_REMOVE_DIRECTORY    = 1n << 25n;
const WASI_RIGHTS_PATH_UNLINK_FILE         = 1n << 26n;
const WASI_RIGHTS_POLL_FD_READWRITE        = 1n << 27n;
const WASI_RIGHTS_SOCK_SHUTDOWN            = 1n << 28n;

const WASI_OFLAGS_CREAT      = 1 << 0;
const WASI_OFLAGS_DIRECTORY  = 1 << 1;
const WASI_OFLAGS_EXCL       = 1 << 2;
const WASI_OFLAGS_TRUNC      = 1 << 3;


// fds
const STDIN        = 0;
const STDOUT       = 1;
const STDERR       = 2;
const DSAVE_DAT    = 3;
const DSAVE_DAT_RD = 4;
const DSAVE_DAT_WR = 5;

async function main() {
    const screen = document.getElementById("screen")
    const input = document.getElementById("input")
    const game = document.getElementById("game")
    screen.onclick = () => input.focus();
    input.focus(); // the only thing we do is type!

    let dungeo = await WebAssembly.instantiateStreaming(fetch("/dungeo.wasm"), {
        env : {},
        wasi_snapshot_preview1: {
            clock_time_get: () => {
                console.log("clock_time_get?")
            },
            fd_fdstat_get: (fd, out_stat) => {
                console.log(`fd_fdstat_get ${fd}`)
                if (fd == DSAVE_DAT || fd == DSAVE_DAT_WR || fd == DSAVE_DAT_RD) {
                    memcpy(out_stat, wasi_struct(wasi_u8(WASI_FILETYPE_REGULAR_FILE),  // fs_filetype
                                                 wasi_u16(0),                          // fs_flags
                                                 wasi_u64(WASI_RIGHTS_FD_READ |        // fs_rights_base
                                                          WASI_RIGHTS_FD_SEEK |
                                                          WASI_RIGHTS_FD_WRITE |
                                                          WASI_RIGHTS_PATH_CREATE_FILE |
                                                          WASI_RIGHTS_PATH_OPEN),
                                                 wasi_u64(WASI_RIGHTS_FD_READ |        // fs_rights_inheriting
                                                          WASI_RIGHTS_FD_SEEK |
                                                          WASI_RIGHTS_FD_WRITE |
                                                          WASI_RIGHTS_PATH_CREATE_FILE |
                                                          WASI_RIGHTS_PATH_OPEN)));
                    return WASI_ERRNO_SUCCESS;
                }
                return WASI_ERRNO_BADF;
            },
            fd_fdstat_set_flags: (fd) => {
                console.log(`fd_fdstat_set_flags ${fd}`)
            },

            // This gets called repeatedly with incrementing fds until you return WASI_ERRNO_BADF. You are
            // expected to return the length of the dirname (but not the dirname itself because why _not_ make
            // things as overcomplicated as possible??)
            fd_prestat_get: (fd, out_prestat) => {
                // console.log("fd_prestat_get")
                if (fd == DSAVE_DAT) {
                    memcpy(out_prestat, wasi_variant(0, wasi_u32("dsave.dat".length)));
                    return WASI_ERRNO_SUCCESS;
                }
                return WASI_ERRNO_BADF;
            },
            // Now that we're returned the length of the dirname, the wasi c lib has malloced space for it,
            // so they call here to actually get it.
            fd_prestat_dir_name: (fd, out_prefix, out_prefix_len) => {
                if (fd == DSAVE_DAT) {
                    memcpy(out_prefix, "dsave.dat")
                    return WASI_ERRNO_SUCCESS;
                }
                // console.log("fd_prestat_dir_name")
                return WASI_ERRNO_BADF;
            },
            path_open: (fd, dirflags, path, path_len, oflags, fs_rights_base, fs_rights_inheriting, fdflags, newfd_ptr) => {
                //console.log(`path_open(${fd}, ${dirflags}, ${path}, ${path_len}, ${oflags}, ${fs_rights_base}, ${fs_rights_inheriting}, ${fdflags}, ${newfd_ptr})`)
                if (fd == DSAVE_DAT) {
                    let newfd;
                    if (fs_rights_base & WASI_RIGHTS_FD_WRITE)
                        newfd = open("dsave.dat", "write", (data) => {
                            localStorage.setItem("dsave.dat", base64encode(data));
                            console.log(data);
                        });
                    else {
                        let data;
                        try { data = base64decode(localStorage.getItem("dsave.dat")) } catch {};
                        if (!data)
                            return WASI_ERRNO_NFILE;
                        newfd = open("dsave.dat", "read", data);
                    }

                    memcpy(newfd_ptr, wasi_u32(newfd));
                    return WASI_ERRNO_SUCCESS;
                }
                return WASI_ERRNO_BADF;
            },
            fd_close: (fd) => {
                console.log(`fd_close(${fd})`)
                if (validfd(fd)) {
                    close(fd);
                    return WASI_ERRNO_SUCCESS;
                }

                return WASI_ERRNO_BADF;
            },
            fd_read: (fd, iov, iovcnt, read_ptr) => {
                //console.log(`fd_read(${fd}, ${iov}, ${iovcnt}, ${read_ptr})`)

                if (!validfd(fd))
                    return WASI_ERRNO_BADF;

                let total = 0;
                for (let iovp = u32ptr(iov), i=0; i < iovcnt; i++) {
                    let buf = iovp.deref_pp(), len = iovp.deref_pp();
                    let d;
                    memcpy(buf, d=read(fd, len));
                    //console.log(`fd: ${fd}, buf: ${buf}, len: ${len}, data: ${d}`);
                    total += len;
                }
                mem().setUint32(read_ptr, total, true);
                return WASI_ERRNO_SUCCESS;
            },
            fd_seek: (fd, offset, whence, new_offset_ptr) => {
                console.log(`fd_seek(${fd}, ${offset}, ${whence}, ${new_offset_ptr})`)
                return WASI_ERRNO_SUCCESS;
            },
            fd_write: (fd, iov, iovcnt, written_ptr) => {
                //console.log("fd_write"); debugger;

                let total = 0;
                for (let iovp = u32ptr(iov), i=0; i < iovcnt; i++) {
                    let buf = iovp.deref_pp(), len = iovp.deref_pp();
                    total += len;
                }

                let u8 = new Uint8Array(total);
                for (let iovp = u32ptr(iov), u8p = 0, i = 0; i < iovcnt; i++) {
                    let buf = iovp.deref_pp(), len = iovp.deref_pp();
                    u8.set(new Uint8Array(mem().buffer).subarray(buf, buf+len), u8p);
                    u8p += len;
                }
                mem().setUint32(written_ptr, total, true);

                if (fd == STDOUT || fd == STDERR) {
                    const textDecoder = new TextDecoder()
                    const text = textDecoder.decode(u8);

                    if (fd == STDERR)
                        console.log(text);
                    else
                        add_output(text);
                    return WASI_ERRNO_SUCCESS;
                }

                if (validfd(fd)) {
                    write(fd, u8);
                    return WASI_ERRNO_SUCCESS;
                }

                return WASI_ERRNO_BADF;
            },
            proc_exit: () => {
                console.log("proc_exit"); throw "done";
            },
        },
    });
    const mem = () => new DataView(dungeo.instance.exports.memory.buffer);
    const u32ptr = (ptr) => {
        return {
            deref_pp: () => { // *p++
                let v = mem().getUint32(ptr, true);
                ptr += 4;
                return v;
            }
        }
    }
    const cstr = (ptr) => {
        const s=new Uint8Array(mem().buffer).subarray(ptr);
        const textDecoder = new TextDecoder();
        return textDecoder.decode(s.subarray(0, s.findIndex((c) => c == 0)));
    }

    const strdup = (s) => {
        const textEncoder = new TextEncoder();
        const buf = textEncoder.encode(s+"\0");
        const ptr = dungeo.instance.exports.malloc(buf.length);
        memcpy(ptr, buf);
        return ptr;
    }

    const memcpy = (ptr, src) => {
        if (src.constructor == String) {
            const textEncoder = new TextEncoder();
            src = textEncoder.encode(src);
        }
        (new Uint8Array(mem().buffer)).set(src, ptr)
    }

    const free = (ptr) => {
        dungeo.instance.exports.free(ptr);
    }

    const current_room = (ptr) => {
        return mem().getUint32(dungeo.instance.exports.play_+4, true);
    }
    window.current_room = current_room;

    let game_output;
    const game_move = (input_line) => {
        game_output = ""; // will accumulate as game prints to us
        const p = strdup(input_line.toUpperCase())
        try {
            const promtp_ptr = dungeo.instance.exports.game_move(p);
            append_screen_html(game_output);
            return cstr(promtp_ptr);
        } finally {
            free(p);
        }
    }

    const add_output = (text) => {
        game_output += text
    }

    const append_screen_node = (node) => {
        screen.insertBefore(node, input);
        screen.scrollTo(0, screen.scrollTopMax)
        screen.scrollTo(0, 10000000000000) // stupid ios
    }

    const append_screen_html = (html) => {
        const span = document.createElement('span');
        span.innerHTML = html;
        append_screen_node(span);
    }
    const append_screen = (text) => {
        append_screen_node(document.createTextNode(unwrap(text)), input);
    }

    let last_prompt;
    const set_prompt = (prompt) => {
        if (prompt != undefined)
            last_prompt = prompt;
        append_screen(last_prompt);
        input.focus();
    }

    set_prompt(game_move("")); // First one just inits and returns the first prompt.

    window.game_move = game_move;

    input.onkeypress = (e) => {
        if (e.key != "Enter")
            return;
        if (input.value == "")
            return;
        let line = input.value;
        handle_input_line(line);
    }

    const handle_input_line = (line, line_to_send) => {
        input.value = "";
        append_screen(line+"\n");
        if (line.startsWith("/tp ")) {
            mem().setUint32(dungeo.instance.exports.play_+4, line.slice(4)-0, true);
            mem().setUint32(dungeo.instance.exports.advs_+4, line.slice(4)-0, true);
            line = "look";
        } else if (line.toLowerCase() == "/font") {
            game.classList.toggle("fancy");
            line = undefined
        }
        prompt = undefined;
        if (line != undefined) {
          try {
            prompt = game_move(line_to_send || line);
            update_map();
          } catch(e) {
            if (e == 'done') { // as thrown from proc_exit()
                append_screen("END OF LINE\n");
                input.onkeypress = () => {};
                return;
            }
            throw e;
          }
        }
        set_prompt(prompt);
    };

    window.dungeo = dungeo; // for debugging

    const map = Map.create("map");

    const room_on_map = [
          /*  0*/ undefined,
        { /*  1*/ name: "East-West Passage",               lat:-169.94972001997834, lng:80.38034416775453,  },
        { /*  2*/ name: "West of House",                   lat:-144.41936910281882, lng:181.31759426880632, },
        { /*  3*/ name: "North of House",                  lat:-130.77792000422525, lng:194.2959173695516,  },
        { /*  4*/ name: "South of House",                  lat:-151.52429050833632, lng:194.7695787965861,  },
        { /*  5*/ name: "Behind House",                    lat:-141.71949896872218, lng:209.45308303465558, },
        { /*  6*/ name: "Kitchen",                         lat:-141.3616913118226,  lng:201.95552953791616, },
        { /*  7*/ name: "Attic",                           lat:-134.75667577058962, lng:197.7914980010519,  },
        { /*  8*/ name: "Living Room",                     lat:-145.09496096556296, lng:193.69926011137497, },
        { /*  9*/ name: "Cellar",                          lat:-173.92847600706813, lng:61.102324087450405, },
        { /* 10*/ name: "Troll Room",                      lat:-174.49686971950953, lng:76.49632046607164,  },
        { /* 11*/ name: "Maze",                            lat:-69.20907588857135,  lng:153.5666113336661,  },
        { /* 12*/ name: "Maze",                            lat:-80.55247214416706,  lng:149.04361156086526, },
        { /* 13*/ name: "Maze",                            lat:-80.40888484979243,  lng:156.00759533803478, },
        { /* 14*/ name: "Maze",                            lat:-73.94745660293411,  lng:162.4690235848931,  },
        { /* 15*/ name: "Dead End",                        lat:-70.07059965481912,  lng:170.43811842268502, },
        { /* 16*/ name: "Maze",                            lat:-85.93699568321566,  lng:166.70484876894466, },
        { /* 17*/ name: "Dead End",                        lat:-85.85048344466142,  lng:170.38145897854994, },
        { /* 18*/ name: "Maze",                            lat:-95.00456957564838,  lng:154.95971027139174, },
        { /* 19*/ name: "Maze",                            lat:-95.01648226312055,  lng:166.72882231614375, },
        { /* 20*/ name: "Maze",                            lat:-98.23737996695515,  lng:172.98115315299913, },
        { /* 21*/ name: "Dead End",                        lat:-101.74247452701044, lng:176.20205085683372, },
        { /* 22*/ name: "Maze",                            lat:-101.60210912951285, lng:153.14538689407902, },
        { /* 23*/ name: "Maze",                            lat:-109.51915659415022, lng:155.78440271562482, },
        { /* 24*/ name: "Maze",                            lat:-118.34336574744394, lng:159.08317249255705, },
        { /* 25*/ name: "Grating room",                    lat:-110.83677392607282, lng:164.92890889341265, },
        { /* 26*/ name: "Maze",                            lat:-106.49399175433525, lng:140.9660353279929,  },
        { /* 27*/ name: "Dead End",                        lat:-103.25,             lng:141.125             },
        { /* 28*/ name: "Maze",                            lat:-107.04507926145104, lng:149.51674013945356, },
        { /* 29*/ name: "Maze",                            lat:-97.26040865424838,  lng:183.4405175883925,  },
        { /* 30*/ name: "Maze",                            lat:-107.41735006434394, lng:183.1327314850563,  },
        { /* 31*/ name: "Forest",                          lat:-144.56146753092918, lng:170.61284601782663, },
        { /* 32*/ name: "Forest",                          lat:-159.90809776684696, lng:195.2432402236206,  },
        { /* 33*/ name: "Forest",                          lat:-124.375,            lng:202.625,            },
        { /* 34*/ name: "Forest",                          lat:-161.51854661876425, lng:237.77803637131862, },
        { /* 35*/ name: "Forest",                          lat:-142.5,              lng:237.75,             },
        { /* 36*/ name: "Clearing",                        lat:-127.875,            lng:230.125,            },
        { /* 37*/ name: "Deep Ravine",                     lat:-160.19229462306765, lng:81.61186387804422,  },
        { /* 38*/ name: "Rocky Crawl",                     lat:-158.53447962844692, lng:64.74951707561605,  },
        { /* 39*/ name: "Reservoir South",                 lat:-145.09133249085065, lng:93.37826292347452,  },
        { /* 40*/ name: "Reservoir",                       lat:-138.34985344963496, lng:93.87476151754986,  },
        { /* 41*/ name: "Reservoir North",                 lat:-132.80970358958282, lng:93.87476151754986,  },
        { /* 42*/ name: "Stream View",                     lat:-146.297077636204,   lng:75.0241423775405,   },
        { /* 43*/ name: "Stream",                                                                           },
        { /* 44*/ name: "Egyptian Room",                   lat:-155.00523701931135, lng:54.25853154089983,  },
        { /* 45*/ name: "Glacier Room",                    lat:-146.83296436747213, lng:63.36860597245832,  },
        { /* 46*/ name: "Ruby Room",                       lat:-144.3211777407853,  lng:55.50180149688486   },
        { /* 47*/ name: "Atlantis Room",                   lat:-126.80787457452637, lng:85.8723228308079,   },
        { /* 48*/ name: "Deep Canyon",                     lat:-147.77076614719138, lng:105.43571437700781, },
        { /* 49*/ name: "Loud Room",                       lat:-156.87666463382615, lng:104.20551394758984, },
        { /* 50*/ name: "Mirror Room",                     lat:-120.80604555946991, lng:77.86988414406595,  },
        { /* 51*/ name: "Mirror Room",                     lat:-169.06195106777707, lng:113.64261881531552, },
        { /* 52*/ name: "Cave",                            lat:-124.03779964450031, lng:96.33705034423969,  },
        { /* 53*/ name: "Cave",                            lat:-168.81454333450714, lng:120.4050968580266,  },
        { /* 54*/ name: "Steep Crawlway",                  lat:-113.88085823440474, lng:77.56209804072972,  },
        { /* 55*/ name: "Narrow Crawlway",                 lat:-164.78516986495504, lng:119.50274107279667, },
        { /* 56*/ name: "Cold Passage",                    lat:-121.57551081781047, lng:66.32790526895737,  },
        { /* 57*/ name: "Winding Passage",                 lat:-168.81454333450714, lng:103.7463094845188,  },
        { /* 58*/ name: "Slide Room",                      lat:-121.42161776614236, lng:57.248215220538604, },
        { /* 59*/ name: "Mine Entrance",                   lat:-115.57368180275401, lng:56.78653606553426,  },
        { /* 60*/ name: "Squeaky Room",                    lat:-110.34131804603811, lng:54.47814029051254,  },
        { /* 61*/ name: "Shaft Room",                      lat:-107.57124311601206, lng:67.8668357856385,   },
        { /* 62*/ name: "Wooden Tunnel",                   lat:-96.02926424090346,  lng:67.7129427339704,   },
        { /* 63*/ name: "Smelly Room",                     lat:-95.87537118923535,  lng:59.09493184055598,  },
        { /* 64*/ name: "Gas Room",                        lat:-97.10651560258026,  lng:49.55356263713288,  },
        { /* 65*/ name: "Ladder Top",                      lat:-71.09858987066892,  lng:79.87049381575144,  },
        { /* 66*/ name: "Coal Mine",                       lat:-86.25,              lng:67.25,              },
        { /* 67*/ name: "Coal Mine",                       lat:-83.25614095244995,  lng:55.093712497185,    },
        { /* 68*/ name: "Coal Mine",                       lat:-78.3315632990703,   lng:48.47631127545608,  },
        { /* 69*/ name: "Coal Mine",                       lat:-79.4088146607471,   lng:66.17401221728925,  },
        { /* 70*/ name: "Coal Mine",                       lat:-72.48362733568194,  lng:53.70867503217197,  },
        { /* 71*/ name: "Coal Mine",                       lat:-71.56026902567325,  lng:65.86622611395302,  },
        { /* 72*/ name: "Coal Mine",                       lat:-65.09676085561244,  lng:60.17218320223278,  },
        { /* 73*/ name: "Ladder Bottom",                   lat:-78.3315632990703,   lng:80.4860660224239,   },
        { /* 74*/ name: "Dead End",                        lat:-70.79080376733268,  lng:90.79690048418757,  },
        { /* 75*/ name: "Timber Room",                     lat:-97.26040865424838,  lng:96.95262255091215,  },
        { /* 76*/ name: "Lower Shaft",                     lat:-107.09484865250029, lng:86.44321043379611   },
        { /* 77*/ name: "Machine Room",                    lat:-114.24713620072123, lng:99.6109981053552    },
        { /* 78*/ name: "Bat Room",                        lat:-110.92737629863963, lng:47.81809607774027   },
        { /* 79*/ name: "Dome Room",                       lat:-163.22372775608844, lng:64.5126863620988,   },
        { /* 80*/ name: "Torch Room",                      lat:-167.46460352129577, lng:64.64133695922017,  },
        { /* 81*/ name: "North-South Crawlway",            lat:-181.50705883962013, lng:70.954481769768,    },
        { /* 82*/ name: "West of Chasm",                   lat:-180.46500370014422, lng:64.1337572204712,   },
        { /* 83*/ name: "Round Room",                      lat:-169.60815044636834, lng:90.96677263276786,  },
        { /* 84*/ name: "North-South Passage",             lat:-162.37113718742634, lng:98.52157682317585,  },
        { /* 85*/ name: "Chasm",                           lat:-157.25559377545375, lng:93.69023026742396,  },
        { /* 86*/ name: "Damp Cave",                       lat:-156.34495384748172, lng:118.29699592744333, },
        { /* 87*/ name: "Ancient Chasm",                   lat:-152.61371179051565, lng:109.69998650119003, },
        { /* 88*/ name: "Dead End",                        lat:-149.77174322830868, lng:111.54726606662457, },
        { /* 89*/ name: "Dead End",                        lat:-152.89790864673637, lng:105.57913208598988, },
        { /* 90*/ name: "Engravings Cave",                 lat:-184.25,             lng:84.75,              },
        { /* 91*/ name: "Riddle Room",                     lat:-188.625,            lng:92.125,             },
        { /* 92*/ name: "Pearl Room",                      lat:-188.625,            lng:97.875,             },
        { /* 93*/ name: "Entrance to Hades",               lat:-168.48466635681393, lng:126.75522867862115, },
        { /* 94*/ name: "Land of the Living Dead",         lat:-168.60336282524057, lng:132.63196598886626, },
        { /* 95*/ name: "Grail Room",                      lat:-163.04353798833355, lng:106.105572791093,   },
        { /* 96*/ name: "Temple",                          lat:-175.74195986606483, lng:113.23027259319898, },
        { /* 97*/ name: "Altar",                           lat:-175.0822059106784,  lng:120.24015836917998, },
        { /* 98*/ name: "Dam",                             lat:-134.50756954830476, lng:111.86635515222558, },
        { /* 99*/ name: "Dam Lobby",                       lat:-125.93338184801442, lng:110.79458168968928, },
        { /*100*/ name: "Maintenance Room",                lat:-121.24437294941814, lng:120.17259948688184, },
        { /*101*/ name: "Cyclops Room",                    lat:-110.75619526049981, lng:198.25606359362735, },
        { /*102*/ name: "Strange Passage",                 lat:-104.48853268432856, lng:197.5963096382409,  },
        { /*103*/ name: "Treasure Room",                   lat:-96.90136219738442,  lng:198.8333483045905,  },
        { /*104*/ name: "Studio",                          lat:-195.46468523005643, lng:73.68442554937013,  },
        { /*105*/ name: "Gallery",                         lat:-191.84744979399642, lng:64.44037943499461,  },
        { /*106*/ name: "Dam Base",                        lat:-137.05303152182844, lng:122.5840897775885,  },
        { /*107*/ name: "Frigid River",                    lat:-133.28832556750808, lng:121.54152217705251  },
        { /*108*/ name: "Frigid River",                    lat:-143.14048324982568, lng:146.55084552447408  },
        { /*109*/ name: "Frigid River",                    lat:-151.76112122185356, lng:147.11923923691546  },
        { /*110*/ name: "White Cliffs Beach",              lat:-151.76112122185356, lng:151.76112122185356  },
        { /*111*/ name: "White Cliffs Beach",              lat:-159.15023948359175, lng:152.51897950510877  },
        { /*112*/ name: "Frigid River",                    lat:-160.62291137944555, lng:147.62687303774578  },
        { /*113*/ name: "Frigid River",                    lat:-167.51258674074265, lng:149.73793927307543  },
        { /*114*/ name: "Moby Lossage",                                                                     },
        { /*115*/ name: "Shore",                           lat:-168.06256760056743, lng:144.85337193608936  },
        { /*116*/ name: "Sandy Beach",                     lat:-160.71493279221508, lng:143.22056420089993  },
        { /*117*/ name: "Rocky Shore",                     lat:-150.3162281207151,  lng:142.54587051732696  },
        { /*118*/ name: "Small Cave",                      lat:-142.3350170989163,  lng:134.7176996700752   },
        { /*119*/ name: "Barrel",                          lat:-174.86653899693704, lng:148.10569535423397  },
        { /*120*/ name: "Aragain Falls",                   lat:-175.7600897807461,  lng:147.41921266281557  },
        { /*121*/ name: "Rainbow room",                    lat:-172.86037028620964, lng:153.3159527243591   },
        { /*122*/ name: "End of rainbow",                  lat:-174.40213743410263, lng:160.57122376469525  },
        { /*123*/ name: "Canyon Bottom",                   lat:-186.29103925266855, lng:163.50792461230915  },
        { /*124*/ name: "Rocky Ledge",                     lat:-185.43844868400646, lng:172.46012558326117  },
        { /*125*/ name: "Canyon View",                     lat:-148.82442037423968, lng:250.94582404287772  },
        { /*126*/ name: "Volcano Bottom",                  lat:-147.86735525098746, lng:36.86375225721773   },
        { /*127*/ name: "Volcano Core",                    lat:-143.33154680770562, lng:37.19362923491095   },
        { /*128*/ name: "Volcano near small ledge",        lat:-138.46586138673058, lng:36.53387527952451   },
        { /*129*/ name: "Volcano near viewing ledge",      lat:-134.50733765441188, lng:36.781283012794425  },
        { /*130*/ name: "Volcano near wide ledge",         lat:-129.72412147786017, lng:37.35856772375757   },
        { /*131*/ name: "Narrow Ledge",                    lat:-138.96067685327043, lng:32.080536080665986  },
        { /*132*/ name: "Volcano View",                    lat:-134.6415412311218,  lng:41.665193356098385  },
        { /*133*/ name: "Wide ledge",                      lat:-130.3838754332466,  lng:31.915597591819377  },
        { /*134*/ name: "Library",                         lat:-144.15623925193867, lng:27.379789148537554  },
        { /*135*/ name: "Dusty Room",                      lat:-134.75474538768182, lng:29.68892799239012   },
        { /*136*/ name: "Lava Room",                       lat:-147.207601295601,   lng:48.409446476480554  },
        { /*137*/ name: "Tomb of the Unknown Implementer", lat:-163.24449551255913, lng:132.3640226232322   },
        { /*138*/ name: "Low Room",                        lat:-182.51715927838382, lng:109.6487993135316   },
        { /*139*/ name: "Machine Room",                    lat:-183.2866245367244,  lng:120.80604555946991  },
        { /*140*/ name: "Dingy Closet",                    lat:-187.51868345759755, lng:121.3446712403083   },
        { /*141*/ name: "Cage",                                                                             },
        { /*142*/ name: "Top of Well",                     lat:-191.59684932680258, lng:111.72635551105114  },
        { /*143*/ name: "Bottom of Well",                  lat:-188.625,            lng:103.5               },
        { /*144*/ name: "Tea Room",                        lat:-190.75043754262796, lng:116.18925400942646  },
        { /*145*/ name: "Posts Room",                      lat:-191.6299427455593,  lng:118.39487660827287  },
        { /*146*/ name: "Pool Room",                       lat:-191.41230510473528, lng:124.10786467990368  },
        { /*147*/ name: "Up a Tree",                       lat:-119.75,             lng:210.375             },
        { /*148*/ name: "Bank Entrance",                   lat:-187.56035594385125, lng:41.665193356098385  },
        { /*149*/ name: "West Teller's Room",              lat:-184.7469506046935,  lng:34.16277911834434   },
        { /*150*/ name: "East Teller's Room",              lat:-184.88092228751051, lng:49.43555095948651   },
        { /*151*/ name: "Viewing Room",                    lat:-184.7469506046935,  lng:38.44987296848951   },
        { /*152*/ name: "Viewing Room",                    lat:-184.61297892187645, lng:45.41640047497541   },
        { /*153*/ name: "Small Room",                      lat:-173.17061772381294, lng:39.50336301467724   },
        { /*154*/ name: "Vault",                           lat:-172.17592872704049, lng:46.087256850456775  },
        { /*155*/ name: "Safety Depository",               lat:-179.38808329201203, lng:41.12930662483024   },
        { /*156*/ name: "Chairman's Office",               lat:-183.59441064006063, lng:41.93585657956121   },
        { /*157*/ name: "Crypt",                           lat:-160.38175919388146, lng:132.0568058572184   },
        { /*158*/ name: "Top of Stairs",                   lat:-137.375,            lng:10.25               },
        { /*159*/ name: "Stone Room",                      lat:-131.0625,           lng:10.625              },
        { /*160*/ name: "Small Room",                      lat:-126.375,            lng:10.625              },
        { /*161*/ name: "Hallway",                         lat:-124.15170243636639, lng:11.196395898441684  },
        { /*162*/ name: "Hallway",                         lat:-115.6175622711026,  lng:10.181847894094783  },
        { /*163*/ name: "Hallway",                         lat:-109.99075159278706, lng:10.315819576911819  },
        { /*164*/ name: "Hallway",                                                                          },
        { /*165*/ name: "Hallway",                         lat:-104.36394091447153, lng:10.71773462536293   },
        { /*166*/ name: "Dungeon Entrance",                lat:-100.40630508537488, lng:11.875571196956043  },
        { /*167*/ name: "Narrow Room",                     lat:-120.89991232456643, lng:14.926933240618364  },
        { /*168*/ name: "Narrow Room",                     lat:-120.6525045912965,  lng:7.1748242648276115  },
        { /*169*/ name: "Narrow Room",                     lat:-115.53941143705154, lng:14.761994751771754  },
        { /*170*/ name: "Narrow Room",                     lat:-115.62188068147485, lng:6.680008798287776   },
        { /*171*/ name: "Narrow Room",                     lat:-109.76656432742013, lng:15.174340973888283  },
        { /*172*/ name: "Narrow Room",                     lat:-110.01397206069005, lng:6.844947287134389   },
        { /*173*/ name: "Narrow Room",                                                                      },
        { /*174*/ name: "Narrow Room",                                                                      },
        { /*175*/ name: "Narrow Room",                                                                      },
        { /*176*/ name: "Narrow Room",                                                                      },
        { /*177*/ name: "Inside Mirror",                   lat:-121.23597433781387, lng:11.196395898441684  },
        { /*178*/ name: "Narrow Corridor",                 lat:-96.98383144180772,  lng:11.875571196956047  },
        { /*179*/ name: "South Corridor",                  lat:-93.02530770948904,  lng:11.875571196956047  },
        { /*180*/ name: "West Corridor",                   lat:-89.47913019928689,  lng:7.42223199809753    },
        { /*181*/ name: "East Corridor",                   lat:-88.90184548832374,  lng:16.741256617931093  },
        { /*182*/ name: "North Corridor",                  lat:-84.53097553388854,  lng:11.875571196956047  },
        { /*183*/ name: "Parapet",                         lat:-81.52983428425712,  lng:11.980722846254471  },
        { /*184*/ name: "Prison Cell",                     lat:-89.23781285329966,  lng:11.936267961269381  },
        { /*185*/ name: "Prison Cell",                     lat:-89.23781285329966,  lng:11.936267961269381  },
        { /*186*/ name: "Prison Cell",                     lat:-89.23781285329966,  lng:11.936267961269381  },
        { /*187*/ name: "Nirvana",                         lat:-63.50257765527535,  lng:11.521564722265149  },
        { /*188*/ name: "Small Square Room",               lat:-71.74824264827612,  lng:206.0081725694181   },
        { /*189*/ name: "Side Room",                       lat:-93.60259242045218,  lng:212.68818136770588  },
        { /*190*/ name: "Room in a Puzzle",                lat:-71.91318113712273,  lng:221.84226749869282  },
    ];
    const update_map = () => {
        marker.remove();
        if (room_on_map[current_room()].lat) {
            marker.setLatLng(room_on_map[current_room()]);
            marker.addTo(map);
            map.setView(marker.getLatLng());
        }
    }

    let marker = L.marker(room_on_map[current_room()]).bindPopup('You are here').addTo(map);

    map.setView(marker.getLatLng(), 3)

    map.on('click', (event) => {
        if (event.originalEvent.altKey) {
            const pad = (w, s) => s + " ".repeat(Math.max(w - s.length, 0));
            let room = Object.assign(room_on_map[current_room()], event.latlng);
            console.log("        { /*%3d*/ name: %s lat:%s  lng:%s },\n",
                        current_room(), pad(34,`"${room.name}",`), pad(19,`${room.lat},`), pad(19, `${room.lng}`));
        }
        input.focus();
    });
}

function wasi_variant(tag, data) {
    const v = new Uint8Array(4+data.length);
    v[0] = tag;
    v.set(data, 4);
    return v;
}

function wasi_struct(...members) {
    let offset = 0;
    for (let m of members) {
        offset = Math.floor((offset + m.length - 1) / m.length) * m.length; // align
        offset += m.length;
    }
    const struct = new Uint8Array(offset);
    offset = 0;
    for (let m of members) {
        offset = Math.floor((offset + m.length - 1) / m.length) * m.length; // align
        struct.set(m, offset);
        offset += m.length;
    }
    return struct;
}

function wasi_u8(n)  {return new Uint8Array(new Uint8Array([n]).buffer);}
function wasi_u16(n) {return new Uint8Array(new Uint16Array([n]).buffer);}
function wasi_u32(n) {return new Uint8Array(new Uint32Array([n]).buffer);}
function wasi_u64(n) {return new Uint8Array(new Uint32Array([Number(n&0xffffffffn), Number(n>>32n)]).buffer);}


let files = [ undefined, undefined, undefined ];

function* file_writer_iterate(callback) {
    const chunks = [];
    let chunk;
    while ((chunk = yield) != undefined)
        chunks.push(chunk);
    const total = chunks.reduce((memo,chunk) => memo+chunk.length, 0);
    let u8 = new Uint8Array(total);
    let u8p = 0;
    for (let c of chunks) {
        u8.set(c, u8p);
        u8p += c.length;
    }
    if (callback)
        callback(u8);
    return u8;
}

function* file_reader_iterate(data) {
    let pos = 0, count = 0;

    while ((count = yield data.subarray(pos-count, pos)) != undefined)
        pos += count;
}

function open(name, direction, data_or_callback) {
    const data = data_or_callback, callback = data_or_callback;
    let fd = files.findIndex((e) => e && !e.iterator);
    if (fd == -1) fd = files.length;
    if (direction == "write")
        files[fd] = { name: name, iterator: file_writer_iterate(callback) };
    else
        files[fd] = { name: name, iterator: file_reader_iterate(data) };
    files[fd].iterator.next(); // Kick function off
    return fd;
}

function validfd(fd) { return files[fd] && files[fd].iterator; }

function write(fd, chunk) {
    files[fd].iterator.next(chunk);
}

function read(fd, count) {
    return files[fd].iterator.next(count).value;
}

function close(fd) {
    const f = files[fd];
    files[fd] = {};
    return f.iterator.next().value;
}

function base64encode(a) {
    let s='';
    for (let c of a)
        s += String.fromCharCode(c)
    return btoa(s);
}

function base64decode(s) {
    let bs = atob(s);
    let a = new Uint8Array(bs.length);
    for (let i=0; i<bs.length; i++)
        a[i] = bs.charCodeAt(i);
    return a;
}

function unwrap(text) {
    // try to figure out if a newline was for word-wrapping or if they meant it.
    const lines = text.split("\n");
    for (let i=0; i<lines.length-1; i++) {
        const next_word = (lines[i+1]||"").split(" ")[0];
        if (next_word != "" && lines[i].length + next_word.length >= 60 && // lines[i][lines[i].length-1] != '.' &&
            next_word[0] != ' ' && next_word[0].toUpperCase() != next_word[0])
            lines[i] += " ";
        else
            lines[i] += "\n";
    }
    return lines.join("");
}

main();
