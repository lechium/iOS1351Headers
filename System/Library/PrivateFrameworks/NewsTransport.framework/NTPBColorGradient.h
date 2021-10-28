/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBColorGradient : PBCodable <NSCopying> {

	SCD_Struct_NT20* _locations;
	double _endPointX;
	double _endPointY;
	double _startPointX;
	double _startPointY;
	NSMutableArray* _colors;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasStartPointX; 
@property (assign,nonatomic) double startPointX;                               //@synthesize startPointX=_startPointX - In the implementation block
@property (assign,nonatomic) BOOL hasStartPointY; 
@property (assign,nonatomic) double startPointY;                               //@synthesize startPointY=_startPointY - In the implementation block
@property (assign,nonatomic) BOOL hasEndPointX; 
@property (assign,nonatomic) double endPointX;                                 //@synthesize endPointX=_endPointX - In the implementation block
@property (assign,nonatomic) BOOL hasEndPointY; 
@property (assign,nonatomic) double endPointY;                                 //@synthesize endPointY=_endPointY - In the implementation block
@property (nonatomic,retain) NSMutableArray * colors;                          //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) unsigned long long locationsCount; 
@property (nonatomic,readonly) double* locations; 
+(Class)colorType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setColors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)colors;
-(double*)locations;
-(unsigned long long)colorsCount;
-(void)clearColors;
-(void)addLocation:(double)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(double)locationAtIndex:(unsigned long long)arg1 ;
-(double)startPointX;
-(double)startPointY;
-(double)endPointX;
-(double)endPointY;
-(void)setStartPointX:(double)arg1 ;
-(void)setStartPointY:(double)arg1 ;
-(void)setEndPointX:(double)arg1 ;
-(void)setEndPointY:(double)arg1 ;
-(void)addColor:(id)arg1 ;
-(void)setHasStartPointX:(BOOL)arg1 ;
-(BOOL)hasStartPointX;
-(void)setHasStartPointY:(BOOL)arg1 ;
-(BOOL)hasStartPointY;
-(void)setHasEndPointX:(BOOL)arg1 ;
-(BOOL)hasEndPointX;
-(void)setHasEndPointY:(BOOL)arg1 ;
-(BOOL)hasEndPointY;
-(id)colorAtIndex:(unsigned long long)arg1 ;
-(void)setLocations:(double*)arg1 count:(unsigned long long)arg2 ;
@end
