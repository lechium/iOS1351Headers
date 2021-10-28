/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MXMInstrumental <NSCopying>
@optional
-(void)willStartAtEstimatedTime:(unsigned long long)arg1;
-(BOOL)prepareWithOptions:(id)arg1 error:(id*)arg2;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
-(void)willStop;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;

@required
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2;

@end
