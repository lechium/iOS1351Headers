//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface VCPAnalyticsEventCounter : NSObject
{
    NSCountedSet *_analytics;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100006e78
- (long long)getValueForKey:(id)arg1;	// IMP=0x0000000100006dd8
- (void)increaseCount:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000100006d20
- (id)init;	// IMP=0x0000000100006c8c

@end
