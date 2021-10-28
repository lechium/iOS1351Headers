/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@interface MovieClip : KonaClip
+(id)movieClipWithURL:(id)arg1 ;
+(id)movieClipWithURL:(id)arg1 avAsset:(id)arg2 ;
+(BOOL)audioEnabledByDefault;
-(double)aspectRatio;
-(float)speed;
-(int)clipType;
-(BOOL)isFreezeFrame;
-(BOOL)hasVisualCharacteristic;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(BOOL)hasAudioCharacteristic;
-(int)rawSourceDuration;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 applyAnamorphic:(BOOL)arg3 ;
-(void)clearFreezeFrame;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
@end
