/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKJSDOMImplementationLS <JSExport>
@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
@required
-(long long)synchronousMode;
-(id)createLSParser:(long long)arg1 :(id)arg2;
-(id)createLSSerializer;
-(id)createLSInput;
-(long long)asynchronousMode;

@end

