/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>

@protocol TSSetupFlowItem;
@class UIViewController, NSMutableArray, NSString;

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {

	UIViewController*<TSSetupFlowItem> _currentViewController;
	NSMutableArray* _transferItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)needsToRunUsingMessageSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)_getTransferPlanList;
@end

