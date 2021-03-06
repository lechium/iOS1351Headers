/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKProtobufPaymentRequest;

@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying> {

	NSString* _identifier;
	NSString* _paymentApplicationIdentifier;
	PKProtobufPaymentRequest* _paymentRequest;

}

@property (nonatomic,readonly) BOOL hasPaymentRequest; 
@property (nonatomic,retain) PKProtobufPaymentRequest * paymentRequest;              //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentApplicationIdentifier; 
@property (nonatomic,retain) NSString * paymentApplicationIdentifier;                //@synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasIdentifier;
-(NSString *)paymentApplicationIdentifier;
-(void)setPaymentApplicationIdentifier:(NSString *)arg1 ;
-(PKProtobufPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKProtobufPaymentRequest *)arg1 ;
-(BOOL)hasPaymentRequest;
-(BOOL)hasPaymentApplicationIdentifier;
@end

