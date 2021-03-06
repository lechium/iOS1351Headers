//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DAUserInterruptAlert, NSLock;

@interface DAUserInterruptAlertFactory : NSObject
{
    NSLock *_alertVisibleLock;	// 8 = 0x8
    DAUserInterruptAlert *_visibleAlert;	// 16 = 0x10
}

+ (void)reset;	// IMP=0x0000000100013054
+ (void)activateAlertForSuiteName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012fcc
+ (id)sharedInstance;	// IMP=0x0000000100012f60
- (void).cxx_destruct;	// IMP=0x0000000100013350
@property(retain, nonatomic) DAUserInterruptAlert *visibleAlert; // @synthesize visibleAlert=_visibleAlert;
@property(retain, nonatomic) NSLock *alertVisibleLock; // @synthesize alertVisibleLock=_alertVisibleLock;
- (void)activateAlertForSuiteName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013164
- (id)init;	// IMP=0x0000000100013100

@end

