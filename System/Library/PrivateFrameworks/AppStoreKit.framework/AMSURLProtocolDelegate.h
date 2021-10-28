/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSURLProtocolDelegate <NSObject>
@optional
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)AMSURLSession:(id)arg1 task:(id)arg2 shouldFailWithServerError:(id)arg3;
-(void)AMSURLSession:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(void)AMSURLSession:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)AMSURLSession:(id)arg1 shouldFailWithServerError:(id)arg2;
-(BOOL)AMSURLSession:(id)arg1 shouldHandleAuthenticationForAccount:(id)arg2 dialogDictionary:(id)arg3;
-(BOOL)AMSURLSession:(id)arg1 shouldHandleDialogDictionary:(id)arg2;

@end
