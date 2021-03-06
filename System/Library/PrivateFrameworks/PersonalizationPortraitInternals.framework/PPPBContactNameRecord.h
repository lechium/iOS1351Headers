/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PPPBContactNameRecord : PBCodable <NSCopying> {

	double _score;
	unsigned char _changeType;
	NSMutableArray* _cityNames;
	NSString* _firstName;
	NSString* _identifier;
	NSString* _jobTitle;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _nickname;
	NSString* _organizationName;
	NSString* _phoneticFirstName;
	NSString* _phoneticLastName;
	NSString* _phoneticMiddleName;
	NSMutableArray* _relatedNames;
	unsigned char _source;
	NSString* _sourceIdentifier;
	NSMutableArray* _streetNames;
	SCD_Struct_PP3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                               //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) unsigned char source;                       //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) unsigned char changeType;                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceIdentifier; 
@property (nonatomic,retain) NSString * sourceIdentifier;                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticFirstName; 
@property (nonatomic,retain) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasMiddleName; 
@property (nonatomic,retain) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticMiddleName; 
@property (nonatomic,retain) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLastName; 
@property (nonatomic,retain) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) BOOL hasJobTitle; 
@property (nonatomic,retain) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedNames;              //@synthesize relatedNames=_relatedNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * streetNames;               //@synthesize streetNames=_streetNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * cityNames;                 //@synthesize cityNames=_cityNames - In the implementation block
+(Class)relatedNamesType;
+(Class)streetNamesType;
+(Class)cityNamesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(unsigned char)arg1 ;
-(NSString *)identifier;
-(unsigned char)source;
-(unsigned char)changeType;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(double)score;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(NSString *)organizationName;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setChangeType:(unsigned char)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)hasIdentifier;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(unsigned char)arg1 ;
-(unsigned char)StringAsSource:(id)arg1 ;
-(BOOL)hasNickname;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)phoneticMiddleName;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(NSString *)jobTitle;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSMutableArray *)relatedNames;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setRelatedNames:(NSMutableArray *)arg1 ;
-(BOOL)hasOrganizationName;
-(BOOL)hasFirstName;
-(BOOL)hasLastName;
-(BOOL)hasMiddleName;
-(BOOL)hasPhoneticFirstName;
-(BOOL)hasPhoneticLastName;
-(BOOL)hasPhoneticMiddleName;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(id)changeTypeAsString:(unsigned char)arg1 ;
-(unsigned char)StringAsChangeType:(id)arg1 ;
-(NSMutableArray *)streetNames;
-(NSMutableArray *)cityNames;
-(BOOL)hasSourceIdentifier;
-(BOOL)hasJobTitle;
-(void)clearRelatedNames;
-(void)addRelatedNames:(id)arg1 ;
-(unsigned long long)relatedNamesCount;
-(id)relatedNamesAtIndex:(unsigned long long)arg1 ;
-(void)clearStreetNames;
-(void)addStreetNames:(id)arg1 ;
-(unsigned long long)streetNamesCount;
-(id)streetNamesAtIndex:(unsigned long long)arg1 ;
-(void)clearCityNames;
-(void)addCityNames:(id)arg1 ;
-(unsigned long long)cityNamesCount;
-(id)cityNamesAtIndex:(unsigned long long)arg1 ;
-(void)setStreetNames:(NSMutableArray *)arg1 ;
-(void)setCityNames:(NSMutableArray *)arg1 ;
@end

