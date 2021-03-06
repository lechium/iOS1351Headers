/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate;


@protocol UISApplicationStateServiceDataSource <NSObject>
@property (assign,nonatomic) BOOL usesBackgroundNetwork; 
@property (nonatomic,copy) id badgeValue; 
@property (nonatomic,retain) NSDate * nextWakeDate; 
@optional
-(void)setBadgeValue:(id)arg1;
-(id)badgeValue;
-(void)setUsesBackgroundNetwork:(BOOL)arg1;
-(BOOL)usesBackgroundNetwork;
-(NSDate *)nextWakeDate;
-(void)setNextWakeDate:(id)arg1;

@end

