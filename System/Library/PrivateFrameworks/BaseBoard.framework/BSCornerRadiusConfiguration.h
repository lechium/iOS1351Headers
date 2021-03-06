/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying> {

	double _topLeft;
	double _bottomLeft;
	double _bottomRight;
	double _topRight;

}

@property (nonatomic,readonly) BOOL isCongruent; 
@property (nonatomic,readonly) double topLeft;                      //@synthesize topLeft=_topLeft - In the implementation block
@property (nonatomic,readonly) double bottomLeft;                   //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (nonatomic,readonly) double bottomRight;                  //@synthesize bottomRight=_bottomRight - In the implementation block
@property (nonatomic,readonly) double topRight;                     //@synthesize topRight=_topRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)topLeft;
-(double)topRight;
-(double)bottomLeft;
-(double)bottomRight;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isEqualToCornerRadiusConfiguration:(id)arg1 ;
-(id)initWithCornerRadius:(double)arg1 ;
-(id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4 ;
-(BOOL)isCongruent;
@end

