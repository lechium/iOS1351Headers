/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/_UISceneSettingsDiffAction.h>

@class UILayoutGuide, CRSUIApplicationSceneSettingsDiffInspector, NSLayoutConstraint, NSString;

@interface CRSUIWindow : UIWindow <_UISceneSettingsDiffAction> {

	UILayoutGuide* _notificationLayoutGuide;
	CRSUIApplicationSceneSettingsDiffInspector* _settingsDiffInspector;
	double _bannerHeight;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) CRSUIApplicationSceneSettingsDiffInspector * settingsDiffInspector;              //@synthesize settingsDiffInspector=_settingsDiffInspector - In the implementation block
@property (assign,nonatomic) double bannerHeight;                                                             //@synthesize bannerHeight=_bannerHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                           //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * notificationLayoutGuide;                                       //@synthesize notificationLayoutGuide=_notificationLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_settings;
-(id)initWithWindowScene:(id)arg1 ;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)bannerHeight;
-(void)setBannerHeight:(double)arg1 ;
-(void)notificationLayoutGuideDidChange;
-(CRSUIApplicationSceneSettingsDiffInspector *)settingsDiffInspector;
-(UILayoutGuide *)notificationLayoutGuide;
-(void)setSettingsDiffInspector:(CRSUIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

