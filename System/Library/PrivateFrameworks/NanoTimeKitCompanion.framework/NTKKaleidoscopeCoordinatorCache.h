/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>

@class NTKFaceCollection, NTKTaskScheduler, NSMutableArray, NSMutableDictionary, NSString;

@interface NTKKaleidoscopeCoordinatorCache : NSObject <NTKFaceCollectionObserver> {

	NTKFaceCollection* _libraryCollection;
	NTKTaskScheduler* _taskScheduler;
	NSMutableArray* _pathsToTouch;
	NSMutableDictionary* _pathsToWrite;
	unsigned _isCleanupScheduled : 1;
	unsigned long long _kaleidoscopeFaceCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollectionDidReset:(id)arg1 ;
-(void)setLibraryCollection:(id)arg1 ;
-(id)provideAtlasBacking:(id)arg1 uuid:(id)arg2 uuidLuma:(id)arg3 uuidChroma:(id)arg4 ;
-(void)_computeKaleidoscopeFaceCount;
@end
