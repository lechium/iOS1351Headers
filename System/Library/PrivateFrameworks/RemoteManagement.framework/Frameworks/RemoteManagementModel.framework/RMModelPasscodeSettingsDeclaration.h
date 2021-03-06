/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface RMModelPasscodeSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSNumber* _payloadRequirePasscode;
	NSNumber* _payloadRequireComplexPasscode;
	NSNumber* _payloadMinimumLength;
	NSNumber* _payloadMaximumFailedAttempts;
	NSNumber* _payloadMaximumGracePeriodInMinutes;
	NSNumber* _payloadMaximumInactivityInMinutes;
	NSNumber* _payloadPasscodeReuseLimit;

}

@property (nonatomic,copy) NSNumber * payloadRequirePasscode;                          //@synthesize payloadRequirePasscode=_payloadRequirePasscode - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRequireComplexPasscode;                   //@synthesize payloadRequireComplexPasscode=_payloadRequireComplexPasscode - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMinimumLength;                            //@synthesize payloadMinimumLength=_payloadMinimumLength - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMaximumFailedAttempts;                    //@synthesize payloadMaximumFailedAttempts=_payloadMaximumFailedAttempts - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMaximumGracePeriodInMinutes;              //@synthesize payloadMaximumGracePeriodInMinutes=_payloadMaximumGracePeriodInMinutes - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMaximumInactivityInMinutes;               //@synthesize payloadMaximumInactivityInMinutes=_payloadMaximumInactivityInMinutes - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPasscodeReuseLimit;                       //@synthesize payloadPasscodeReuseLimit=_payloadPasscodeReuseLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 requirePasscode:(id)arg2 requireComplexPasscode:(id)arg3 minimumLength:(id)arg4 maximumFailedAttempts:(id)arg5 maximumGracePeriodInMinutes:(id)arg6 maximumInactivityInMinutes:(id)arg7 passcodeReuseLimit:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setPayloadRequirePasscode:(NSNumber *)arg1 ;
-(void)setPayloadRequireComplexPasscode:(NSNumber *)arg1 ;
-(void)setPayloadMinimumLength:(NSNumber *)arg1 ;
-(void)setPayloadMaximumFailedAttempts:(NSNumber *)arg1 ;
-(void)setPayloadMaximumGracePeriodInMinutes:(NSNumber *)arg1 ;
-(void)setPayloadMaximumInactivityInMinutes:(NSNumber *)arg1 ;
-(void)setPayloadPasscodeReuseLimit:(NSNumber *)arg1 ;
-(NSNumber *)payloadRequirePasscode;
-(NSNumber *)payloadRequireComplexPasscode;
-(NSNumber *)payloadMinimumLength;
-(NSNumber *)payloadMaximumFailedAttempts;
-(NSNumber *)payloadMaximumGracePeriodInMinutes;
-(NSNumber *)payloadMaximumInactivityInMinutes;
-(NSNumber *)payloadPasscodeReuseLimit;
@end

