/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CABackdropLayer.h>

@class CAFilter;

@interface FigCaptionBackdropLayer : CABackdropLayer {

	CAFilter* backdropFilter;

}
+(void)initialize;
+(unsigned char)isSupported;
-(id)init;
-(void)dealloc;
-(void)configure;
-(void)insertBackdropAsSublayerToLayer:(id)arg1 below:(id)arg2 ;
-(void)removeBackdropFromSuperLayer;
-(void)applyRoundedCorners:(CGPathRef)arg1 ;
@end
