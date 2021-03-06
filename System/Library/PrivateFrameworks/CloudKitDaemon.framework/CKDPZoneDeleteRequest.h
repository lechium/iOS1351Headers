/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {

	CKDPDate* _lastMissingManateeIdentityErrorDate;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _userPurge;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                   //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasUserPurge; 
@property (assign,nonatomic) BOOL userPurge;                                              //@synthesize userPurge=_userPurge - In the implementation block
@property (nonatomic,readonly) BOOL hasLastMissingManateeIdentityErrorDate; 
@property (nonatomic,retain) CKDPDate * lastMissingManateeIdentityErrorDate;              //@synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate - In the implementation block
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setLastMissingManateeIdentityErrorDate:(CKDPDate *)arg1 ;
-(void)setUserPurge:(BOOL)arg1 ;
-(void)setHasUserPurge:(BOOL)arg1 ;
-(BOOL)hasUserPurge;
-(BOOL)hasLastMissingManateeIdentityErrorDate;
-(BOOL)userPurge;
-(CKDPDate *)lastMissingManateeIdentityErrorDate;
@end

