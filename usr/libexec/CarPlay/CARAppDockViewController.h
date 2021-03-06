//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CARActiveNavigationIdentifiersObserving-Protocol.h"
#import "CARNowPlayingDelegate-Protocol.h"
#import "SiriPresentationIntentUsageDelegate-Protocol.h"

@class CARActiveNavigationIdentifiersObserver, CARAppDockButton, CARAppHistory, CARNowPlayingObserver, NSArray, NSString, UIStackView;
@protocol CARAppDockViewControllerDelegate, CARIconProviding;

@interface CARAppDockViewController : UIViewController <CARNowPlayingDelegate, CARActiveNavigationIdentifiersObserving, SiriPresentationIntentUsageDelegate>
{
    _Bool _dockEnabled;	// 8 = 0x8
    CARAppHistory *_appHistory;	// 16 = 0x10
    id <CARAppDockViewControllerDelegate> _appDockViewControllerDelegate;	// 24 = 0x18
    NSString *_activeBundleIdentifier;	// 32 = 0x20
    CARAppDockButton *_navigationAppButton;	// 40 = 0x28
    CARAppDockButton *_audioAppButton;	// 48 = 0x30
    CARAppDockButton *_otherAppButton;	// 56 = 0x38
    UIStackView *_dockItemStackView;	// 64 = 0x40
    NSArray *_orderedAppItems;	// 72 = 0x48
    CARNowPlayingObserver *_nowPlayingObserver;	// 80 = 0x50
    CARActiveNavigationIdentifiersObserver *_activeNavigationIdentifiersObserver;	// 88 = 0x58
    id <CARIconProviding> _iconProvider;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000a4b9c
@property(nonatomic) __weak id <CARIconProviding> iconProvider; // @synthesize iconProvider=_iconProvider;
@property(retain, nonatomic) CARActiveNavigationIdentifiersObserver *activeNavigationIdentifiersObserver; // @synthesize activeNavigationIdentifiersObserver=_activeNavigationIdentifiersObserver;
@property(retain, nonatomic) CARNowPlayingObserver *nowPlayingObserver; // @synthesize nowPlayingObserver=_nowPlayingObserver;
@property(retain, nonatomic) NSArray *orderedAppItems; // @synthesize orderedAppItems=_orderedAppItems;
@property(retain, nonatomic) UIStackView *dockItemStackView; // @synthesize dockItemStackView=_dockItemStackView;
@property(retain, nonatomic) CARAppDockButton *otherAppButton; // @synthesize otherAppButton=_otherAppButton;
@property(retain, nonatomic) CARAppDockButton *audioAppButton; // @synthesize audioAppButton=_audioAppButton;
@property(retain, nonatomic) CARAppDockButton *navigationAppButton; // @synthesize navigationAppButton=_navigationAppButton;
@property(nonatomic, getter=isDockEnabled) _Bool dockEnabled; // @synthesize dockEnabled=_dockEnabled;
@property(copy, nonatomic) NSString *activeBundleIdentifier; // @synthesize activeBundleIdentifier=_activeBundleIdentifier;
@property(nonatomic) __weak id <CARAppDockViewControllerDelegate> appDockViewControllerDelegate; // @synthesize appDockViewControllerDelegate=_appDockViewControllerDelegate;
@property(readonly, nonatomic) CARAppHistory *appHistory; // @synthesize appHistory=_appHistory;
- (void)_refreshAppDock;	// IMP=0x00000001000a4960
- (void)activeIntentWithBundleId:(id)arg1;	// IMP=0x00000001000a4950
- (void)activeNavigationIdentifiersObserver:(id)arg1 updatedActiveNavigationIdentifiers:(id)arg2;	// IMP=0x00000001000a4920
- (void)nowPlayingObserver:(id)arg1 didUpdatePlaybackState:(_Bool)arg2 inApplication:(id)arg3;	// IMP=0x00000001000a48b4
- (void)nowPlayingObserver:(id)arg1 didChangeNowPlayingApplication:(id)arg2;	// IMP=0x00000001000a472c
- (void)_updateNowPlayingBundleIdentifier:(_Bool)arg1;	// IMP=0x00000001000a4374
- (void)_updateNavigationBundleIdentifier:(_Bool)arg1;	// IMP=0x00000001000a3b78
- (void)setActiveBundleIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000a3658
- (void)_dockButtonPressed:(id)arg1;	// IMP=0x00000001000a3504
- (id)_generateOrderedAppItems;	// IMP=0x00000001000a28a8
- (void)viewDidLoad;	// IMP=0x00000001000a24b4
- (void)dealloc;	// IMP=0x00000001000a2430
- (id)initWithAppHistory:(id)arg1 iconProvider:(id)arg2;	// IMP=0x00000001000a2258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

