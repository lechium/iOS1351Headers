/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonGestureParametersObserver.h>

@protocol SBHardwareButtonInteractionSBHardwareButtonGestureParametersProvider;
@class SBHardwareButtonActionList, SBProximitySensorManager, SBHardwareButtonService, SBHardwareButtonGestureParameters, SBNotificationBannerDestination, NSString;

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {

	BOOL _screenWasDimOnMenuDown;
	BOOL _dontUnlockOnButtonUp;
	long long _homeButtonType;
	SBHardwareButtonActionList* _buttonUpActions;
	SBHardwareButtonActionList* _buttonUpPostActions;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldStartAbsoluteTime;
	SBProximitySensorManager* _proximitySensorManager;
	SBHardwareButtonService* _hardwareButtonService;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _accessibilityButtonInteraction;
	id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> _siriButtonInteraction;
	SBHardwareButtonGestureParameters* _accessibilityGestureParameters;
	SBHardwareButtonGestureParameters* _siriGestureParameters;
	BOOL _buttonDown;
	double _currentLongPressDuration;
	SBNotificationBannerDestination* _bannerDestination;

}

@property (assign,getter=isButtonDown,nonatomic) BOOL buttonDown;                                     //@synthesize buttonDown=_buttonDown - In the implementation block
@property (assign,nonatomic) double currentLongPressDuration;                                         //@synthesize currentLongPressDuration=_currentLongPressDuration - In the implementation block
@property (assign,nonatomic,__weak) SBNotificationBannerDestination * bannerDestination;              //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setButtonDown:(BOOL)arg1 ;
-(void)performSinglePressUpActions;
-(SBNotificationBannerDestination *)bannerDestination;
-(void)setBannerDestination:(SBNotificationBannerDestination *)arg1 ;
-(void)performInitialButtonDownActions;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(void)performFinalButtonUpActions;
-(id)hardwareButtonGestureParameters;
-(BOOL)isButtonDown;
-(void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2 ;
-(void)performInitialButtonUpActions;
-(void)performLongPressActions;
-(void)performLongPressCancelledActions;
-(BOOL)_shouldIgnorePressesDueToProxOrIdle:(id*)arg1 ;
-(void)performSinglePressUpActionsWithSourceType:(unsigned long long)arg1 ;
-(BOOL)_performButtonPreflightActions;
-(void)_logMenuButtonHoldTime;
-(id)initWitHomeButtonType:(long long)arg1 ;
-(void)configureForwardingToLockButtonActions:(id)arg1 ;
-(void)performDoublePressDownActions;
-(void)performTriplePressUpActions;
-(void)performDoubleTapUpActions;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(double)currentLongPressDuration;
-(void)setCurrentLongPressDuration:(double)arg1 ;
@end

