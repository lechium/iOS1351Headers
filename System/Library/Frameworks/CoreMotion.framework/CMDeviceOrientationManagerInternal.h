/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMDeviceOrientationManagerInternal : NSObject {

	os_unfair_lock_s fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	/*^block*/id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	NSObject*<OS_dispatch_semaphore> fDeviceOrientationSemaphore;
	BOOL fDidSignalSemaphore;
	int fOrientationCallbackMode;
	BOOL fEnableOrientationNotification;
	Sample fLatestDeviceOrientationSample;
	Sample fLastSignificantOrientationSample;

}
-(id)init;
-(void)dealloc;
@end
