//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIControl;

@interface ASControlEnabledObserver : NSObject
{
    UIControl *_control;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100010d98
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100010c50
- (void)dealloc;	// IMP=0x0000000100010be4
- (id)initWithControl:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010b14

@end
