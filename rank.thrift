namespace cpp idl.ecom_rec.thor

struct Req {
    1: i64 uid,
    2: optional i64 device_id,
    3: optional i64 channel_id,
    4: optional string ab_params,
}

struct Rsp {
    1: list<i64> items,
    2: i32 user_level,
}

service Serv {
    Rsp rank(1:Req req)
}