/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VEiOSCommonDelegate : NSObject
+(id)mainBundle;
+(BOOL)fullScreenPlaybackOnExternalDisplay;
+(void)setDelegateSubclass:(Class)arg1 ;
+(BOOL)allowSaving;
+(BOOL)ignoreReadOnly;
+(id)currentProject;
+(void)nukeCaches;
+(id)activeCoreProjectViewController;
+(BOOL)shouldPlaySlowMoWhenPreviewing;
+(unsigned long long)playbackFrameRateMode;
+(unsigned long long)exportFrameRateMode;
+(float)duckingAmount;
+(BOOL)forceTeardownDisplayOnProjectChange;
+(BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+(long long)playbackPixelCount;
+(void)setCurrentProject:(id)arg1 ;
+(void)notifyCPVCProjectChanged;
+(float)videoScale;
+(void)setVideoScale:(float)arg1 ;
+(BOOL)furtherConstrainVideoScale;
+(void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg1 ;
@end
