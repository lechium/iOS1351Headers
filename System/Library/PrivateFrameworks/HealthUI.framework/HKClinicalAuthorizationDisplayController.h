/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKClinicalSourceAuthorizationController, HKSource;

@interface HKClinicalAuthorizationDisplayController : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;

}

@property (nonatomic,readonly) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source; 
-(id)init;
-(HKSource *)source;
-(HKClinicalSourceAuthorizationController *)authorizationController;
-(id)initWithAuthorizationController:(id)arg1 ;
-(id)currentTimeDisplayStringForReadAuthorizationFooter;
-(id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)_displayStringForReadAuthorizationDate:(id)arg1 ;
-(id)_displayReadAuthorizationDateForMode:(long long)arg1 ;
@end
