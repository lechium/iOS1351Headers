/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLComponents;

@interface _TVRTapToRadarManager : NSObject {

	NSURLComponents* _urlComponents;

}

@property (nonatomic,retain) NSURLComponents * urlComponents;              //@synthesize urlComponents=_urlComponents - In the implementation block
+(id)_captureScreenshot;
+(id)bugImage;
+(void)fileRadarWithTitle:(id)arg1 description:(id)arg2 ;
-(NSURLComponents *)urlComponents;
-(void)setUrlComponents:(NSURLComponents *)arg1 ;
-(void)fileRadar;
@end

