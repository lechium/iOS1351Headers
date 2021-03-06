//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DAAPRequestDataProvider-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface PurchaseHistoryItemsDAAPRequestEncoder : NSObject <DAAPRequestDataProvider>
{
    NSArray *_knownApps;	// 8 = 0x8
    NSNumber *_revision;	// 16 = 0x10
}

+ (id)_requiredFields;	// IMP=0x0000000100230cc8
+ (id)_dataForRequestWithKnownApps:(id)arg1 revision:(unsigned int)arg2;	// IMP=0x0000000100230808
- (void).cxx_destruct;	// IMP=0x0000000100230f38
- (id)dataForRequestWithError:(id *)arg1;	// IMP=0x00000001002307b4
- (id)initWithKnownApps:(id)arg1 currentRevision:(id)arg2;	// IMP=0x0000000100230710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

