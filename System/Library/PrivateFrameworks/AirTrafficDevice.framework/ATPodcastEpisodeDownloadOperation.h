/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICURLSession, ICURLRequest;

@interface ATPodcastEpisodeDownloadOperation : ATStoreDownloadOperation {

	ICURLSession* _session;
	ICURLRequest* _request;

}
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(id)_urlSession;
-(id)_podcastsAppBundleID;
@end
