/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WebPolicyDelegate <NSObject>
@optional
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
-(void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;

@end
