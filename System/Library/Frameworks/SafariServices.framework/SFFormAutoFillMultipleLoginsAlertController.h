/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIAlertController.h>

@class UIAlertAction;

@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController {

	UIAlertAction* _cancelAction;
	BOOL _cancelsWhenAppEntersBackground;

}

@property (assign,nonatomic) BOOL cancelsWhenAppEntersBackground;              //@synthesize cancelsWhenAppEntersBackground=_cancelsWhenAppEntersBackground - In the implementation block
+(id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(void)setCancelsWhenAppEntersBackground:(BOOL)arg1 ;
-(BOOL)cancelsWhenAppEntersBackground;
@end

