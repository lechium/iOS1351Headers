//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BSInvalidatable-Protocol.h"
#import "CARActiveNavigationIdentifiersObserving-Protocol.h"
#import "CARAppHistoryObserving-Protocol.h"
#import "CAREnvironmentConfigurationObserving-Protocol.h"
#import "CARLayoutHelperViewDelegate-Protocol.h"
#import "SBHLegibility-Protocol.h"

@class CARActiveNavigationIdentifiersObserver, CARAppHistory, CARLayoutHelperView, CARMapsNavigationWidgetViewController, CARTodayViewSynchronizedAnimationManager, CARWidgetContainerViewController, NSArray, NSLayoutConstraint, NSMutableSet, NSString, _UILegibilitySettings;
@protocol CAREnvironment;

@interface CARTodayViewController : UIViewController <CAREnvironmentConfigurationObserving, CARLayoutHelperViewDelegate, CARActiveNavigationIdentifiersObserving, CARAppHistoryObserving, SBHLegibility, BSInvalidatable>
{
    _UILegibilitySettings *legibilitySettings;	// 8 = 0x8
    NSArray *_portraitConstraints;	// 16 = 0x10
    NSArray *_squareConstraints;	// 24 = 0x18
    NSArray *_landscapeConstraints;	// 32 = 0x20
    id <CAREnvironment> _environment;	// 40 = 0x28
    CARMapsNavigationWidgetViewController *_mapsNavigationWidgetController;	// 48 = 0x30
    CARWidgetContainerViewController *_widgetContainerViewController;	// 56 = 0x38
    unsigned long long _currentLayoutType;	// 64 = 0x40
    NSArray *_currentConstraints;	// 72 = 0x48
    NSLayoutConstraint *_landscapeContainerWidthConstraint;	// 80 = 0x50
    NSLayoutConstraint *_squareContainerHeightConstraint;	// 88 = 0x58
    CARTodayViewSynchronizedAnimationManager *_animationManager;	// 96 = 0x60
    NSMutableSet *_sceneWidgetsDisabledRequesters;	// 104 = 0x68
    CARLayoutHelperView *_layoutHelperView;	// 112 = 0x70
    CARActiveNavigationIdentifiersObserver *_activeNavigationIdentifierObserver;	// 120 = 0x78
    NSString *_navigationWidgetBundleIdentifier;	// 128 = 0x80
    CARAppHistory *_appHistory;	// 136 = 0x88
}

+ (_Bool)isEnabledAndSupportedForIconProvider:(id)arg1;	// IMP=0x000000010008aa48
- (void).cxx_destruct;	// IMP=0x000000010008dea0
@property(retain, nonatomic) CARAppHistory *appHistory; // @synthesize appHistory=_appHistory;
@property(retain, nonatomic) NSString *navigationWidgetBundleIdentifier; // @synthesize navigationWidgetBundleIdentifier=_navigationWidgetBundleIdentifier;
@property(retain, nonatomic) CARActiveNavigationIdentifiersObserver *activeNavigationIdentifierObserver; // @synthesize activeNavigationIdentifierObserver=_activeNavigationIdentifierObserver;
@property(retain, nonatomic) CARLayoutHelperView *layoutHelperView; // @synthesize layoutHelperView=_layoutHelperView;
@property(retain, nonatomic) NSMutableSet *sceneWidgetsDisabledRequesters; // @synthesize sceneWidgetsDisabledRequesters=_sceneWidgetsDisabledRequesters;
@property(retain, nonatomic) CARTodayViewSynchronizedAnimationManager *animationManager; // @synthesize animationManager=_animationManager;
@property(retain, nonatomic) NSLayoutConstraint *squareContainerHeightConstraint; // @synthesize squareContainerHeightConstraint=_squareContainerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *landscapeContainerWidthConstraint; // @synthesize landscapeContainerWidthConstraint=_landscapeContainerWidthConstraint;
@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic) unsigned long long currentLayoutType; // @synthesize currentLayoutType=_currentLayoutType;
@property(retain, nonatomic) CARWidgetContainerViewController *widgetContainerViewController; // @synthesize widgetContainerViewController=_widgetContainerViewController;
@property(retain, nonatomic) CARMapsNavigationWidgetViewController *mapsNavigationWidgetController; // @synthesize mapsNavigationWidgetController=_mapsNavigationWidgetController;
@property(nonatomic) __weak id <CAREnvironment> environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSArray *landscapeConstraints; // @synthesize landscapeConstraints=_landscapeConstraints;
@property(retain, nonatomic) NSArray *squareConstraints; // @synthesize squareConstraints=_squareConstraints;
@property(retain, nonatomic) NSArray *portraitConstraints; // @synthesize portraitConstraints=_portraitConstraints;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings;
- (void)appHistory:(id)arg1 mostRecentNavigationAppUpdatedTo:(id)arg2;	// IMP=0x000000010008daf0
- (void)_updateNavigationWidgetsForIdentifier:(id)arg1;	// IMP=0x000000010008d87c
- (void)activeNavigationIdentifiersObserver:(id)arg1 updatedActiveNavigationIdentifiers:(id)arg2;	// IMP=0x000000010008d180
- (void)didChangeLayout:(id)arg1;	// IMP=0x000000010008d06c
- (void)invalidate;	// IMP=0x000000010008cff0
- (void)reloadConstraints;	// IMP=0x000000010008ce28
- (unsigned long long)_layout;	// IMP=0x000000010008cd48
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010008b94c
- (id)preferredFocusEnvironments;	// IMP=0x000000010008b85c
- (id)linearFocusItems;	// IMP=0x000000010008b57c
- (void)viewDidLoad;	// IMP=0x000000010008b064
- (void)setActive:(_Bool)arg1;	// IMP=0x000000010008afdc
- (void)setForeground:(_Bool)arg1;	// IMP=0x000000010008af54
- (void)setSmartWidgetCanChangeVisibilityDisabled:(_Bool)arg1 forRequester:(id)arg2;	// IMP=0x000000010008aee0
- (void)setSceneWidgetsDisabled:(_Bool)arg1 forRequester:(id)arg2;	// IMP=0x000000010008ad64
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000010008a8a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
