/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface CAPortalLayer : CALayer

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (assign) BOOL hidesSourceLayer; 
@property (assign) BOOL matchesOpacity; 
@property (assign) BOOL matchesPosition; 
@property (assign) BOOL matchesTransform; 
@property (assign) BOOL allowsBackdropGroups; 
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setAllowsBackdropGroups:(BOOL)arg1 ;
-(void)setMatchesPosition:(BOOL)arg1 ;
-(void)setMatchesTransform:(BOOL)arg1 ;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
-(void)setSourceContextId:(unsigned)arg1 ;
-(void)setHidesSourceLayer:(BOOL)arg1 ;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(BOOL)hidesSourceLayer;
-(BOOL)matchesOpacity;
-(void)setMatchesOpacity:(BOOL)arg1 ;
-(BOOL)matchesTransform;
-(BOOL)matchesPosition;
-(BOOL)allowsBackdropGroups;
-(CALayer *)sourceLayer;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(unsigned long long)sourceLayerRenderId;
-(unsigned)sourceContextId;
@end

