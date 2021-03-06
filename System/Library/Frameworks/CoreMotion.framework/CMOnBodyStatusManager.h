/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMOnBodyStatusManager : NSObject {

	CLConnectionClient* fLocationdConnection;
	BOOL fSubscribedToOnBodyStatusDetection;
	NSObject*<OS_dispatch_queue> fOnBodyStatusQueue;
	/*^block*/id fOnBodyStatusHandler;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
+(BOOL)isOnBodyStatusDetectionAvailable;
+(id)sharedOnBodyStatusManager;
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)connect;
-(void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetectionPrivate;
-(void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopOnBodyStatusDetection;
-(void)setPropertiesWithDictionary:(id)arg1 ;
@end

