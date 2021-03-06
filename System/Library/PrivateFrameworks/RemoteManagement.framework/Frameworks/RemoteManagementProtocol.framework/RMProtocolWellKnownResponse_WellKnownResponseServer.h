/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, NSArray, NSNumber;

@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase {

	NSString* _responseVersion;
	NSString* _responseBaseURL;
	NSArray* _responsePinnedCertificates;
	NSNumber* _responsePinningRevocationCheckRequired;

}

@property (nonatomic,copy) NSString * responseVersion;                                     //@synthesize responseVersion=_responseVersion - In the implementation block
@property (nonatomic,copy) NSString * responseBaseURL;                                     //@synthesize responseBaseURL=_responseBaseURL - In the implementation block
@property (nonatomic,copy) NSArray * responsePinnedCertificates;                           //@synthesize responsePinnedCertificates=_responsePinnedCertificates - In the implementation block
@property (nonatomic,copy) NSNumber * responsePinningRevocationCheckRequired;              //@synthesize responsePinningRevocationCheckRequired=_responsePinningRevocationCheckRequired - In the implementation block
+(id)allowedResponseKeys;
+(id)buildWithVersion:(id)arg1 baseURL:(id)arg2 pinnedCertificates:(id)arg3 pinningRevocationCheckRequired:(id)arg4 ;
+(id)buildRequiredOnlyWithVersion:(id)arg1 baseURL:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serializeWithType:(short)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(void)setResponseVersion:(NSString *)arg1 ;
-(void)setResponseBaseURL:(NSString *)arg1 ;
-(void)setResponsePinnedCertificates:(NSArray *)arg1 ;
-(void)setResponsePinningRevocationCheckRequired:(NSNumber *)arg1 ;
-(NSString *)responseVersion;
-(NSString *)responseBaseURL;
-(NSArray *)responsePinnedCertificates;
-(NSNumber *)responsePinningRevocationCheckRequired;
@end

