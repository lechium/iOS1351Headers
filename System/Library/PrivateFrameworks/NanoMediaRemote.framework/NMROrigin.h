/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, MPAVRoute, NSString, NSNumber;

@interface NMROrigin : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MPAVRoute* _route;
	void* _mediaRemoteOrigin;
	unsigned long long _connectionState;
	void* _deviceInfo;
	NSString* _cachedDisplayName;

}

@property (nonatomic,readonly) MPAVRoute * route; 
@property (nonatomic,readonly) void* mediaRemoteOrigin; 
@property (nonatomic,readonly) void* deviceInfo;                                //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSNumber * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isCompanion; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long connectionState; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) long long logicalDeviceCount; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(NSNumber *)uniqueIdentifier;
-(NSString *)displayName;
-(NSString *)deviceIdentifier;
-(BOOL)isCompanion;
-(BOOL)isLocal;
-(unsigned long long)connectionState;
-(MPAVRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(void*)deviceInfo;
-(long long)logicalDeviceCount;
-(void)_handleRouteConnectionDidConnectNotification:(id)arg1 ;
-(void)_handleRouteConnectionDidInvalidateNotification:(id)arg1 ;
-(void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1 ;
-(void)_updateConnectionState;
-(id)initWithOrigin:(void*)arg1 deviceInfo:(void*)arg2 ;
-(void*)mediaRemoteOrigin;
-(void)updateRoute:(id)arg1 ;
-(void)updateOrigin:(void*)arg1 deviceInfo:(void*)arg2 ;
-(id)playerPathWithBundleID:(id)arg1 playerID:(id)arg2 ;
@end

