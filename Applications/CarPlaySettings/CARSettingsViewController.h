//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "CARSettingsPanelControllable-Protocol.h"

@class NSString;

@interface CARSettingsViewController : UINavigationController <CARSettingsPanelControllable>
{
}

- (void)popToRootPanel;	// IMP=0x0000000100005794
- (void)popPanel;	// IMP=0x0000000100005770
- (void)popIfPanel:(id)arg1;	// IMP=0x00000001000056ec
- (void)pushPanel:(id)arg1;	// IMP=0x00000001000056dc
- (id)init;	// IMP=0x0000000100005668

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

