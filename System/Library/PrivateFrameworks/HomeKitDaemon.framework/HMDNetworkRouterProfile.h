/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterProfile : HMDAccessoryProfile {

	unsigned long long _networkStatus;
	long long _routerStatus;

}

@property (assign,nonatomic) unsigned long long networkStatus;              //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) long long routerStatus;                        //@synthesize routerStatus=_routerStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_registerForNotifications;
-(unsigned long long)networkStatus;
-(void)registerForMessages;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(void)unconfigure;
-(id)runtimeState;
-(id)initWithRouterService:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)handleInitialState;
-(void)handleAccessoryConfigured:(id)arg1 ;
-(void)handleCharacteristicValuesChanged:(id)arg1 ;
-(void)__handleAccessoryConfigured;
-(void)_handleCharacteristicChanges:(id)arg1 ;
-(void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg1 ;
-(long long)routerStatus;
-(void)__notifyClientsOfNetworkStatus:(unsigned long long)arg1 ;
-(void)setRouterStatus:(long long)arg1 ;
-(void)_notifyClientsOfNetworkStatusUpdate;
-(unsigned long long)__networkStatusFromWANStatus:(id)arg1 ;
-(void)_updateNetworkStatus:(id)arg1 ;
-(void)_updateRouterStatus:(id)arg1 ;
-(void)__handleNetworkRouterStatusUpdate:(id)arg1 ;
-(void)__handleNetworkRouterWANStatusUpdate:(id)arg1 ;
-(void)__handleNetworkAccessViolationUpdate:(id)arg1 ;
-(id)idenfifiersForSatelliteProfiles;
-(void)__notifyClientsOfUpdatedSatelliteProfiles;
@end
