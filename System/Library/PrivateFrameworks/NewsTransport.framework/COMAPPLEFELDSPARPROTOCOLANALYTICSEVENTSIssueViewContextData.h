/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueViewContextData : PBCodable <NSCopying> {

	int _issueViewContext;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasIssueViewContext; 
@property (assign,nonatomic) int issueViewContext;                  //@synthesize issueViewContext=_issueViewContext - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)issueViewContext;
-(void)setIssueViewContext:(int)arg1 ;
-(void)setHasIssueViewContext:(BOOL)arg1 ;
-(BOOL)hasIssueViewContext;
-(id)issueViewContextAsString:(int)arg1 ;
-(int)StringAsIssueViewContext:(id)arg1 ;
@end
