//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface ContextManager : NSObject
{
    NSMapTable *_contextMap;	// 8 = 0x8
    NSMapTable *_contextProxyMap;	// 16 = 0x10
    NSMapTable *_contextByExternalizedContextMap;	// 24 = 0x18
    NSMutableDictionary *_modules;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000d8bc
- (void).cxx_destruct;	// IMP=0x000000010000e31c
- (id)loadModule:(long long)arg1 error:(id *)arg2;	// IMP=0x000000010000dec0
- (void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3;	// IMP=0x000000010000dd24
- (void)_logClass:(Class)arg1 tag:(id)arg2;	// IMP=0x000000010000dc84
- (id)_pathForModule:(long long)arg1 error:(id *)arg2;	// IMP=0x000000010000db54
- (void)registerExternalizedContext:(id)arg1 forContext:(id)arg2;	// IMP=0x000000010000db04
- (void)addContext:(id)arg1;	// IMP=0x000000010000da94
- (void)addContextProxy:(id)arg1;	// IMP=0x000000010000da2c
- (id)findContextForExternalizedContext:(id)arg1;	// IMP=0x000000010000da1c
- (id)contextForUUID:(id)arg1;	// IMP=0x000000010000da0c
- (id)init;	// IMP=0x000000010000d928

@end

