//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CTCellularPlanLoggerDelegate-Protocol.h"

@class NSString;

@interface CTCellularPlanCSILogger : NSObject <CTCellularPlanLoggerDelegate>
{
    queue_9c98cea5 queue;	// 8 = 0x8
    shared_ptr_b36635fa fLogger;	// 16 = 0x10
}

+ (id)sharedLogger;	// IMP=0x000000010063ccd8
- (id).cxx_construct;	// IMP=0x000000010063d128
- (void).cxx_destruct;	// IMP=0x000000010063d0f0
- (void)didReceiveLogMessage:(id)arg1 withLevel:(int)arg2;	// IMP=0x000000010063cfbc
- (id)init;	// IMP=0x000000010063cd3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

