/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMAltimeterInternal : NSObject {

	Dispatcher* fFilteredPressureDispatcher;
	/*^block*/id fRelativeAltimeterHandler;
	NSOperationQueue* fRelativeAltimeterQueue;
	Sample fBaseAltimeterSample;
	float fBarometricBaseAltitude;
	BOOL fBaselineReceived;
	float fMostRecentFilteredPressure;
	deque<float, std::__1::allocator<float> >* fPressureSamples;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	/*^block*/id fSignificantElevationSampleHandler;
	double fElevationAscendedOffset;
	double fElevationDescendedOffset;
	BOOL fStopSignificantElevationUpdates;
	double fFilteredElevationOffset;
	BOOL fStopRelativeAltitudeUpdates;

}
-(id)init;
-(void)dealloc;
-(void)_teardown;
-(void)_startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopElevationUpdates;
-(void)_startSignificantElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopSignificantElevationUpdates;
-(void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_startRelativeAltitudeUpdates;
-(void)_stopRelativeAltitudeUpdates;
@end

