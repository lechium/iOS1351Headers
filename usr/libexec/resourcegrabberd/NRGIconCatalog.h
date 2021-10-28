//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSStream, NSString, NSURL, PBMessageStreamReader, PBMessageStreamWriter;

@interface NRGIconCatalog : NSObject
{
    NSStream *_stream;	// 8 = 0x8
    PBMessageStreamReader *_pbReader;	// 16 = 0x10
    PBMessageStreamWriter *_pbWriter;	// 24 = 0x18
    _Bool _readonly;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
    NSString *_path;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000066fc
@property(readonly, nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)remove;	// IMP=0x000000010000661c
- (void)close;	// IMP=0x000000010000660c
- (void)readIcons:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006560
- (id)readIcon;	// IMP=0x0000000100006420
- (void)writeIcon:(id)arg1;	// IMP=0x0000000100006308
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2;	// IMP=0x000000010000610c
- (id)init;	// IMP=0x0000000100005f98

@end
