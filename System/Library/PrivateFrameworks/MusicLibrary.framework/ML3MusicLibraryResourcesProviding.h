/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ML3MusicLibraryResourcesProviding <NSObject>
@required
-(id)pathForResourceFileOrFolder:(int)arg1;
-(id)libraryContainerPathByAppendingPathComponent:(id)arg1;
-(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
-(id)libraryContainerPath;
-(id)libraryContainerRelativePath:(id)arg1;
-(id)pathForBaseLocationPath:(long long)arg1;

@end
