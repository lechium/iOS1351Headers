/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FARequestConfigurator, UIViewController, RUIStyle;

@interface FACircleStateController : NSObject {

	FARequestConfigurator* _requestConfigurator;
	/*^block*/id _performOperationCompletion;
	UIViewController* _presenter;
	RUIStyle* _customRUIStyle;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) RUIStyle * customRUIStyle;                        //@synthesize customRUIStyle=_customRUIStyle - In the implementation block
-(id)init;
-(UIViewController *)presenter;
-(id)initWithPresenter:(id)arg1 ;
-(void)performOperationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_contextRequiresRemoteService:(id)arg1 ;
-(void)_presentViewServiceWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensurePresenterWithCompletion:(/*^block*/id)arg1 ;
-(void)setCustomRUIStyle:(RUIStyle *)arg1 ;
-(RUIStyle *)customRUIStyle;
@end

