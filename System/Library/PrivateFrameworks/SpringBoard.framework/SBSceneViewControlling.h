/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SBSceneHandle, UIView;


@protocol SBSceneViewControlling <NSObject>
@property (nonatomic,readonly) SBSceneHandle * sceneHandle; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@required
-(void)invalidate;
-(UIView *)customContentView;
-(long long)displayMode;
-(id)newSnapshot;
-(SBSceneHandle *)sceneHandle;
-(void)setCustomContentView:(id)arg1;
-(void)setPlaceholderContentContext:(id)arg1;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2;
-(long long)contentInterfaceOrientation;
-(id)newSnapshotView;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
-(CGSize)contentReferenceSize;

@end

