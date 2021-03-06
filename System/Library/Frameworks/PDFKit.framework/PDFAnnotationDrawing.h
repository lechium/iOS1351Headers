/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PDFKit/PDFKit-Structs.h>
@interface PDFAnnotationDrawing : NSObject
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withAnnotation:(id)arg3 ;
+(id)createLigtherColor:(CGColorRef)arg1 withIntensity:(double)arg2 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withAKAnnotation:(id)arg3 forAnnotation:(id)arg4 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withCircleAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withFreeTextAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withInkAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withLineAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withLinkAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withMarkupAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withPopupAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withSquareAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withStampAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withTextAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withButtonWidgetAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withTextWidgetAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withChoiceWidgetAnnotation:(id)arg3 ;
+(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 withUnknownAnnotation:(id)arg3 ;
+(void)fillRect:(CGRect)arg1 color:(id)arg2 context:(CGContextRef)arg3 ;
+(BOOL)renderString:(id)arg1 forRect:(CGRect)arg2 font:(id)arg3 color:(id)arg4 alignment:(long long)arg5 rotation:(int)arg6 breaks:(BOOL)arg7 context:(CGContextRef)arg8 withAnnotation:(id)arg9 ;
+(CGPath*)createCGPathArrayWithBezierPaths:(id)arg1 ;
+(void)drawArrowFrom:(CGPoint)arg1 to:(CGPoint)arg2 open:(BOOL)arg3 inContext:(CGContextRef)arg4 withBorder:(id)arg5 ;
+(void)drawBulletAtPoint:(CGPoint)arg1 shape:(int)arg2 inContext:(CGContextRef)arg3 withBorder:(id)arg4 ;
+(void)createPillBezier:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
+(void)drawNoteInContext:(CGContextRef)arg1 withParentAnnotation:(id)arg2 ;
+(CGRect)adjustedRectForBox:(long long)arg1 withAnnotation:(id)arg2 ;
+(void)drawInContext:(CGContextRef)arg1 withBounds:(CGRect)arg2 withPopupAnnotation:(id)arg3 ;
+(void)drawNoteAsSelected:(CGContextRef)arg1 rect:(CGRect)arg2 ;
+(void)drawCommentIconInRect:(CGRect)arg1 withColor:(id)arg2 inContext:(CGContextRef)arg3 ;
+(void)drawKeyIconInRect:(CGRect)arg1 withColor:(id)arg2 inContext:(CGContextRef)arg3 ;
+(void)drawNoteIconInRect:(CGRect)arg1 withColor:(id)arg2 inContext:(CGContextRef)arg3 ;
+(void)drawHelpIconInRect:(CGRect)arg1 withColor:(id)arg2 inContext:(CGContextRef)arg3 ;
+(void)drawNewParagraphIconInRect:(CGRect)arg1 withColor:(id)arg2 inContext:(CGContextRef)arg3 ;
+(void)drawParagraphIconInRect:(CGRect)arg1 withColor:(id)arg2 inContext:(CGContextRef)arg3 ;
+(void)drawInsertIconInRect:(CGRect)arg1 withColor:(id)arg2 inContext:(CGContextRef)arg3 ;
+(void)setupDrawColor:(id)arg1 withComponents:(double*)arg2 forContext:(CGContextRef)arg3 ;
+(void)drawCommonCommentNoteIconToContext:(CGContextRef)arg1 colorComponents:(double*)arg2 rect:(CGRect)arg3 ;
+(void)fillOval:(CGRect)arg1 color:(id)arg2 context:(CGContextRef)arg3 ;
+(void)drawPushButton:(id)arg1 inContext:(CGContextRef)arg2 withBackgroundColor:(id)arg3 withCaption:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6 isHighlighted:(BOOL)arg7 ;
+(void)drawRadioButton:(id)arg1 inContext:(CGContextRef)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(BOOL)arg7 ;
+(void)drawCheckBox:(id)arg1 inContext:(CGContextRef)arg2 withState:(long long)arg3 withBackgroundColor:(id)arg4 withBorderColor:(id)arg5 withFontColor:(id)arg6 isHighlighted:(BOOL)arg7 ;
+(void)strokeRect:(CGRect)arg1 color:(id)arg2 context:(CGContextRef)arg3 ;
+(void)strokeOval:(CGRect)arg1 color:(id)arg2 context:(CGContextRef)arg3 ;
+(void)drawListBox:(CGRect)arg1 inContext:(CGContextRef)arg2 withAnnotation:(id)arg3 withOptions:(id)arg4 withStringValue:(id)arg5 withFont:(id)arg6 withFontColor:(id)arg7 ;
+(void)drawComboBox:(CGRect)arg1 inContext:(CGContextRef)arg2 withAnnotation:(id)arg3 withStringValue:(id)arg4 withFont:(id)arg5 withFontColor:(id)arg6 ;
+(void)drawDisclosureBox:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
+(id)stringByTrimmingTrailingCharactersInSet:(id)arg1 forString:(id)arg2 ;
@end

