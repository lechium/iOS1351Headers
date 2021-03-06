/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMNetworkRouterProfileDelegate;
@class NSSet;

@interface _HMNetworkRouterProfile : _HMAccessoryProfile {

	BOOL _satellite;
	unsigned long long _networkStatus;
	NSSet* _identifiersForSatelliteProfiles;
	id<_HMNetworkRouterProfileDelegate> _delegate;

}

@property (readonly) unsigned long long networkStatus;                                         //@synthesize networkStatus=_networkStatus - In the implementation block
@property (getter=isSatellite,readonly) BOOL satellite;                                        //@synthesize satellite=_satellite - In the implementation block
@property (readonly) NSSet * identifiersForSatelliteProfiles;                                  //@synthesize identifiersForSatelliteProfiles=_identifiersForSatelliteProfiles - In the implementation block
@property (assign,nonatomic,__weak) id<_HMNetworkRouterProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id<_HMNetworkRouterProfileDelegate>)delegate;
-(void)setDelegate:(id<_HMNetworkRouterProfileDelegate>)arg1 ;
-(id)messageTargetUUID;
-(id)messageReceiveQueue;
-(unsigned long long)networkStatus;
-(void)_registerNotificationHandlers;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(id)messageDestination;
-(void)_handleNetworkStatusUpdated:(id)arg1 ;
-(void)_handleSatelliteProfilesUpdated:(id)arg1 ;
-(NSSet *)identifiersForSatelliteProfiles;
-(void)setIdentifiersForSatelliteProfiles:(NSSet *)arg1 ;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(BOOL)checkForUpdatedIdentifiersForSatellites:(id)arg1 ;
-(BOOL)checkForUpdatedNetworkStatus:(unsigned long long)arg1 ;
-(void)__handleNetworkStatusUpdated:(id)arg1 ;
-(BOOL)isSatellite;
-(void)setSatellite:(BOOL)arg1 ;
@end

