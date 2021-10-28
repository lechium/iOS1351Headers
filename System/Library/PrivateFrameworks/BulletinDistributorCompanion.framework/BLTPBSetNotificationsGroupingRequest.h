/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBSetNotificationsGroupingRequest : PBRequest <NSCopying> {

	int _grouping;
	NSString* _sectionID;
	SCD_Struct_BL1 _has;

}

@property (assign,nonatomic) BOOL hasGrouping; 
@property (assign,nonatomic) int grouping;                      //@synthesize grouping=_grouping - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;              //@synthesize sectionID=_sectionID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setGrouping:(int)arg1 ;
-(int)grouping;
-(BOOL)hasGrouping;
-(BOOL)hasSectionID;
-(void)setHasGrouping:(BOOL)arg1 ;
-(id)groupingAsString:(int)arg1 ;
-(int)StringAsGrouping:(id)arg1 ;
@end
