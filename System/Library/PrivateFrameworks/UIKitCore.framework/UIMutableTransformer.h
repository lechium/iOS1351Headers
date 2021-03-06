/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITransformer.h>

@protocol UIMutableTransformerDelegate;
@interface UIMutableTransformer : UITransformer {

	id<UIMutableTransformerDelegate> _delegate;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<UIMutableTransformerDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIMutableTransformerDelegate>)_delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(void)_ensureTransformsStructuresExists;
-(void)_updateTransform;
-(void)addTransform:(id)arg1 reason:(id)arg2 ;
-(void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3 ;
-(void)removeTransform:(id)arg1 ;
-(void)removeAll;
@end

