/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _DECTypes : NSObject
+(id)stringForCategory:(unsigned long long)arg1 ;
+(id)stringForConsumerType:(unsigned long long)arg1 ;
+(id)stringForConsumerSubtype:(unsigned char)arg1 ;
+(id)stringForOutcome:(unsigned long long)arg1 ;
+(id)stringForPredictionReason:(long long)arg1 ;
+(id)stringForMMEventType:(unsigned long long)arg1 ;
+(id)stringForMMConsumerType:(unsigned long long)arg1 ;
+(unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
+(void)invokeBlockOverCategoriesMatching:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(unsigned long long)intersectCategories:(unsigned long long)arg1 withCategories:(unsigned long long)arg2 ;
+(unsigned long long)categoryForItem:(id)arg1 ;
+(id)stringForLaunchSource:(long long)arg1 ;
+(id)stringForAppPredictionSources:(long long)arg1 ;
+(id)categoryMapping;
+(id)consumerMapping;
+(id)consumerSubtypeMapping;
+(id)outcomeMapping;
+(id)predictionReasonMapping;
+(id)mmEventTypeMapping;
+(id)mmConsumerMapping;
+(long long)selectSingleReason:(long long)arg1 ;
@end

