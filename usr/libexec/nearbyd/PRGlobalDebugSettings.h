//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PRGlobalDebugSettings : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
}

+ (id)sharedSettings;	// IMP=0x000000010013e7d8
- (void).cxx_destruct;	// IMP=0x000000010013eae4
- (long long)integerForKey:(id)arg1;	// IMP=0x000000010013ea4c
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000010013e9b4
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x000000010013e948
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000010013e938
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010013e8a8
- (id)init;	// IMP=0x000000010013e844

@end
