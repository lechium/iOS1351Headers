/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver> {

	/*^block*/id _didFinishDownloadHandler;
	/*^block*/id _didFinishPurchaseHandler;
	MPStoreDownload* _download;

}

@property (nonatomic,copy) id didFinishDownloadHandler;                 //@synthesize didFinishDownloadHandler=_didFinishDownloadHandler - In the implementation block
@property (nonatomic,copy) id didFinishPurchaseHandler;                 //@synthesize didFinishPurchaseHandler=_didFinishPurchaseHandler - In the implementation block
@property (nonatomic,readonly) MPStoreDownload * download;              //@synthesize download=_download - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPStoreDownload *)download;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(id)initWithDownload:(id)arg1 ;
-(id)didFinishDownloadHandler;
-(void)setDidFinishDownloadHandler:(id)arg1 ;
-(id)didFinishPurchaseHandler;
-(void)setDidFinishPurchaseHandler:(id)arg1 ;
@end
