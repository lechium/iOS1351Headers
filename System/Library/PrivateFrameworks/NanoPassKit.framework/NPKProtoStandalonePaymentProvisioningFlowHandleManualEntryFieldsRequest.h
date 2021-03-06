/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleManualEntryFieldsRequest : PBRequest <NSCopying> {

	NSMutableArray* _manualEntryFields;
	NPKProtoStandaloneRequestHeader* _requestHeader;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * manualEntryFields;                           //@synthesize manualEntryFields=_manualEntryFields - In the implementation block
+(Class)manualEntryFieldsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)addManualEntryFields:(id)arg1 ;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(unsigned long long)manualEntryFieldsCount;
-(void)clearManualEntryFields;
-(id)manualEntryFieldsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)manualEntryFields;
-(void)setManualEntryFields:(NSMutableArray *)arg1 ;
@end

