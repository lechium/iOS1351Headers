/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>

@protocol HFHomeKitObject;
@class HUAccessoryDebugModuleController;

@interface HUAccessoryDebugViewController : HUItemTableViewController {

	id<HFHomeKitObject> _homeKitObject;
	HUAccessoryDebugModuleController* _debugModuleController;

}

@property (nonatomic,retain) HUAccessoryDebugModuleController * debugModuleController;              //@synthesize debugModuleController=_debugModuleController - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;                                   //@synthesize homeKitObject=_homeKitObject - In the implementation block
-(id<HFHomeKitObject>)homeKitObject;
-(id)initWithHomeKitObject:(id)arg1 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(void)setDebugModuleController:(HUAccessoryDebugModuleController *)arg1 ;
-(HUAccessoryDebugModuleController *)debugModuleController;
@end
