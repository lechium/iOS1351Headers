//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NRRepeatingAlertEngine : NSObject
{
    NSDictionary *_items;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_alertString;	// 32 = 0x20
}

+ (id)createAlertItemDictionary;	// IMP=0x00000001000c9670
+ (id)sharedInstance;	// IMP=0x00000001000c9468
- (void).cxx_destruct;	// IMP=0x00000001000cab04
@property(retain, nonatomic) NSString *alertString; // @synthesize alertString=_alertString;
- (void)registerForNotifications;	// IMP=0x00000001000ca9e0
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ca874
- (void)resetStateForAlertWithName:(id)arg1;	// IMP=0x00000001000ca6ec
- (void)presentAlertIfEnabledWithName:(id)arg1;	// IMP=0x00000001000ca614
- (void)sigTerm;	// IMP=0x00000001000ca4f4
- (void)_presentAlertsIfNeeded;	// IMP=0x00000001000ca390
- (void)presentAlertsIfNeeded;	// IMP=0x00000001000ca328
- (void)setEnabled:(_Bool)arg1 withName:(id)arg2;	// IMP=0x00000001000ca13c
- (void)resume;	// IMP=0x00000001000c95f4
- (id)initBase;	// IMP=0x00000001000c9510

@end
