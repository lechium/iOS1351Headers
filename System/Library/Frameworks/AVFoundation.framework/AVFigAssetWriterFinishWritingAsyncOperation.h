/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:52 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(BOOL)isAsynchronous;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)didEnterTerminalState;
@end

