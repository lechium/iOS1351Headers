/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RERelevanceEngineMetricsRecorder <NSObject>
@optional
-(BOOL)ignoreValidMetricCheck;
-(void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;
-(void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2;
-(void)recordPredictionMetrics:(id)arg1 forInteraction:(id)arg2;

@end

