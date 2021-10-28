//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserController, UIAlertController;

@interface TabExposeActionsController : NSObject
{
    unsigned long long _tabCountForTitle;	// 8 = 0x8
    BrowserController *_browserController;	// 16 = 0x10
    unsigned long long _actions;	// 24 = 0x18
    UIAlertController *_alertController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000808e8
@property(readonly, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) unsigned long long actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) __weak BrowserController *browserController; // @synthesize browserController=_browserController;
- (unsigned long long)_numberOfWindows;	// IMP=0x0000000100080844
- (_Bool)_titlesNeedUpdateWithActions:(unsigned long long)arg1;	// IMP=0x0000000100080768
- (void)_confirmCloseAllTabs;	// IMP=0x0000000100080498
- (void)_setActions:(unsigned long long)arg1;	// IMP=0x000000010007f588
- (id)_closeAllTabsLabel;	// IMP=0x000000010007f4b4
- (void)updateActions;	// IMP=0x000000010007f1bc
- (id)initWithBrowserController:(id)arg1;	// IMP=0x000000010007f0c8

@end
