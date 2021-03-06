/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBSceneView.h>

@class SBApplicationSceneHandle, SBApplication;

@interface SBApplicationSceneView : SBSceneView

@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) SBApplication * application; 
-(SBApplication *)application;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4 ;
-(id)deviceApplicationSceneView;
@end

