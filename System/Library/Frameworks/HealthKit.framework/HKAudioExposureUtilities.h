/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKAudioExposureUtilities : NSObject
+(id)localizedDisplayNameForClassification:(unsigned long long)arg1 isEmbedded:(BOOL)arg2 ;
+(id)_classificationValueWithLEQ:(double)arg1 duration:(double)arg2 days:(long long)arg3 ;
+(double)_rounded:(double)arg1 ;
+(id)localizedDisplayNameForClassification:(unsigned long long)arg1 ;
+(unsigned long long)classifyLEQ:(id)arg1 forDuration:(double)arg2 overDays:(long long)arg3 ;
+(id)computeLEQFromAudioExposureValues:(id)arg1 ;
+(double)maximumDurationInSecondsForLEQ:(double)arg1 days:(long long)arg2 ;
@end
