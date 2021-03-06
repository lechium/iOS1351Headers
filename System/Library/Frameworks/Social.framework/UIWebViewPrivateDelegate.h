/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIWebViewPrivateDelegate
@optional
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2;
-(id)uiWebView:(id)arg1 previewViewControllerForURL:(id)arg2;
-(void)uiWebView:(id)arg1 willPresentPreview:(id)arg2;
-(void)uiWebView:(id)arg1 didDismissPreview:(id)arg2 committing:(BOOL)arg3;
-(void)uiWebView:(id)arg1 commitPreview:(id)arg2;
-(id)uiWebView:(id)arg1 presentationSnapshotForPreview:(id)arg2;
-(id)uiWebView:(id)arg1 presentationRectsForPreview:(id)arg2;
-(void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
-(void)uiWebView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
-(void)uiWebView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
-(void)uiWebView:(id)arg1 printFrameView:(id)arg2;
-(void)uiWebViewSupportedOrientationsUpdated:(id)arg1;
-(void)uiWebView:(id)arg1 didCommitLoadForFrame:(id)arg2;
-(void)uiWebView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
-(id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
-(void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
-(void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
-(void)uiWebViewClose:(id)arg1;
-(void)uiWebView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
-(id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
-(BOOL)uiWebView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;

@end

