/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RestrictionProtocol.h>

@class NSMutableArray;

@interface cNodeRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	NSMutableArray* _restrictArray;

}

@property (retain) NSMutableArray * restrictArray;              //@synthesize restrictArray=_restrictArray - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(unsigned)nodeCount;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithType:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(int)appendRestriction:(id)arg1 ;
-(NSMutableArray *)restrictArray;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(unsigned)ulType;
-(void)setUlType:(unsigned)arg1 ;
-(int)restrictionNumber;
-(unsigned)get_ultype;
-(unsigned)get_weight;
-(void)setRestrictArray:(NSMutableArray *)arg1 ;
@end

