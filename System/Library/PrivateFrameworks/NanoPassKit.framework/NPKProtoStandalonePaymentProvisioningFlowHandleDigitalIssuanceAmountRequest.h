/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleDigitalIssuanceAmountRequest : PBRequest <NSCopying> {

	NSString* _amount;
	NPKProtoStandaloneRequestHeader* _requestHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasAmount; 
@property (nonatomic,retain) NSString * amount;                                            //@synthesize amount=_amount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)amount;
-(void)setAmount:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAmount;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
@end
