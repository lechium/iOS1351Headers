/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController;

@interface FLNetworkStatePrompter : NSObject {

	UIViewController* _presenter;

}
-(void)dealloc;
-(id)initWithPresenter:(id)arg1 ;
-(void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_mainQueue_verificationFailedAlert;
-(id)_disableAirplaneActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_cancelActionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)preflightNetworkStateWithCompletionHandler:(/*^block*/id)arg1 ;
@end
