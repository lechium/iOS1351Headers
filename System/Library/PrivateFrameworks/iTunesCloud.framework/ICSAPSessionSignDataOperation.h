/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation {

	NSData* _data;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)executeWithSAPContext:(id)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
@end

