/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying> {

	CKDPSubscription* _subscription;

}

@property (nonatomic,readonly) BOOL hasSubscription; 
@property (nonatomic,retain) CKDPSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPSubscription *)subscription;
-(void)setSubscription:(CKDPSubscription *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasSubscription;
@end
