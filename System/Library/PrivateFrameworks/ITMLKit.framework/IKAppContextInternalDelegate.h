/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKAppContextInternalDelegate <IKAppContextDelegate>
@optional
-(BOOL)appContext:(id)arg1 shouldStartWithScript:(id)arg2 scriptURL:(id)arg3 loadedFromFallback:(BOOL)arg4;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3;

@required
-(BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1;

@end

