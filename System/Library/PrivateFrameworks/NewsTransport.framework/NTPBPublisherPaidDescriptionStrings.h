/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBPaywallDescription;

@interface NTPBPublisherPaidDescriptionStrings : PBCodable <NSCopying> {

	NTPBPaywallDescription* _paywallDescription;

}

@property (nonatomic,readonly) BOOL hasPaywallDescription; 
@property (nonatomic,retain) NTPBPaywallDescription * paywallDescription;              //@synthesize paywallDescription=_paywallDescription - In the implementation block
+(id)publisherPaidDescriptionStringsFromJSON:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPaywallDescription:(NTPBPaywallDescription *)arg1 ;
-(BOOL)hasPaywallDescription;
-(NTPBPaywallDescription *)paywallDescription;
@end

