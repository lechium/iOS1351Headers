/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableData;

@interface _HKAppImageManagerContainer : NSObject {

	/*^block*/id _completionHandler;
	NSString* _urlString;
	NSMutableData* _data;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * urlString;                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
@end
