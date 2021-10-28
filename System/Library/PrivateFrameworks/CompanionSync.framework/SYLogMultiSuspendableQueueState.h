/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYLogMultiSuspendableQueueState : PBCodable <NSCopying> {

	NSString* _label;
	int _resumeCount;
	NSString* _target;
	SCD_Struct_SY5 _has;

}

@property (assign,nonatomic) BOOL hasResumeCount; 
@property (assign,nonatomic) int resumeCount;                  //@synthesize resumeCount=_resumeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasTarget; 
@property (nonatomic,retain) NSString * target;                //@synthesize target=_target - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(NSString *)target;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(BOOL)hasTarget;
-(void)setResumeCount:(int)arg1 ;
-(void)setHasResumeCount:(BOOL)arg1 ;
-(BOOL)hasResumeCount;
-(int)resumeCount;
@end
