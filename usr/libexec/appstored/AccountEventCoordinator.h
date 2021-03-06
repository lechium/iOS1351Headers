//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AccountEventCoordinator : NSObject
{
    NSMutableDictionary *_accountsForWeekCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    double _lastCacheReset;	// 24 = 0x18
}

+ (void)testDates;	// IMP=0x00000001001875b4
+ (id)nextPayoutWeekStartDateForDate:(id)arg1;	// IMP=0x0000000100185520
+ (id)nextPayoutWeekEndDateForDate:(id)arg1;	// IMP=0x00000001001852f4
+ (id)sharedCoordinator;	// IMP=0x0000000100185258
- (void).cxx_destruct;	// IMP=0x0000000100187960
- (id)diagnosticDescription;	// IMP=0x00000001001873e8
- (id)description;	// IMP=0x0000000100187344
- (void)_resetCache;	// IMP=0x00000001001872d8
- (id)_loadEvents;	// IMP=0x00000001001863c8
- (void)_handleAppleIDDidChangeNotification:(id)arg1;	// IMP=0x0000000100185cb8
- (void)resetCache;	// IMP=0x0000000100185c50
- (id)allEvents;	// IMP=0x0000000100185b4c
- (id)activeAccountsInWeekWithDate:(id)arg1;	// IMP=0x00000001001855a4
- (id)init;	// IMP=0x00000001001850b0

@end

