/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _ANEQoSMapper : NSObject
+(unsigned)aneRealTimeTaskQoS;
+(unsigned)aneUserInteractiveTaskQoS;
+(unsigned)aneUserInitiatedTaskQoS;
+(unsigned)aneDefaultTaskQoS;
+(unsigned)aneUtilityTaskQoS;
+(unsigned)aneBackgroundTaskQoS;
+(unsigned long long)queueIndexForQoS:(unsigned)arg1 ;
+(unsigned long long)realTimeQueueIndex;
+(int)programPriorityForQoS:(unsigned)arg1 ;
+(int)realTimeProgramPriority;
@end

