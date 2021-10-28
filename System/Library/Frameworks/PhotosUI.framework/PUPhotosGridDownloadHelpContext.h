/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHResourceDownloadRequest, NSString;

@interface PUPhotosGridDownloadHelpContext : NSObject {

	PHResourceDownloadRequest* _resourceDownloadRequest;
	NSString* _gridProgressIdentifier;
	/*^block*/id _downloadHandler;

}

@property (nonatomic,retain) PHResourceDownloadRequest * resourceDownloadRequest;              //@synthesize resourceDownloadRequest=_resourceDownloadRequest - In the implementation block
@property (nonatomic,retain) NSString * gridProgressIdentifier;                                //@synthesize gridProgressIdentifier=_gridProgressIdentifier - In the implementation block
@property (nonatomic,copy) id downloadHandler;                                                 //@synthesize downloadHandler=_downloadHandler - In the implementation block
-(void)setDownloadHandler:(id)arg1 ;
-(PHResourceDownloadRequest *)resourceDownloadRequest;
-(void)setResourceDownloadRequest:(PHResourceDownloadRequest *)arg1 ;
-(NSString *)gridProgressIdentifier;
-(void)setGridProgressIdentifier:(NSString *)arg1 ;
-(id)downloadHandler;
@end
