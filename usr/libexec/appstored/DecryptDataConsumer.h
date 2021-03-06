//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AssetDataConsumer-Protocol.h"

@class ChunkedDigest, DigestVerifier, NSString;
@protocol AssetDataConsumer, OS_dispatch_queue;

@interface DecryptDataConsumer : NSObject <AssetDataConsumer>
{
    struct KBCryptOpaque_ *_session;	// 8 = 0x8
    void *_buffer;	// 16 = 0x10
    unsigned long long _capacity;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_consumerQueue;	// 32 = 0x20
    unsigned long long _cursor;	// 40 = 0x28
    DigestVerifier *_digestVerifier;	// 48 = 0x30
    ChunkedDigest *_digest;	// 56 = 0x38
    id <AssetDataConsumer> _streamAdapter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001f8b7c
@property(retain) id <AssetDataConsumer> streamAdapter; // @synthesize streamAdapter=_streamAdapter;
@property(retain) ChunkedDigest *digest; // @synthesize digest=_digest;
- (void)_resetDecryptionBufferAndDigestVerifier;	// IMP=0x00000001001f8b1c
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f8964
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f8850
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f873c
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f8530
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f81f8
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f7df8
- (_Bool)_beginSessionWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001f7aa4
- (void)dealloc;	// IMP=0x00000001001f7a44
- (id)initWithDPInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001f7970

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

