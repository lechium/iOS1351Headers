//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSDataPromise.h"

#import "NSSecureCoding-Protocol.h"

@class IXOwnedDataPromiseSeed, NSString, NSURL;

@interface IXSOwnedDataPromise : IXSDataPromise <NSSecureCoding>
{
    NSString *_relativeStagedPath;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000208c4
- (void).cxx_destruct;	// IMP=0x00000001000214bc
@property(retain, nonatomic) NSURL *stagedPath; // @dynamic stagedPath;
- (void)_internal_setStagedPath:(id)arg1;	// IMP=0x00000001000211e4
@property(retain, nonatomic) NSString *relativeStagedPath; // @synthesize relativeStagedPath=_relativeStagedPath;
@property(readonly, nonatomic) NSURL *stagingBaseDir; // @dynamic stagingBaseDir;
- (void)decommission;	// IMP=0x0000000100020d7c
- (void)setComplete:(_Bool)arg1;	// IMP=0x0000000100020ae0
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x00000001000209c0
- (void)reset;	// IMP=0x00000001000208cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000207f8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002066c
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000203d0
- (_Bool)_onQueue_initWithSeedWithError:(id *)arg1;	// IMP=0x000000010001ff9c
- (oneway void)_remote_getStagedPath:(CDUnknownBlockType)arg1;	// IMP=0x00000001000217fc
- (oneway void)_remote_setStagedPath:(id)arg1;	// IMP=0x00000001000214d0

// Remaining properties
@property(readonly, copy, nonatomic) IXOwnedDataPromiseSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXOwnedDataPromiseSeed *seed; // @dynamic seed;

@end

