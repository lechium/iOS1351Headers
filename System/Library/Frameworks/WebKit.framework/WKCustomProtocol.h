/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface WKCustomProtocol : NSURLProtocol {

	unsigned long long _customProtocolID;
	RetainPtr<__CFRunLoop *>* _initializationRunLoop;

}

@property (nonatomic,readonly) unsigned long long customProtocolID;              //@synthesize customProtocolID=_customProtocolID - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef initializationRunLoop; 
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(unsigned long long)customProtocolID;
-(CFRunLoopRef)initializationRunLoop;
@end
