/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CPSAnalytics : NSObject

@property (nonatomic,readonly) BOOL shouldRecordAnalyticsEvents; 
+(id)sharedInstance;
-(BOOL)shouldRecordAnalyticsEvents;
-(void)_sendCoreAnalyticsEvent:(id)arg1 withDictionary:(id)arg2 ;
-(void)navigationStartedWithBundleIdentifier:(id)arg1 ;
@end

