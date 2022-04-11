// Copyright © 2022 David Caldwell <david@porkrind.org>

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
    screen.onclick = () => input.focus();

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
                        append_screen(text);
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

    const game_move = (input) => {
        const p = strdup(input.toUpperCase())
        try {
            const promtp_ptr = dungeo.instance.exports.game_move(p);
            return cstr(promtp_ptr);
        } finally {
            free(p);
        }
    }

    const append_screen = (text) => {
        screen.insertBefore(document.createTextNode(unwrap(text)), input);
        screen.scrollTo(0, screen.scrollTopMax)
        screen.scrollTo(0, 10000000000000) // stupid ios
    }

    const set_prompt = (prompt) => {
        append_screen(prompt);
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
        input.value = "";
        append_screen(line+"\n");
        if (line.startsWith("/tp ")) {
            mem().setUint32(dungeo.instance.exports.play_+4, line.slice(4)-0, true);
            mem().setUint32(dungeo.instance.exports.advs_+4, line.slice(4)-0, true);
            line = "look";
        }
        try {
            prompt = game_move(line);
        } catch(e) {
            if (e == 'done') { // as thrown from proc_exit()
                append_screen("END OF LINE\n");
                input.onkeypress = () => {};
                return;
            }
            throw e;
        }
        set_prompt(prompt);
    };

    window.dungeo = dungeo; // for debugging
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
