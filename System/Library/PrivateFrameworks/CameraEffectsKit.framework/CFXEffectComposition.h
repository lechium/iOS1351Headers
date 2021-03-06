/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface CFXEffectComposition : NSObject {

	NSMutableArray* _filters;
	NSMutableArray* _overlays;
	NSMutableArray* _animojis;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (nonatomic,retain) NSMutableArray * filters;                                  //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * overlays;                                 //@synthesize overlays=_overlays - In the implementation block
@property (nonatomic,retain) NSMutableArray * animojis;                                 //@synthesize animojis=_animojis - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * effects; 
@property (nonatomic,readonly) NSArray * jtEffects; 
@property (nonatomic,readonly) BOOL hasFaceTrackedOverlays; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL requiresFaceTracking; 
-(id)init;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(NSMutableArray *)filters;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)overlays;
-(void)setOverlays:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)requiresFaceTracking;
-(NSArray *)jtEffects;
-(NSArray *)effects;
-(void)addEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)jtEffectsForType:(int)arg1 ;
-(NSMutableArray *)animojis;
-(BOOL)hasEffectOfType:(id)arg1 ;
-(void)setAnimojis:(NSMutableArray *)arg1 ;
-(void)removeAllEffectsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllEffects:(/*^block*/id)arg1 ;
-(id)CFX_effectsForJettyType:(int)arg1 ;
-(BOOL)hasFaceTrackedOverlays;
-(void)removeEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllOverlayEffects:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfEffect:(id)arg1 ;
-(void)insertEffectAtIndex:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

