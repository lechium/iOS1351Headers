/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLLibraryServicesManager, PLPhotoLibrary;

@interface PLAbstractLibraryServicesManagerService : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;

}

@property (nonatomic,readonly) PLLibraryServicesManager * libraryServicesManager;              //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
-(PLPhotoLibrary *)photoLibrary;
-(PLLibraryServicesManager *)libraryServicesManager;
-(id)initWithLibraryServicesManager:(id)arg1 ;
@end

