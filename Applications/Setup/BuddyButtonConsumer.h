//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSHardwareButtonEventConsuming-Protocol.h"

@class NSString;
@protocol BSInvalidatable;

@interface BuddyButtonConsumer : NSObject <SBSHardwareButtonEventConsuming>
{
    CDUnknownBlockType _menuHandler;	// 8 = 0x8
    id <BSInvalidatable> _buttonConsumer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000aa580
@property(retain, nonatomic) id <BSInvalidatable> buttonConsumer; // @synthesize buttonConsumer=_buttonConsumer;
@property(copy, nonatomic) CDUnknownBlockType menuHandler; // @synthesize menuHandler=_menuHandler;
- (void)dealloc;	// IMP=0x00000001000aa508
- (id)initWithButtonKind:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aa420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
