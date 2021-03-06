//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MusicUIServiceDisplayNowPlayingInterface-Protocol.h"

@class MCDPlayableContentViewController, NSMutableDictionary, NSString;

@interface MusicUIServiceCarDisplayBrowsableContentViewController : UIViewController <MusicUIServiceDisplayNowPlayingInterface>
{
    MCDPlayableContentViewController *_nowPlayingViewController;	// 8 = 0x8
    NSString *_displayedViewControllerKey;	// 16 = 0x10
    NSMutableDictionary *_bundleIDsToStacks;	// 24 = 0x18
    _Bool _firstLaunchCompleted;	// 32 = 0x20
    CDUnknownBlockType _needsSwitch;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100009608
- (id)preferredFocusEnvironments;	// IMP=0x0000000100009568
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000094b8
- (void)saveCurrentStack;	// IMP=0x00000001000093ec
- (void)_performSwitchToNowPlayingForBundleID:(id)arg1 showNowPlaying:(_Bool)arg2;	// IMP=0x0000000100009160
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000090b4
- (void)switchToState:(id)arg1;	// IMP=0x0000000100008e70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

