//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@protocol AutomationOverlayWindowDelegate;

@interface AutomationOverlayWindow : UIWindow
{
    id <AutomationOverlayWindowDelegate> _automationWindowDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000649a8
@property(nonatomic) __weak id <AutomationOverlayWindowDelegate> automationWindowDelegate; // @synthesize automationWindowDelegate=_automationWindowDelegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100064894

@end

