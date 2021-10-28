/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PKAttachmentView.h>

@class PKCanvasView, NSMutableArray;

@interface PKCanvasAttachmentView : PKAttachmentView {

	BOOL __wantsFullyRenderedNotification;
	PKCanvasView* _canvasView;
	double _drawingWidth;
	NSMutableArray* _fullyRenderedCompletionBlocks;

}

@property (assign,nonatomic,__weak) PKCanvasView * canvasView;                            //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic) BOOL _wantsFullyRenderedNotification;                        //@synthesize _wantsFullyRenderedNotification=__wantsFullyRenderedNotification - In the implementation block
@property (assign,nonatomic) double drawingWidth;                                         //@synthesize drawingWidth=_drawingWidth - In the implementation block
@property (nonatomic,retain) NSMutableArray * fullyRenderedCompletionBlocks;              //@synthesize fullyRenderedCompletionBlocks=_fullyRenderedCompletionBlocks - In the implementation block
-(void)setCanvasView:(PKCanvasView *)arg1 ;
-(PKCanvasView *)canvasView;
-(double)drawingScale;
-(void)drawingDidChange;
-(BOOL)wantsFullyRendered;
-(void)fullyRendered;
-(BOOL)disableTileAnimations;
-(BOOL)_wantsFullyRenderedNotification;
-(double)drawingWidth;
-(void)set_wantsFullyRenderedNotification:(BOOL)arg1 ;
-(void)setDrawingWidth:(double)arg1 ;
-(NSMutableArray *)fullyRenderedCompletionBlocks;
-(void)setFullyRenderedCompletionBlocks:(NSMutableArray *)arg1 ;
@end
