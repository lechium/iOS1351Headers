/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface LegacyTileLayer : CALayer {

	LegacyTileGrid* _tileGrid;
	unsigned _paintCount;
	BOOL _isRenderingInContext;

}

@property (assign,nonatomic) unsigned paintCount;                      //@synthesize paintCount=_paintCount - In the implementation block
@property (assign,nonatomic) LegacyTileGrid* tileGrid;                 //@synthesize tileGrid=_tileGrid - In the implementation block
@property (nonatomic,readonly) BOOL isRenderingInContext;              //@synthesize isRenderingInContext=_isRenderingInContext - In the implementation block
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
-(BOOL)isRenderingInContext;
-(unsigned)paintCount;
-(void)setPaintCount:(unsigned)arg1 ;
-(LegacyTileGrid*)tileGrid;
-(void)setTileGrid:(LegacyTileGrid*)arg1 ;
@end

