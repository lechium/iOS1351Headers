//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABSSyncStateMutable-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABSFavoritesShadow : NSObject <ABSSyncStateMutable>
{
}

- (void)replaceObject:(id)arg1;	// IMP=0x0000000100031a98
- (void)deleteObject:(id)arg1;	// IMP=0x0000000100031a94
- (void)addObject:(id)arg1;	// IMP=0x0000000100031a90
- (void)forEach:(CDUnknownBlockType)arg1;	// IMP=0x0000000100031a78
- (void)getSyncObjectForDiffKey_LOCKED:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031a28
- (void)getSyncObjectForDiffKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000319c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
