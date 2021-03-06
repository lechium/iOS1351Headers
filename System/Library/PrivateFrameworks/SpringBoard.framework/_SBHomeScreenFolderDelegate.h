/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBFolderControllerDelegate;
@interface _SBHomeScreenFolderDelegate : NSObject {

	id<SBFolderControllerDelegate> _forwardingTarget;

}

@property (nonatomic,retain) id<SBFolderControllerDelegate> forwardingTarget;              //@synthesize forwardingTarget=_forwardingTarget - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)backgroundViewForDockForRootFolderController:(id)arg1 ;
-(id<SBFolderControllerDelegate>)forwardingTarget;
-(void)setForwardingTarget:(id<SBFolderControllerDelegate>)arg1 ;
@end

