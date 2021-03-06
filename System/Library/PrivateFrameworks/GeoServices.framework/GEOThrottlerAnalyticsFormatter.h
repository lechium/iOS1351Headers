/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject {

	NSMutableDictionary* _throttlerAggregatedInfo;

}
+(id)sharedThrottlerFormatter;
-(id)init;
-(int)networkServiceForRequestKind:(SCD_Struct_GE94)arg1 ;
-(BOOL)hasInitialInfoForKeyPath:(id)arg1 ;
-(BOOL)hasThrottledInfoForKeyPath:(id)arg1 ;
-(void)captureThrottledReqsForKeyPath:(id)arg1 maxReqCount:(id)arg2 policyTimeWindow:(double)arg3 ;
-(void)setRequestInfoForKeyPath:(id)arg1 at:(id)arg2 kind:(SCD_Struct_GE94)arg3 appId:(id)arg4 ;
-(void)addThrottledReqForKeyPath:(id)arg1 at:(id)arg2 ;
-(int)throttleModeForString:(id)arg1 ;
-(int)throttleTypeForString:(id)arg1 ;
@end

