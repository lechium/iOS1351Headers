/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPCQueueControllerDataSource <MPShuffleableSectionedIdentifierListDataSource>
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@optional
-(void)itemDidBeginPlayback:(id)arg1;
-(BOOL)canSkipItem:(id)arg1;
-(BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;
-(BOOL)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
-(void)loadAdditionalItemsForSection:(id)arg1 completion:(/*^block*/id)arg2;
-(id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;
-(id)firstItemIntersectingIdentifierSet:(id)arg1;

@required
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2;
-(id)itemForItem:(id)arg1 inSection:(id)arg2;
-(BOOL)containsLiveStream;
-(BOOL)containsTransportableContent;

@end

