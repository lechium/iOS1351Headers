/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariShared/SafariShared-Structs.h>
@interface _WBSJSCallback : NSObject {

	OpaqueJSValueRef _callbackFunction;
	JSRetainPtr<OpaqueJSContext *>* _globalContext;

}

@property (nonatomic,readonly) id callbackHandler; 
-(void)dealloc;
-(id)initWithCallbackFunction:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)callbackHandler;
@end
