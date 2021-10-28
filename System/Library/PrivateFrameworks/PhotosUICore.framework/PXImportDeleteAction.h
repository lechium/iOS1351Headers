/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXImportConcurrentAction.h>

@class NSArray, NSMutableArray, NSString, PXImportController, NSProgress;

@interface PXImportDeleteAction : PXImportConcurrentAction {

	NSArray* _assets;
	NSMutableArray* _removedAssets;
	BOOL _userInitiatedDelete;
	NSString* _sessionUuid;
	PXImportController* _importController;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSString * sessionUuid;                 //@synthesize sessionUuid=_sessionUuid - In the implementation block
@property (__weak) PXImportController * importController;              //@synthesize importController=_importController - In the implementation block
@property (assign) BOOL userInitiatedDelete;                           //@synthesize userInitiatedDelete=_userInitiatedDelete - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)finish;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)performAction;
-(id)initWithAssets:(id)arg1 ;
-(BOOL)canDeleteAssets;
-(void)_preAction;
-(void)_performRealAction;
-(void)_performMockAction;
-(void)didRemove:(id)arg1 ;
-(void)startObservingDeleteProgress;
-(void)stopObservingDeleteProgress;
-(void)sendActionProgress:(double)arg1 ;
-(NSString *)sessionUuid;
-(PXImportController *)importController;
-(void)setImportController:(PXImportController *)arg1 ;
-(BOOL)userInitiatedDelete;
-(void)setUserInitiatedDelete:(BOOL)arg1 ;
@end
