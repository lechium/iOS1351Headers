//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _PHMeCardGeocoderPreferences : NSObject
{
    NSDictionary *_defaultValues;	// 8 = 0x8
    NSDictionary *_currentValues;	// 16 = 0x10
}

+ (id)sharedPreferences;	// IMP=0x000000010008fca4
- (void).cxx_destruct;	// IMP=0x0000000100090178
- (_Bool)hasValidNetworkPreferences;	// IMP=0x0000000100090150
- (double)activeUsagePeriodLength;	// IMP=0x000000010009013c
- (double)periodLength;	// IMP=0x0000000100090128
- (double)_bestTimeIntervalForKey:(id)arg1;	// IMP=0x0000000100090078
- (id)_constructCurrentValues;	// IMP=0x000000010008ff7c
- (void)dealloc;	// IMP=0x000000010008ff04
- (id)init;	// IMP=0x000000010008fd10

@end
