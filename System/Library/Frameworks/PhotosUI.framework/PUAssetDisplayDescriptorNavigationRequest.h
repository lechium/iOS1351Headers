/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class NSTimer, PUBrowsingViewModel, PUAssetReference, NSDate, NSString;

@interface PUAssetDisplayDescriptorNavigationRequest : NSObject <PUBrowsingViewModelChangeObserver> {

	NSTimer* _timeOutTimer;
	BOOL _hasSeenContentChange;
	BOOL __isPerformingChanges;
	BOOL __isUpdating;
	BOOL __needsUpdateFoundTargetAssetReference;
	BOOL __needsUpdateArrived;
	BOOL __needsUpdateDone;
	BOOL __seeked;
	BOOL __arrived;
	BOOL __timedOut;
	PUBrowsingViewModel* _viewModel;
	PUAssetReference* _targetAssetReference;
	NSDate* _targetModificationDate;
	double _timeOut;
	/*^block*/id _completionHandler;
	PUAssetReference* __foundTargetAssetReference;
	SCD_Struct_PH4 _targetSeekTime;

}

@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerformingChanges;                                                  //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (assign,setter=_setUpdating:,nonatomic) BOOL _isUpdating;                                                                    //@synthesize _isUpdating=__isUpdating - In the implementation block
@property (assign,setter=_setNeedsUpdateFoundTargetAssetReference:,nonatomic) BOOL _needsUpdateFoundTargetAssetReference;              //@synthesize _needsUpdateFoundTargetAssetReference=__needsUpdateFoundTargetAssetReference - In the implementation block
@property (assign,setter=_setNeedsUpdateArrived:,nonatomic) BOOL _needsUpdateArrived;                                                  //@synthesize _needsUpdateArrived=__needsUpdateArrived - In the implementation block
@property (assign,setter=_setNeedsUpdateDone:,nonatomic) BOOL _needsUpdateDone;                                                        //@synthesize _needsUpdateDone=__needsUpdateDone - In the implementation block
@property (setter=_setFoundTargetAssetReference:,nonatomic,retain) PUAssetReference * _foundTargetAssetReference;                      //@synthesize _foundTargetAssetReference=__foundTargetAssetReference - In the implementation block
@property (assign,setter=_setSeeked:,nonatomic) BOOL _seeked;                                                                          //@synthesize _seeked=__seeked - In the implementation block
@property (assign,setter=_setArrived:,nonatomic) BOOL _arrived;                                                                        //@synthesize _arrived=__arrived - In the implementation block
@property (assign,setter=_setTimedOut:,nonatomic) BOOL _timedOut;                                                                      //@synthesize _timedOut=__timedOut - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * viewModel;                                                                          //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) PUAssetReference * targetAssetReference;                                                                  //@synthesize targetAssetReference=_targetAssetReference - In the implementation block
@property (nonatomic,retain) NSDate * targetModificationDate;                                                                          //@synthesize targetModificationDate=_targetModificationDate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 targetSeekTime;                                                                            //@synthesize targetSeekTime=_targetSeekTime - In the implementation block
@property (assign,nonatomic) double timeOut;                                                                                           //@synthesize timeOut=_timeOut - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)_needsUpdate;
-(BOOL)_isUpdating;
-(BOOL)_arrived;
-(BOOL)_timedOut;
-(void)_invalidateDone;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)_isPerformingChanges;
-(void)_setNeedsUpdate;
-(PUBrowsingViewModel *)viewModel;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)_updateIfNeeded;
-(void)_updateSeeking;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_assertInsideChangeBlock;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(void)setTargetAssetReference:(PUAssetReference *)arg1 ;
-(void)setTargetModificationDate:(NSDate *)arg1 ;
-(void)setTargetSeekTime:(SCD_Struct_PH4)arg1 ;
-(void)setTimeOut:(double)arg1 ;
-(void)_updateCurrentAssetReference;
-(void)_setFoundTargetAssetReference:(id)arg1 ;
-(void)_setSeeked:(BOOL)arg1 ;
-(void)_setTimedOut:(BOOL)arg1 ;
-(void)_setArrived:(BOOL)arg1 ;
-(void)_assertInsideUpdate;
-(void)_invalidateFoundTargetAssetReference;
-(void)_updateFoundTargetAssetReferenceIfNeeded;
-(void)_invalidateArrived;
-(void)_updateArrivedIfNeeded;
-(void)_updateDoneIfNeeded;
-(void)_finishRequest;
-(void)_cleanUpWhenDone;
-(id)_navigationRequestError;
-(id)_infoMessage;
-(PUAssetReference *)targetAssetReference;
-(NSDate *)targetModificationDate;
-(SCD_Struct_PH4)targetSeekTime;
-(double)timeOut;
-(void)_setUpdating:(BOOL)arg1 ;
-(BOOL)_needsUpdateFoundTargetAssetReference;
-(void)_setNeedsUpdateFoundTargetAssetReference:(BOOL)arg1 ;
-(BOOL)_needsUpdateArrived;
-(void)_setNeedsUpdateArrived:(BOOL)arg1 ;
-(BOOL)_needsUpdateDone;
-(void)_setNeedsUpdateDone:(BOOL)arg1 ;
-(PUAssetReference *)_foundTargetAssetReference;
-(BOOL)_seeked;
@end

