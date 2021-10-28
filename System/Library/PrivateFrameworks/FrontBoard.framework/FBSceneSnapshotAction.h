/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSSceneSnapshotAction.h>

@class NSString, RBSAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {

	NSString* _sceneID;
	RBSAssertion* _assertion;

}

@property (nonatomic,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(void)dealloc;
-(NSString *)sceneID;
-(id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
@end
