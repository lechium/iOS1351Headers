/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRDiagnosticProtobuf : PBCodable <NSCopying> {

	double _dateGenerated;
	NSString* _diagnosticInfo;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasDateGenerated; 
@property (assign,nonatomic) double dateGenerated;                   //@synthesize dateGenerated=_dateGenerated - In the implementation block
@property (nonatomic,readonly) BOOL hasDiagnosticInfo; 
@property (nonatomic,retain) NSString * diagnosticInfo;              //@synthesize diagnosticInfo=_diagnosticInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDiagnosticInfo:(NSString *)arg1 ;
-(void)setDateGenerated:(double)arg1 ;
-(void)setHasDateGenerated:(BOOL)arg1 ;
-(BOOL)hasDateGenerated;
-(BOOL)hasDiagnosticInfo;
-(double)dateGenerated;
-(NSString *)diagnosticInfo;
@end

