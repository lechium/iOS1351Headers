//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CFSMFeatureFlags;

@interface CDMFeatureFlagsCache : NSObject
{
    CFSMFeatureFlags *_cachedFlags;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100010834
- (void).cxx_destruct;	// IMP=0x0000000100010974
- (id)featureFlags;	// IMP=0x00000001000108dc
- (void)clearFeatureFlags;	// IMP=0x00000001000108a0

@end

