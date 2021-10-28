//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import "BFFFlowItem-Protocol.h"
#import "BYEnvironmentDependencyReceiver-Protocol.h"
#import "BuddyPosedDeviceSelectionDelegate-Protocol.h"

@class BuddyPosedDeviceSelectionView, DBSDeviceDisplayZoomAnimationView, NSString;
@protocol BFFFlowItemDelegate, BYDeviceProvider;

@interface BuddyMagnifyController : OBWelcomeController <BuddyPosedDeviceSelectionDelegate, BYEnvironmentDependencyReceiver, BFFFlowItem>
{
    id <BYDeviceProvider> _deviceProvider;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
    BuddyPosedDeviceSelectionView *_composed;	// 24 = 0x18
    DBSDeviceDisplayZoomAnimationView *_standardAnimatedZoomView;	// 32 = 0x20
    DBSDeviceDisplayZoomAnimationView *_zoomedAnimatedZoomView;	// 40 = 0x28
}

+ (_Bool)commitMagnifyModeIfNeeded;	// IMP=0x0000000100044344
+ (id)cloudConfigSkipKey;	// IMP=0x0000000100044334
+ (_Bool)controllerNeedsToRun;	// IMP=0x0000000100044148
- (void).cxx_destruct;	// IMP=0x0000000100045128
@property(retain, nonatomic) DBSDeviceDisplayZoomAnimationView *zoomedAnimatedZoomView; // @synthesize zoomedAnimatedZoomView=_zoomedAnimatedZoomView;
@property(retain, nonatomic) DBSDeviceDisplayZoomAnimationView *standardAnimatedZoomView; // @synthesize standardAnimatedZoomView=_standardAnimatedZoomView;
@property(retain, nonatomic) BuddyPosedDeviceSelectionView *composed; // @synthesize composed=_composed;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <BYDeviceProvider> deviceProvider; // @synthesize deviceProvider=_deviceProvider;
- (void)didSelectSegment:(long long)arg1;	// IMP=0x0000000100045050
- (void)controllerDone;	// IMP=0x0000000100045008
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100044f60
- (void)showMagnifyControllerWithZoomedSelected:(_Bool)arg1;	// IMP=0x0000000100044eac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100044e04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100044d58
- (void)loadView;	// IMP=0x00000001000445d0
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044258
- (id)init;	// IMP=0x0000000100043e10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
