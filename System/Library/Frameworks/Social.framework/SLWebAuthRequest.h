/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SLWebAuthRequest <NSObject>
@optional
+(id)authCodeFromURLRequest:(id)arg1;
+(id)authCodeFromWebPageTitle:(id)arg1;
+(id)authCodeFromRedirectURL:(id)arg1;

@required
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5 codeChallenge:(id)arg6;
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+(id)requestForURL:(id)arg1;
+(void)clearCookiesFromStorage:(id)arg1 authRequestURL:(id)arg2;
+(id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+(BOOL)urlPageWillContainAuthorizationCode:(id)arg1;

@end
