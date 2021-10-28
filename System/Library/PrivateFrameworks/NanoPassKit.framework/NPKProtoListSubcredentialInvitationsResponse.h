/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoListSubcredentialInvitationsResponse : PBCodable <NSCopying> {

	NSMutableArray* _subcredentialInvitationsDatas;

}

@property (nonatomic,retain) NSMutableArray * subcredentialInvitationsDatas;              //@synthesize subcredentialInvitationsDatas=_subcredentialInvitationsDatas - In the implementation block
+(Class)subcredentialInvitationsDataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addSubcredentialInvitationsData:(id)arg1 ;
-(unsigned long long)subcredentialInvitationsDatasCount;
-(void)clearSubcredentialInvitationsDatas;
-(id)subcredentialInvitationsDataAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)subcredentialInvitationsDatas;
-(void)setSubcredentialInvitationsDatas:(NSMutableArray *)arg1 ;
@end
