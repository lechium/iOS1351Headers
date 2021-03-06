/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKUIURLResolverDelegate <NSObject>
@optional
-(BOOL)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
-(void)URLResolver:(id)arg1 didFinishWithResult:(BOOL)arg2;

@required
-(id)presentationViewControllerForURLResolver:(id)arg1;
-(void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
-(void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;

@end

