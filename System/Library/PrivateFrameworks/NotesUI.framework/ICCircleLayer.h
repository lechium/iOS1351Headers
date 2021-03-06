/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/NotesUI-Structs.h>
#import <QuartzCore/CALayer.h>

@interface ICCircleLayer : CALayer {

	double _strokeWidth;
	CGColorRef _strokeColor;
	CGColorRef _fillColor;

}

@property (assign) double strokeWidth;                            //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) CGColorRef strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) CGColorRef fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1 ;
@end

