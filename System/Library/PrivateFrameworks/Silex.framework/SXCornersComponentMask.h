/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentMask.h>

@class NSString;

@interface SXCornersComponentMask : SXComponentMask

@property (nonatomic,readonly) SXConvertibleValue radius; 
@property (nonatomic,readonly) BOOL topLeft; 
@property (nonatomic,readonly) BOOL topRight; 
@property (nonatomic,readonly) BOOL bottomRight; 
@property (nonatomic,readonly) BOOL bottomLeft; 
@property (nonatomic,readonly) unsigned long long cornerMask; 
@property (nonatomic,readonly) NSString * curve; 
-(NSString *)curve;
-(BOOL)bottomLeft;
-(BOOL)bottomRight;
-(BOOL)topRight;
-(BOOL)topLeft;
-(SXConvertibleValue)radius;
-(unsigned long long)cornerMask;
-(BOOL)cornerWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)topLeftWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)topRightWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)bottomRightWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)bottomLeftWithValue:(id)arg1 withType:(int)arg2 ;
-(id)curveWithValue:(id)arg1 withType:(int)arg2 ;
@end
