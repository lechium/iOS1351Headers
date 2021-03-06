/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FIUIChartDataGroupDataSource <NSObject>
@optional
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned long long)arg2;

@required
-(unsigned long long)numberOfDataSetsInGroup:(id)arg1;
-(unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;

@end

