/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLManagedAsset, NSManagedObjectContext, PLFaceRebuildHelper;

@interface PLCPLFaceRebuildSupport : NSObject {

	PLManagedAsset* _asset;
	NSManagedObjectContext* _context;
	PLFaceRebuildHelper* _rebuildHelper;
	int _detectedFaceCount;
	int _rejectedFaceCount;
	int _hiddenFaceCount;

}
+(void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)rebuildAllFaces;
-(void)rebuildFace:(id)arg1 ;
-(void)rebuildDetectedFace:(id)arg1 ;
-(void)rebuildRejectedFace:(id)arg1 ;
-(void)rebuildHiddenFace:(id)arg1 ;
-(id)fetchDeferredFacesToRebuild;
-(id)fetchPersonForDeferredFace:(id)arg1 ;
@end

