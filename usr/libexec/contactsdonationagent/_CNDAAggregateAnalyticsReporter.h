//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNDAAnalyticsReporting-Protocol.h"

@class NSArray, NSString;

@interface _CNDAAggregateAnalyticsReporter : NSObject <CNDAAnalyticsReporting>
{
    NSArray *_reporters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005314
@property(readonly, copy, nonatomic) NSArray *reporters; // @synthesize reporters=_reporters;
- (void)reportAugmentationStatus:(id)arg1;	// IMP=0x00000001000051c4
- (void)reportHasNameComponents:(_Bool)arg1 hasEmailAddress:(_Bool)arg2 hasPhoneNumber:(_Bool)arg3 hasPostalAddress:(_Bool)arg4;	// IMP=0x0000000100005080
- (void)reportNumberOfMeCards:(unsigned long long)arg1;	// IMP=0x0000000100004f54
@property(readonly, copy) NSString *description;
- (id)initWithReporters:(id)arg1;	// IMP=0x0000000100004e14
- (id)init;	// IMP=0x0000000100004dfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
