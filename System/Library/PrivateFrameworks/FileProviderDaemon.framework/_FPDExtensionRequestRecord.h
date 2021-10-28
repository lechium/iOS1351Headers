/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FPXPCAutomaticErrorProxy, NSDate;

@interface _FPDExtensionRequestRecord : NSObject {

	FPXPCAutomaticErrorProxy* _proxy;
	SEL _selector;
	NSDate* _timeout;

}

@property (__weak) FPXPCAutomaticErrorProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) SEL selector;                        //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) NSDate * timeout;                    //@synthesize timeout=_timeout - In the implementation block
-(id)description;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(NSDate *)timeout;
-(void)setTimeout:(NSDate *)arg1 ;
-(void)setProxy:(FPXPCAutomaticErrorProxy *)arg1 ;
-(FPXPCAutomaticErrorProxy *)proxy;
@end
