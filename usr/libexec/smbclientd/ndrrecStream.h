//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class transportCtx;

@interface ndrrecStream : NSObject
{
    _Bool _out_first_frag_sent;	// 8 = 0x8
    _Bool _in_lastfrag;	// 9 = 0x9
    unsigned short _opnum;	// 10 = 0xa
    unsigned short _context_id;	// 12 = 0xc
    unsigned int _send_size;	// 16 = 0x10
    unsigned int _recv_size;	// 20 = 0x14
    unsigned int _call_id_counter;	// 24 = 0x18
    unsigned int _assoc_group_id;	// 28 = 0x1c
    unsigned int _out_finger;	// 32 = 0x20
    unsigned int _in_len;	// 36 = 0x24
    unsigned int _in_finger;	// 40 = 0x28
    unsigned int _in_fbtbc;	// 44 = 0x2c
    struct ndr_fmt_label _in_ndr;	// 48 = 0x30
    transportCtx *_tctx;	// 56 = 0x38
    char *_out_base;	// 64 = 0x40
    char *_in_base;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010004e7c8
@property struct ndr_fmt_label in_ndr; // @synthesize in_ndr=_in_ndr;
@property _Bool in_lastfrag; // @synthesize in_lastfrag=_in_lastfrag;
@property unsigned int in_fbtbc; // @synthesize in_fbtbc=_in_fbtbc;
@property unsigned int in_finger; // @synthesize in_finger=_in_finger;
@property unsigned int in_len; // @synthesize in_len=_in_len;
@property char *in_base; // @synthesize in_base=_in_base;
@property _Bool out_first_frag_sent; // @synthesize out_first_frag_sent=_out_first_frag_sent;
@property unsigned int out_finger; // @synthesize out_finger=_out_finger;
@property char *out_base; // @synthesize out_base=_out_base;
@property unsigned short context_id; // @synthesize context_id=_context_id;
@property unsigned int assoc_group_id; // @synthesize assoc_group_id=_assoc_group_id;
@property unsigned int call_id_counter; // @synthesize call_id_counter=_call_id_counter;
@property unsigned short opnum; // @synthesize opnum=_opnum;
@property unsigned int recv_size; // @synthesize recv_size=_recv_size;
@property unsigned int send_size; // @synthesize send_size=_send_size;
@property(retain) transportCtx *tctx; // @synthesize tctx=_tctx;
- (void)dealloc;	// IMP=0x000000010004e5bc
- (id)init;	// IMP=0x000000010004e564

@end

