/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject {

	long long _iCloudLogoutPolicy;
	NSArray* _policyTypes;
	NSUUID* _identifier;

}

@property (assign,nonatomic) long long iCloudLogoutPolicy;              //@synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy - In the implementation block
@property (nonatomic,copy) NSArray * policyTypes;                       //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfICloudLogoutPolicy;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(NSArray *)policyTypes;
-(void)setPolicyTypes:(NSArray *)arg1 ;
-(void)_updateiCloudLogout;
-(void)_updateiCloudLogoutFromPolicies:(id)arg1 ;
-(void)setICloudLogoutPolicy:(long long)arg1 ;
-(long long)iCloudLogoutPolicy;
@end

