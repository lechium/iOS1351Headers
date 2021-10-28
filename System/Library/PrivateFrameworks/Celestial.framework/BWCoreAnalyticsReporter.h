/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface BWCoreAnalyticsReporter : NSObject {

	NSObject*<OS_dispatch_queue> _coreAnalyticsDispatchQueue;

}
+(void)initialize;
+(id)sharedInstance;
+(int)clientApplicationIDType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)sendEvent:(id)arg1 ;
@end
