/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ATXActionPredictionTypes : NSObject
+(id)engagementTypeToString:(unsigned long long)arg1 ;
+(id)actionExperienceToString:(unsigned long long)arg1 ;
+(id)actionTypeToString:(unsigned long long)arg1 ;
+(id)actionFeedbackStageToString:(unsigned long long)arg1 ;
+(id)actionFeedbackTypeToString:(unsigned long long)arg1 ;
+(unsigned long long)stringToActionExperience:(id)arg1 found:(BOOL*)arg2 ;
+(unsigned long long)stringToActionFeedbackStage:(id)arg1 found:(BOOL*)arg2 ;
+(id)inverseActionFeedbackTypeMapping;
+(id)actionTypeToPETString:(unsigned long long)arg1 ;
@end
