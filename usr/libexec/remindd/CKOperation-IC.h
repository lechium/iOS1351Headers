//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

#import "ICLoggable-Protocol.h"

@class NSString;

@interface CKOperation (IC) <ICLoggable>
- (void)ic_removeAllCKCompletionBlocksButNotTheNSOperationCompletionBlock_50200031;	// IMP=0x000000010004d2e0
- (id)ic_loggingValues;	// IMP=0x000000010004d164
- (id)ic_loggingIdentifier;	// IMP=0x000000010004d158

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

