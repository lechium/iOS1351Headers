/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <PDFKit/PDFTilePoolDelegate.h>

@class PDFPageLayer, PDFTileSurface;

@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate> {

	PDFPageLayer* pageLayer;
	CGAffineTransform renderingTransform;
	double tileContentsScale;
	PDFTileSurface* pageSurface;
	int generationID;
	AB isWorking;
	CGRect originalFrame;

}
-(void)dealloc;
-(void)hasStartedWork;
-(void)recievePDFTileSurface:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forPageLayer:(id)arg2 withRenderingTransform:(CGAffineTransform)arg3 tileContentsScale:(double)arg4 generationID:(int)arg5 ;
-(BOOL)isWorking;
@end
