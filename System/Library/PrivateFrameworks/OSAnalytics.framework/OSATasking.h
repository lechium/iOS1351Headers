/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OSATasking : NSObject
+(id)getDefaultTasking;
+(id)normalizeInstructions:(id)arg1 ;
+(id)applyTasking:(id)arg1 taskId:(id)arg2 fromBlob:(id)arg3 ;
+(void)setCRKeyToRandomValue;
+(BOOL)shouldApplyPreference:(id)arg1 ;
+(BOOL)preference:(id)arg1 alreadySetInInstructions:(id)arg2 ;
+(id)proxyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4 ;
+(void)checkTaskingRelevance;
+(id)getInstalledTaskIds;
+(id)getAvailableTaskingRoutings;
+(id)selectConfigFromBlob:(id)arg1 ;
@end

