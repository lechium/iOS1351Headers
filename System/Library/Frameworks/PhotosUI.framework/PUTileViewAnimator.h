/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUTileAnimator.h>

@class NSMapTable;

@interface PUTileViewAnimator : PUTileAnimator {

	NSMapTable* __synchronizedAnimationGroupsByTransition;

}

@property (nonatomic,readonly) NSMapTable * _synchronizedAnimationGroupsByTransition;              //@synthesize _synchronizedAnimationGroupsByTransition=__synchronizedAnimationGroupsByTransition - In the implementation block
-(id)init;
-(void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2 ;
-(void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2 ;
-(void)transition:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)_performAnimations:(/*^block*/id)arg1 withOptions:(id)arg2 ;
-(NSMapTable *)_synchronizedAnimationGroupsByTransition;
@end

