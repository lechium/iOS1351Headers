/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARSensor.h>

@protocol ARSensorDelegate;
@class CMMotionManager, ARGyroscopeData, ARAccelerometerData, NSString;

@interface ARMotionSensor : NSObject <ARSensor> {

	CMMotionManager* _motionManager;
	ARGyroscopeData* _currentGyroData;
	ARAccelerometerData* _currentAccelerometerData;
	id<ARSensorDelegate> _delegate;
	double _interval;

}

@property (assign,nonatomic) double interval;                                   //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(void)dealloc;
-(NSString *)description;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(double)preferredInterval;
-(unsigned long long)providedDataTypes;
-(void)gyroscopeOutput:(const SCD_Struct_AR36*)arg1 ;
-(void)accelerometerOutput:(const SCD_Struct_AR36*)arg1 ;
-(id)initWithMotionManager:(id)arg1 ;
@end

