//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ScreenSuppressor : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010009b880
- (_Bool)suppressEventScreenMessage:(id)arg1;	// IMP=0x000000010009b800
- (void)decSuppressEventScreenMessageAssertionLevel:(id)arg1;	// IMP=0x000000010009b720
- (void)incSuppressEventScreenMessageAssertionLevel:(id)arg1;	// IMP=0x000000010009b65c
- (void)appInit;	// IMP=0x000000010009b658
- (void)dealloc;	// IMP=0x000000010009b610
- (id)init;	// IMP=0x000000010009b5ac

@end

