/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICUserNotificationContext : NSObject {

	/*^block*/id _completionHandler;
	CFRunLoopSourceRef _runLoopSourceRef;

}

@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSourceRef;              //@synthesize runLoopSourceRef=_runLoopSourceRef - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)clearRunLoop;
-(CFRunLoopSourceRef)runLoopSourceRef;
-(void)setRunLoopSourceRef:(CFRunLoopSourceRef)arg1 ;
@end
