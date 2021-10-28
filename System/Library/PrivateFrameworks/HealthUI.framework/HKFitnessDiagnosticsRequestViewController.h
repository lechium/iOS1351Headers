/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBTextWelcomeController.h>

@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(void)presentInViewController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)presentInViewController:(id)arg1 ;
+(BOOL)needsRequestedPermission;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldInlineButtonTray;
-(void)_showDataCollectionAdditionalInfo;
-(void)_enableDataCollection;
-(void)_disableDataCollection;
-(void)dismissFitnessController;
@end
