//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "REMXPCIndexingPerformer-Protocol.h"

@class MISSING_TYPE;

@interface _TtC7remindd22RDXPCIndexingPerformer : NSObject <REMXPCIndexingPerformer>
{
    MISSING_TYPE *masterStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010024a87c
- (id)init;	// IMP=0x000000010024a820
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010024a798
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010024a6f4
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010024a604
- (void)testIndexDummyItemWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010024a590

@end
