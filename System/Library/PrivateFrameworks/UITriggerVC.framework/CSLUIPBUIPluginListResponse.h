/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying> {

	NSMutableArray* _names;
	NSMutableArray* _usages;

}

@property (nonatomic,retain) NSMutableArray * names;               //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * usages;              //@synthesize usages=_usages - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)names;
-(void)addUsage:(id)arg1 ;
-(unsigned long long)namesCount;
-(void)clearNames;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(void)addName:(id)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)usages;
-(void)setUsages:(NSMutableArray *)arg1 ;
-(unsigned long long)usagesCount;
-(void)clearUsages;
-(id)usageAtIndex:(unsigned long long)arg1 ;
@end

