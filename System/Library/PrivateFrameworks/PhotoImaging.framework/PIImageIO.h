/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoImaging/PhotoImaging-Structs.h>
@interface PIImageIO : NSObject
+(BOOL)writeImage:(id)arg1 fileURL:(id)arg2 ;
+(BOOL)writeCGImage:(CGImageRef)arg1 fileURL:(id)arg2 ;
+(BOOL)writeCGImage:(CGImageRef)arg1 fileURL:(id)arg2 options:(id)arg3 ;
+(id)writeImage:(id)arg1 toTemporaryDirectoryWithBasename:(id)arg2 ;
+(id)writeImage:(id)arg1 toDirectoryAtPath:(id)arg2 withBasename:(id)arg3 ;
@end

