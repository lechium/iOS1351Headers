/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _strokes;
	CGRect _canvasBounds;
	CGRect _strokesFrame;

}

@property (assign,nonatomic) CGRect canvasBounds;                  //@synthesize canvasBounds=_canvasBounds - In the implementation block
@property (assign,nonatomic) CGRect strokesFrame;                  //@synthesize strokesFrame=_strokesFrame - In the implementation block
@property (nonatomic,retain) NSArray * strokes;                    //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) long long totalPoints; 
+(BOOL)supportsSecureCoding;
+(id)copyOfDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
+(void)resizeDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(void)setStrokes:(NSArray *)arg1 ;
-(NSArray *)strokes;
-(CGRect)canvasBounds;
-(CGRect)strokesFrame;
-(void)setStrokesFrame:(CGRect)arg1 ;
-(long long)totalPoints;
-(id)mutableStrokes;
-(void)addBrushStroke:(id)arg1 ;
-(id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1 ;
-(id)encodeBrushStrokesForArchiving;
-(void)removeLastBrushStroke;
-(void)setCanvasBounds:(CGRect)arg1 ;
@end
