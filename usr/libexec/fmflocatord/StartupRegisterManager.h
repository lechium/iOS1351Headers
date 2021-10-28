//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface StartupRegisterManager : NSObject
{
    _Bool _inTestingMode;	// 8 = 0x8
    NSDictionary *_infoAtStartup;	// 16 = 0x10
    NSMutableDictionary *_info;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_infoChangeQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010002b054
- (void).cxx_destruct;	// IMP=0x000000010002bfb8
@property(nonatomic) _Bool inTestingMode; // @synthesize inTestingMode=_inTestingMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *infoChangeQueue; // @synthesize infoChangeQueue=_infoChangeQueue;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSDictionary *infoAtStartup; // @synthesize infoAtStartup=_infoAtStartup;
- (id)_descriptionForEvent:(long long)arg1;	// IMP=0x000000010002bec4
- (void)_saveInfo;	// IMP=0x000000010002be3c
- (void)_removeInfoForKey:(id)arg1;	// IMP=0x000000010002bd30
- (void)_setInfo:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010002bbf4
- (void)_clearAllInfo;	// IMP=0x000000010002bb14
- (void)_clearQCPendingEpoch;	// IMP=0x000000010002b804
- (id)description;	// IMP=0x000000010002b740
- (void)eventDidOccur:(long long)arg1;	// IMP=0x000000010002b40c
@property(readonly, nonatomic) _Bool shouldForceRegisterOnStartup;
- (id)infoDictForTesting;	// IMP=0x000000010002b294
- (id)initWithDict:(id)arg1;	// IMP=0x000000010002b134
- (id)init;	// IMP=0x000000010002b0c0

@end
