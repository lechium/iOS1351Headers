/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKResize : SKAction {

	SKCResize* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)resizeByWidth:(double)arg1 height:(double)arg2 duration:(double)arg3 ;
+(id)resizeToWidth:(double)arg1 height:(double)arg2 duration:(double)arg3 ;
+(id)resizeToWidth:(double)arg1 duration:(double)arg2 ;
+(id)resizeToHeight:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

