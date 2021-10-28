/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRSupportedCommandsProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _supportedCommands;

}

@property (nonatomic,retain) NSMutableArray * supportedCommands;              //@synthesize supportedCommands=_supportedCommands - In the implementation block
+(Class)supportedCommandType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)supportedCommands;
-(void)setSupportedCommands:(NSMutableArray *)arg1 ;
-(void)addSupportedCommand:(id)arg1 ;
-(unsigned long long)supportedCommandsCount;
-(void)clearSupportedCommands;
-(id)supportedCommandAtIndex:(unsigned long long)arg1 ;
@end
