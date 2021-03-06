/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {

	PLPhotoLibraryPathManager* _pathManager;

}
+(BOOL)isImportDirectoryFolderName:(id)arg1 ;
+(BOOL)isCameraDirectoryFolderName:(id)arg1 ;
-(id)init;
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1 ;
-(id)_dcimDirectory;
-(id)_DCIMFolderNameWithNumber:(long long)arg1 ;
-(id)urlForNewDCIMFolderWithFolderNumber:(long long*)arg1 ;
-(id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2 ;
@end

