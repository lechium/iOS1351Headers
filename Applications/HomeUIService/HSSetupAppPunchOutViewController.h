//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSSetupServiceHeaderTableViewController.h"

#import "HFItemManagerDelegate-Protocol.h"

@class NSString;

@interface HSSetupAppPunchOutViewController : HSSetupServiceHeaderTableViewController <HFItemManagerDelegate>
{
}

- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000001000079a4
- (id)cancelConfiguration;	// IMP=0x000000010000793c
- (id)finishConfiguration;	// IMP=0x00000001000078d4
- (_Bool)canFinishConfiguration;	// IMP=0x00000001000078cc
- (id)initWithDiscoveredAccessoryItem:(id)arg1;	// IMP=0x00000001000078bc
- (id)initWithDiscoveredAccessoryItem:(id)arg1 configurationContentDelegate:(id)arg2;	// IMP=0x00000001000077b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

