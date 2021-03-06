/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLKCComplicationDataSourceDelegate <NSObject>
@required
-(void)invalidateSwitcherTemplate;
-(void)invalidateEntries;
-(void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
-(void)appendEntries:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
-(void)setTimelineStartDate:(id)arg1;
-(void)setTimelineEndDate:(id)arg1;
-(void)appendEntries:(id)arg1;
-(double)minimumIntervalBetweenTimelineEntries;

@end

