/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject {

	NSDictionary* _additionalPayload;
	NSURLRequest* _continuationRequest;

}

@property (nonatomic,copy) NSDictionary * additionalPayload;                //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,copy) NSURLRequest * continuationRequest;              //@synthesize continuationRequest=_continuationRequest - In the implementation block
-(void)setContinuationRequest:(NSURLRequest *)arg1 ;
-(NSDictionary *)additionalPayload;
-(void)setAdditionalPayload:(NSDictionary *)arg1 ;
-(NSURLRequest *)continuationRequest;
@end

