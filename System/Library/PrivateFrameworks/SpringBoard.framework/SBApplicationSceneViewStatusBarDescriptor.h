/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SBApplicationSceneViewStatusBarDescriptor : NSObject {

	BOOL _forceHidden;

}

@property (assign,getter=isForcedHidden,nonatomic) BOOL forceHidden;              //@synthesize forceHidden=_forceHidden - In the implementation block
+(id)statusBarDescriptorWithForceHidden:(BOOL)arg1 ;
-(id)debugDescription;
-(id)initWithForceHidden:(BOOL)arg1 ;
-(BOOL)isForcedHidden;
-(void)setForceHidden:(BOOL)arg1 ;
@end
