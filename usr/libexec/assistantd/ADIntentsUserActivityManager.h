//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADIntentsUserActivityManager : NSObject
{
    NSMutableDictionary *_userActivitiesStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001e4c8c
- (id)description;	// IMP=0x00000001001e4be8
- (void)reset;	// IMP=0x00000001001e4bd8
- (void)setUserActivity:(id)arg1 forID:(id)arg2;	// IMP=0x00000001001e4b48
- (id)userActivityForID:(id)arg1;	// IMP=0x00000001001e4aec
- (id)init;	// IMP=0x00000001001e4a78

@end
