/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SEService/SEEndPointPrivacyEncryptResponse.h>

@protocol SEEndPointPrivacyEncryptResponse
@required
+(id)responseWithCipherText:(id)arg1 epehemeralPublicKeydata:(id)arg2 receiverPublicKeyHash:(id)arg3;

@end


@class NSString, NSData;

@interface SEEndPointPrivacyEncryptResponse : NSObject <NSSecureCoding, SEEndPointPrivacyEncryptResponse> {

	NSString* _version;
	NSData* _cipherText;
	NSData* _ephemeralPublicKeydata;
	NSData* _receiverPublicKeyHash;

}

@property (nonatomic,retain) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * cipherText;                          //@synthesize cipherText=_cipherText - In the implementation block
@property (nonatomic,retain) NSData * ephemeralPublicKeydata;              //@synthesize ephemeralPublicKeydata=_ephemeralPublicKeydata - In the implementation block
@property (nonatomic,retain) NSData * receiverPublicKeyHash;               //@synthesize receiverPublicKeyHash=_receiverPublicKeyHash - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithCipherText:(id)arg1 epehemeralPublicKeydata:(id)arg2 receiverPublicKeyHash:(id)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSData *)cipherText;
-(void)setCipherText:(NSData *)arg1 ;
-(void)setEphemeralPublicKeydata:(NSData *)arg1 ;
-(void)setReceiverPublicKeyHash:(NSData *)arg1 ;
-(NSData *)ephemeralPublicKeydata;
-(NSData *)receiverPublicKeyHash;
@end

