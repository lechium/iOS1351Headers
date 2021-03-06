/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXImportSourcesManagerChangeObserver.h>

@class PHPhotoLibrary, PXImportSourcesManager, NSArray, NSString;

@interface PXImportSourceDataSectionManager : PXDataSectionManager <PXImportSourcesManagerChangeObserver> {

	PHPhotoLibrary* _photoLibrary;
	PXImportSourcesManager* _importSourcesManager;
	NSArray* _importSources;

}

@property (nonatomic,readonly) PXImportSourcesManager * importSourcesManager;              //@synthesize importSourcesManager=_importSourcesManager - In the implementation block
@property (nonatomic,retain) NSArray * importSources;                                      //@synthesize importSources=_importSources - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(id)createDataSection;
-(NSArray *)importSources;
-(void)importSourcesManager:(id)arg1 didUpdateImportSource:(id)arg2 ;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(PXImportSourcesManager *)importSourcesManager;
-(void)setImportSources:(NSArray *)arg1 ;
@end

