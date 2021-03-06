/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookUtility/BUZipWriter.h>

@protocol BURandomWriteChannel;
@interface BUZipFileWriter : BUZipWriter {

	id<BURandomWriteChannel> _writeChannel;
	/*^block*/id _writeChannelCompletionHandler;

}
+(void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(/*^block*/id)arg5 ;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)prepareWriteChannelWithCloseCompletionHandler:(/*^block*/id)arg1 ;
-(void)truncateToOffsetImpl:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithZipFileArchive:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)copyRemainingEntries:(id)arg1 fromArchive:(id)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithZipFileArchive:(id)arg1 error:(id*)arg2 ;
-(void)copyEntriesFromZipFileWriter:(id)arg1 readingFromURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

