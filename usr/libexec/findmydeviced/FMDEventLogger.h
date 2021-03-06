//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDEventLoggerFacility-Protocol.h"

@class NSDictionary, NSString;

@interface FMDEventLogger : NSObject <FMDEventLoggerFacility>
{
    NSDictionary *_facilitiesDictionary;	// 8 = 0x8
}

+ (id)sharedLogger;	// IMP=0x0000000100049acc
+ (id)facilityName;	// IMP=0x0000000100049ac0
- (void).cxx_destruct;	// IMP=0x000000010004a080
@property(retain, nonatomic) NSDictionary *facilitiesDictionary; // @synthesize facilitiesDictionary=_facilitiesDictionary;
- (_Bool)shouldLog;	// IMP=0x000000010004a018
- (id)loggedEvents;	// IMP=0x000000010004a008
- (void)logEvent:(id)arg1;	// IMP=0x0000000100049f74
- (void)logEvent:(id)arg1 toFacilitiesNamed:(id)arg2;	// IMP=0x0000000100049d94
- (void)reset;	// IMP=0x0000000100049d1c
- (id)init;	// IMP=0x0000000100049b38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

