/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXVideoAdAnalyticsEvent.h>

@interface SXVideoAdEngagementEvent : SXVideoAdAnalyticsEvent {

	unsigned long long _engagementType;

}

@property (nonatomic,readonly) unsigned long long engagementType;              //@synthesize engagementType=_engagementType - In the implementation block
-(id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7 engagementType:(unsigned long long)arg8 ;
-(unsigned long long)engagementType;
@end

