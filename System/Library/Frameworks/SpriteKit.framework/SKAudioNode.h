/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioNode;

@interface SKAudioNode : SKNode <NSSecureCoding> {

	SKCAudioNode* _skcAudioNode;
	BOOL _autoplayLooped;
	BOOL _positional;

}

@property (nonatomic,retain) AVAudioNode * avAudioNode; 
@property (assign,nonatomic) BOOL autoplayLooped;                              //@synthesize autoplayLooped=_autoplayLooped - In the implementation block
@property (assign,getter=isPositional,nonatomic) BOOL positional;              //@synthesize positional=_positional - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_audioURLWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)commonInit;
-(id)audioURL;
-(void)setAudioURL:(id)arg1 ;
-(id)initWithAVAudioNode:(id)arg1 ;
-(id)audioFile;
-(void)setPositional:(BOOL)arg1 ;
-(BOOL)isPositional;
-(id)initWithFileNamed:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setAutoplayLooped:(BOOL)arg1 ;
-(void)setAudioFileName:(id)arg1 ;
-(id)audioFileName;
-(void)_setAudioName:(id)arg1 bundle:(id)arg2 ;
-(void)setAvAudioNode:(AVAudioNode *)arg1 ;
-(BOOL)autoplayLooped;
-(id)initWithFileNamed:(id)arg1 bundle:(id)arg2 ;
-(AVAudioNode *)avAudioNode;
-(void)_playLooped;
-(void)_connectToScene:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
@end

