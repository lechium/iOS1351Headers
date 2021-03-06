/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTextLine;

@interface CPHighlighter : NSObject {

	CPZone* boundingZone;
	CPTextLine* textLine;
	CGColorRef color;
	CPPDFStyle* style;
	CPPDFStyle* highlightedStyle;

}

@property (nonatomic,readonly) CGColorRef color; 
@property (assign,nonatomic) CPPDFStyle* style; 
@property (assign,nonatomic) CPPDFStyle* highlightedStyle; 
+(BOOL)reconstructHighlightFor:(id)arg1 ;
-(CPPDFStyle*)style;
-(void)setStyle:(CPPDFStyle*)arg1 ;
-(CGColorRef)color;
-(void)highlight;
-(CPPDFStyle*)highlightedStyle;
-(void)setHighlightedStyle:(CPPDFStyle*)arg1 ;
-(id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(CGColorRef)arg3 ;
@end

