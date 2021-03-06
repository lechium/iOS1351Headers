/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HFItemManager;


@protocol HUItemManagerContainer <NSObject>
@property (nonatomic,readonly) HFItemManager * itemManager; 
@required
+(unsigned long long)updateMode;
-(HFItemManager *)itemManager;
-(void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2;

@end

