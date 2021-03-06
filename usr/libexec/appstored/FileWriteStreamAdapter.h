//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AssetDataConsumer-Protocol.h"

@class ChunkedDigest, DigestVerifier, NSOutputStream, NSString;

@interface FileWriteStreamAdapter : NSObject <AssetDataConsumer>
{
    NSString *_downloadPath;	// 8 = 0x8
    NSOutputStream *_outputStream;	// 16 = 0x10
    unsigned long long _savedBytes;	// 24 = 0x18
    DigestVerifier *_verifier;	// 32 = 0x20
    _Bool _dataComplete;	// 40 = 0x28
    _Bool _hasConsumedData;	// 41 = 0x29
    double _percentComplete;	// 48 = 0x30
    unsigned long long _diskUsage;	// 56 = 0x38
    _Bool _issueProgress;	// 64 = 0x40
    NSString *_bundleID;	// 72 = 0x48
    ChunkedDigest *_digest;	// 80 = 0x50
    unsigned long long _expectedBytes;	// 88 = 0x58
    NSString *_logKey;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000e8004
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
@property _Bool issueProgress; // @synthesize issueProgress=_issueProgress;
@property unsigned long long expectedBytes; // @synthesize expectedBytes=_expectedBytes;
@property(retain) ChunkedDigest *digest; // @synthesize digest=_digest;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_updateProgress:(unsigned long long)arg1;	// IMP=0x00000001000e7f94
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e7f3c
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e7e80
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e7e28
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e7840
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e7798
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e7624
- (id)initWithDownloadPath:(id)arg1;	// IMP=0x00000001000e75ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

