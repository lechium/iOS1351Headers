/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBDailyStatusEvent : PBCodable <NSCopying> {

	NSString* _key;
	BOOL _homeAutomationsEnabled;
	BOOL _installed;
	BOOL _personalAutomationsEnabled;
	BOOL _sharingEnabled;
	SCD_Struct_WF20 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasInstalled; 
@property (assign,nonatomic) BOOL installed;                                  //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL hasSharingEnabled; 
@property (assign,nonatomic) BOOL sharingEnabled;                             //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalAutomationsEnabled; 
@property (assign,nonatomic) BOOL personalAutomationsEnabled;                 //@synthesize personalAutomationsEnabled=_personalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasHomeAutomationsEnabled; 
@property (assign,nonatomic) BOOL homeAutomationsEnabled;                     //@synthesize homeAutomationsEnabled=_homeAutomationsEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setHomeAutomationsEnabled:(BOOL)arg1 ;
-(void)setPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)personalAutomationsEnabled;
-(BOOL)homeAutomationsEnabled;
-(void)setHasInstalled:(BOOL)arg1 ;
-(BOOL)hasInstalled;
-(void)setHasSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasSharingEnabled;
-(void)setHasPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)hasPersonalAutomationsEnabled;
-(void)setHasHomeAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)hasHomeAutomationsEnabled;
@end

