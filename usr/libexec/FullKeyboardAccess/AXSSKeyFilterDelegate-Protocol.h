//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AXSSEventManager, AXSSKeyboardEvent;

@protocol AXSSKeyFilterDelegate <NSObject>
- (void)eventManager:(AXSSEventManager *)arg1 repostEvent:(AXSSKeyboardEvent *)arg2;
- (_Bool)eventManager:(AXSSEventManager *)arg1 shouldRepostEvent:(AXSSKeyboardEvent *)arg2;
@end

