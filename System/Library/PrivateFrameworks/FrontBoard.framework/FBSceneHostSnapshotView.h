/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FBSceneHostSnapshotView.h>
@class FBSceneSnapshot;


@protocol FBSceneHostSnapshotView <NSObject>
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot; 
@property (nonatomic,retain,readonly) id IOSurface; 
@required
-(id)IOSurface;
-(FBSceneSnapshot *)sceneSnapshot;

@end


@class FBSceneSnapshot, NSString;

@interface FBSceneHostSnapshotView : UIView <FBSceneHostSnapshotView> {

	FBSceneSnapshot* _snapshot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) FBSceneSnapshot * sceneSnapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain,readonly) id IOSurface; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)IOSurface;
-(FBSceneSnapshot *)sceneSnapshot;
-(id)_initWithSnapshot:(id)arg1 ;
@end
