/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoControlItemAnimating.h>

@protocol AVPlayerViewControllerAnimationCoordinator;
@class NSMutableArray, NSString;

@interface SVVideoControlItemAnimationCoordinator : NSObject <SVVideoControlItemAnimating> {

	id<AVPlayerViewControllerAnimationCoordinator> _coordinator;
	NSMutableArray* _animationBlocks;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,readonly) id<AVPlayerViewControllerAnimationCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * animationBlocks;                                        //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                                       //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)animationBlocks;
-(NSMutableArray *)completionBlocks;
-(id<AVPlayerViewControllerAnimationCoordinator>)coordinator;
-(void)animateWithAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithAnimationCoordinator:(id)arg1 ;
@end

