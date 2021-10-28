/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIResourceLoader, SKUICountdownComponent, SKUIClientContext, NSString;

@interface SKUICountdownViewController : UIViewController <SKUIArtworkRequestDelegate> {

	SKUIResourceLoader* _artworkLoader;
	SKUICountdownComponent* _countdownComponent;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                       //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUICountdownComponent * countdownComponent;              //@synthesize countdownComponent=_countdownComponent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(SKUIResourceLoader *)artworkLoader;
-(id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2 ;
-(SKUICountdownComponent *)countdownComponent;
@end
