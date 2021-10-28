/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/STAceObjectHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface STAceRecorder : NSObject <STAceObjectHandler> {

	NSMutableDictionary* _timestampToAceObjs;
	NSMutableArray* _speechLogs;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)_startRecording;
-(void)_finishRecording;
-(void)handleClientCommand:(id)arg1 ;
-(void)handleServerCommand:(id)arg1 ;
-(BOOL)_createDirectoryIfNeededWithBaseURL:(id)arg1 ;
-(id)_libraryURLWithBaseURL:(id)arg1 date:(id)arg2 fileName:(id)arg3 ;
@end
