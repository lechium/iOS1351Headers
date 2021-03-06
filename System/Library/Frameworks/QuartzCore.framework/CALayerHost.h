/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
@property (assign) BOOL inheritsSecurity; 
@property (assign) BOOL rendersAsynchronously; 
@property (assign) BOOL preservesFlip; 
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned)contextId;
-(void)setContextId:(unsigned)arg1 ;
-(void)setRendersAsynchronously:(BOOL)arg1 ;
-(BOOL)rendersAsynchronously;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)inheritsSecurity;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)preservesFlip;
-(void)setPreservesFlip:(BOOL)arg1 ;
@end

