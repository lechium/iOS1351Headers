/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBScenePlaceholderContentViewProvider.h>

@protocol SBScenePlaceholderContentViewProviderDelegate;
@class NSString;

@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject <SBScenePlaceholderContentViewProvider> {

	id<SBScenePlaceholderContentViewProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBScenePlaceholderContentViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBScenePlaceholderContentViewProviderDelegate>)delegate;
-(void)setDelegate:(id<SBScenePlaceholderContentViewProviderDelegate>)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2 ;
-(void)_snapshotsDidChange:(id)arg1 ;
-(id)_loadLiveXIBViewForApplication:(id)arg1 ;
-(unsigned long long)_contentTypeToSearchFromSceneHandle:(id)arg1 withContext:(id)arg2 ;
-(id)_contentViewFromSceneHandle:(id)arg1 displayConfiguration:(id)arg2 orientation:(long long)arg3 snapshot:(id)arg4 size:(CGSize)arg5 statusBarDescriptor:(id)arg6 ;
-(CGSize)_naturalSizeForOrientation:(long long)arg1 referenceSize:(CGSize)arg2 ;
-(BOOL)_checkApplicationRestorationState:(id)arg1 useSnapshot:(BOOL*)arg2 ;
@end

