/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask {

	NSURL* _downloadedFileURL;

}
-(id)downloadedFileURL;
-(void)didFinishDownloadingToURL:(id)arg1 ;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
@end

