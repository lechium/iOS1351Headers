/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol RCLocationsOfInterestDelegate;
@class CLLocationManager, CLLocation, NSArray, NSString;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {

	int _authorizationStatus;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSArray* _locationsOfInterest;
	BOOL _isFetchingPlacesOfInterest;
	BOOL _active;
	unsigned long long _placeInferencePolicy;
	id<RCLocationsOfInterestDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RCLocationsOfInterestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL authorized; 
@property (readonly) CLLocation * currentLocation;                                           //@synthesize currentLocation=_currentLocation - In the implementation block
@property (copy,readonly) NSArray * locationsOfInterest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
-(id)init;
-(id<RCLocationsOfInterestDelegate>)delegate;
-(void)setDelegate:(id<RCLocationsOfInterestDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)active;
-(CLLocation *)currentLocation;
-(NSArray *)locationsOfInterest;
-(void)_startMonitoringLocation;
-(BOOL)authorized;
-(void)_requestPlaceInferences;
-(void)_didFetchPlaceInferences:(id)arg1 location:(id)arg2 error:(id)arg3 ;
@end

