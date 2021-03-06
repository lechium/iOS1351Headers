/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICAttachmentBrickImageViewV2.h>

@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2 {

	CALayer* _borderLayer;
	CALayer* _effectsLayer;

}

@property (nonatomic,retain) CALayer * borderLayer;               //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) CALayer * effectsLayer;              //@synthesize effectsLayer=_effectsLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(CALayer *)effectsLayer;
-(CALayer *)borderLayer;
-(void)setBorderLayer:(CALayer *)arg1 ;
-(void)updateSublayersBounds:(CGRect)arg1 ;
-(void)setEffectsLayer:(CALayer *)arg1 ;
@end

