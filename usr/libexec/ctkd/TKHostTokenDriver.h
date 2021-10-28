//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSString, NSUUID, TKHostTokenDriverCache;
@protocol OS_os_transaction;

@interface TKHostTokenDriver : NSObject
{
    TKHostTokenDriverCache *_cache;	// 8 = 0x8
    NSObject<OS_os_transaction> *_alive;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    NSExtension *_extension;	// 32 = 0x20
    NSUUID *_requestIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000f7dc
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) __weak TKHostTokenDriverCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)dealloc;	// IMP=0x000000010000f6a0
- (void)releaseTokenWithTokenID:(id)arg1;	// IMP=0x000000010000f570
- (_Bool)configureWithError:(id *)arg1;	// IMP=0x000000010000f3b0
- (id)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 tokenID:(id *)arg3 error:(id *)arg4;	// IMP=0x000000010000eecc
- (id)acquireTokenWithTokenID:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000e9f4
- (id)context;	// IMP=0x000000010000e908
- (id)contextWithError:(id *)arg1;	// IMP=0x000000010000dcd0
@property(readonly, nonatomic) _Bool valid;
- (void)invalidate;	// IMP=0x000000010000dbe8
- (void)keepAlive:(_Bool)arg1;	// IMP=0x000000010000da64
@property(readonly, nonatomic) NSString *classID;
- (id)description;	// IMP=0x000000010000d8a0
- (id)initWithExtension:(id)arg1 cache:(id)arg2;	// IMP=0x000000010000d804

@end
