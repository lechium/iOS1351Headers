//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADSyncVerificationHelper : NSObject
{
    NSMutableDictionary *_checksums;	// 8 = 0x8
    NSMutableDictionary *_idCRCChecksums;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001002140b8
- (id)checksums;	// IMP=0x0000000100213e20
- (void)handleSyncChunkInfo:(id)arg1 withSyncInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001002134c4
- (id)_groupKeyForSyncInfo:(id)arg1 domainObject:(id)arg2;	// IMP=0x0000000100213320
- (id)init;	// IMP=0x00000001002132a4

@end
