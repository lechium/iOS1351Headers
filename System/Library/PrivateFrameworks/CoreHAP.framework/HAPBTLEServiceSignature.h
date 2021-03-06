/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSNumber, NSArray;

@interface HAPBTLEServiceSignature : HMFObject {

	BOOL _authenticated;
	NSUUID* _serviceType;
	NSNumber* _serviceInstanceID;
	unsigned long long _serviceProperties;
	NSArray* _linkedServices;

}

@property (nonatomic,copy,readonly) NSUUID * serviceType;                              //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * serviceInstanceID;                      //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,readonly) unsigned long long serviceProperties;                   //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,readonly) NSArray * linkedServices;                               //@synthesize linkedServices=_linkedServices - In the implementation block
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
-(id)description;
-(NSUUID *)serviceType;
-(BOOL)isAuthenticated;
-(unsigned long long)serviceProperties;
-(NSArray *)linkedServices;
-(NSNumber *)serviceInstanceID;
-(id)initWithServiceType:(id)arg1 serviceInstanceID:(id)arg2 serviceProperties:(unsigned long long)arg3 linkedServices:(id)arg4 authenticated:(BOOL)arg5 ;
@end

