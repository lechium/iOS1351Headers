/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@interface FigHUDLayer : CALayer {

	CTFontRef _Font;
	double _FontSize;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _LabelColors;
	CFArrayRef _ValueColors;

}
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
-(CFArrayRef)getLabels;
-(long long)addLine:(CFStringRef)arg1 withLabelColorIndex:(int)arg2 withValueColorIndex:(int)arg3 ;
-(void)setFont:(CFStringRef)arg1 withPointSize:(double)arg2 ;
-(void)resetLines;
-(long long)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(CFArrayRef)getValues;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
@end
