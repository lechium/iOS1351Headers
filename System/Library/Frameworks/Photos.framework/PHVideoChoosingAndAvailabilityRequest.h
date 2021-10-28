/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHAvailabilityRequest.h>

@class PHResourceAvailabilityDataStoreManager, PHVideoRequestBehaviorSpec;

@interface PHVideoChoosingAndAvailabilityRequest : PHAvailabilityRequest {

	PHResourceAvailabilityDataStoreManager* _dataStoreManager;
	os_unfair_lock_s _lock;
	BOOL _wantsProgress;
	PHVideoRequestBehaviorSpec* _behaviorSpec;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) PHVideoRequestBehaviorSpec * behaviorSpec;              //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
@property (assign,nonatomic) BOOL wantsProgress;                                       //@synthesize wantsProgress=_wantsProgress - In the implementation block
-(CGSize)size;
-(void)cancel;
-(void)setWantsProgress:(BOOL)arg1 ;
-(BOOL)wantsProgress;
-(void)runDaemonSide;
-(PHVideoRequestBehaviorSpec *)behaviorSpec;
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(id)plistDictionary;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 size:(CGSize)arg3 behaviorSpec:(id)arg4 ;
-(void)abortClientSide;
-(void)_cplDownloadStatusNotification:(id)arg1 ;
-(void)_resourceURLReceivedNotification:(id)arg1 ;
-(void)_loadAdjustmentInfoFromPath:(id)arg1 intoAdditionalInfo:(id)arg2 ;
@end
