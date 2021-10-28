/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSTextRange;


@protocol NSTextViewportElement <NSObject>
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint; 
@required
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2;
-(id)representedRangeAtPoint:(CGPoint)arg1;
-(NSTextRange *)representedRange;
-(CGSize)layoutSize;
-(CGPoint)layoutPoint;
-(void)setLayoutPoint:(CGPoint)arg1;

@end
