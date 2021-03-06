/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBTransientOverlayTransitionContextProviding.h>

@class NSMutableArray, NSString;

@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding> {

	BOOL _didPerformAlongsideTransitions;
	BOOL _isCompleted;
	NSMutableArray* _transitionBlocks;
	NSMutableArray* _transitionCompletionBlocks;
	BOOL _transitionCompletedSuccessfully;
	BOOL animated;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeTransition:(BOOL)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)performAlongsideTransitions;
-(void)transitionAlongsideUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

