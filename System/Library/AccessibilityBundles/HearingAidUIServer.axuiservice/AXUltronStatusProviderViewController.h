/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UILabel, AXDispatchTimer;

@interface AXUltronStatusProviderViewController : UIViewController {

	UILabel* _listenType;
	UILabel* _confidence;
	AXDispatchTimer* _clearTimer;

}
-(void)viewDidLoad;
-(void)updateDisplay:(id)arg1 confidence:(double)arg2 ;
@end

