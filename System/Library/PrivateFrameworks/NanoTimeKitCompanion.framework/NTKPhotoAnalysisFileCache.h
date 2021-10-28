/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKPhotoAnalysisFileCache : NSObject {

	NSMutableDictionary* _cache;
	int _sequenceNumber;
	BOOL _cacheDirty;
	NTKTaskScheduler* _taskScheduler;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_load;
-(BOOL)_save;
-(id)photoAnalysisForIdentifier:(id)arg1 ;
-(void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_dirtyCache;
@end
