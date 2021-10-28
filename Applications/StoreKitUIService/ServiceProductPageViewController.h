//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKProductPageRemoteViewControllerDelegate-Protocol.h"
#import "ServiceProductPageLegacyViewControllerDelegate-Protocol.h"
#import "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSDictionary, NSExtension, NSMutableArray, NSNumber, NSString, SSLookupItem, SSLookupRequest, ServiceCardContainerViewController, ServiceProductPageLegacyViewController, ServiceResilientRemoteViewContainerViewController, UINavigationController;
@protocol NSCopying;

@interface ServiceProductPageViewController : UIViewController <ServiceProductPageLegacyViewControllerDelegate, SKProductPageRemoteViewControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    ServiceProductPageLegacyViewController *_legacyProductPageViewController;	// 8 = 0x8
    _Bool _preview;	// 16 = 0x10
    SSLookupRequest *_lookupRequest;	// 24 = 0x18
    _Bool _isRemoteViewControllerReady;	// 32 = 0x20
    _Bool _isAskToBuy;	// 33 = 0x21
    UIViewController *_errorViewController;	// 40 = 0x28
    UINavigationController *_placeholderViewController;	// 48 = 0x30
    NSNumber *_desiredPresentationStyle;	// 56 = 0x38
    SSLookupItem *_item;	// 64 = 0x40
    NSDictionary *_parameters;	// 72 = 0x48
    NSMutableArray *_configurationActions;	// 80 = 0x50
    ServiceResilientRemoteViewContainerViewController *_remoteContainerViewController;	// 88 = 0x58
    CDUnknownBlockType _remoteLoadDidFinishCompletion;	// 96 = 0x60
    NSExtension *_extension;	// 104 = 0x68
    id <NSCopying> _extensionRequest;	// 112 = 0x70
    ServiceCardContainerViewController *_cardContainerViewController;	// 120 = 0x78
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x00000001000182ac
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100018290
+ (id)_exportedInterface;	// IMP=0x0000000100018274
- (void).cxx_destruct;	// IMP=0x000000010001dd08
@property(retain, nonatomic) ServiceCardContainerViewController *cardContainerViewController; // @synthesize cardContainerViewController=_cardContainerViewController;
@property(nonatomic) _Bool isAskToBuy; // @synthesize isAskToBuy=_isAskToBuy;
@property(retain, nonatomic) id <NSCopying> extensionRequest; // @synthesize extensionRequest=_extensionRequest;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) CDUnknownBlockType remoteLoadDidFinishCompletion; // @synthesize remoteLoadDidFinishCompletion=_remoteLoadDidFinishCompletion;
@property(retain, nonatomic) ServiceResilientRemoteViewContainerViewController *remoteContainerViewController; // @synthesize remoteContainerViewController=_remoteContainerViewController;
@property(copy, nonatomic) NSMutableArray *configurationActions; // @synthesize configurationActions=_configurationActions;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) SSLookupItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSNumber *desiredPresentationStyle; // @synthesize desiredPresentationStyle=_desiredPresentationStyle;
@property(nonatomic) _Bool isRemoteViewControllerReady; // @synthesize isRemoteViewControllerReady=_isRemoteViewControllerReady;
@property(retain, nonatomic) UINavigationController *placeholderViewController; // @synthesize placeholderViewController=_placeholderViewController;
@property(retain, nonatomic) UIViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
- (_Bool)_shouldLayoutAsOverlayWithTraitCollection:(id)arg1;	// IMP=0x000000010001dac0
- (void)_sendUnentitledErrorResponse;	// IMP=0x000000010001d85c
- (void)_sendUnavailableErrorResponse;	// IMP=0x000000010001d798
- (void)_sendDidFinishWithResult:(long long)arg1;	// IMP=0x000000010001d654
- (_Bool)_isClientEntitled;	// IMP=0x000000010001d618
- (id)_clientViewControllerProxy;	// IMP=0x000000010001d60c
- (void)_executeConfigurationActionsWithServiceProductPage:(id)arg1;	// IMP=0x000000010001d4b0
- (void)_addConfigurationAction:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d3a4
- (void)_setupChildViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001d028
- (id)_setupLegacyProductPageViewController;	// IMP=0x000000010001ced0
- (id)_setupErrorViewControllerWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001cde8
- (void)_didReceiveRemoteViewController:(id)arg1;	// IMP=0x000000010001cce8
- (void)_requestRemoteViewControllerForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c238
- (void)_loadProductWithIdentifier:(id)arg1 parameters:(id)arg2 fallback:(CDUnknownBlockType)arg3;	// IMP=0x000000010001bae8
- (void)_cancelButtonAction:(id)arg1;	// IMP=0x000000010001bab0
- (void)_backgroundViewAction:(id)arg1;	// IMP=0x000000010001ba78
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x000000010001b9cc
- (void)setShowsStoreButton:(id)arg1;	// IMP=0x000000010001b788
- (void)setShowsRightBarButton:(id)arg1;	// IMP=0x000000010001b544
- (void)setPresentationStyle:(id)arg1;	// IMP=0x000000010001b3b0
- (void)setPreview:(id)arg1;	// IMP=0x000000010001b1a0
- (void)setScriptContextDictionary:(id)arg1;	// IMP=0x000000010001afa0
- (void)setRightBarButtonTitle:(id)arg1;	// IMP=0x000000010001ada0
- (void)setPromptString:(id)arg1;	// IMP=0x000000010001aba0
- (void)setProductPageStyle:(id)arg1;	// IMP=0x000000010001a9a0
- (void)setClientIdentifier:(id)arg1;	// IMP=0x000000010001a7a0
- (void)setCancelButtonTitle:(id)arg1;	// IMP=0x000000010001a5a0
- (void)setAskToBuy:(id)arg1;	// IMP=0x000000010001a334
- (void)setAffiliateIdentifier:(id)arg1;	// IMP=0x000000010001a134
- (void)setAdditionalBuyParameters:(id)arg1;	// IMP=0x0000000100019f34
- (void)loadProductWithURL:(id)arg1;	// IMP=0x0000000100019a18
- (void)loadProductWithRequest:(id)arg1;	// IMP=0x00000001000196e8
- (void)loadProductWithParameters:(id)arg1;	// IMP=0x000000010001927c
- (void)loadProductWithPageDictionary:(id)arg1;	// IMP=0x00000001000191b0
- (void)loadPlaceholder;	// IMP=0x0000000100018f00
- (void)finishStarRatingPromptWithRating:(id)arg1;	// IMP=0x0000000100018e54
- (void)dismissViewControllerAnimated:(id)arg1;	// IMP=0x0000000100018d4c
- (void)finishImmediately;	// IMP=0x0000000100018ce4
- (void)applicationWillEnterForeground;	// IMP=0x0000000100018ccc
- (void)applicationDidEnterBackground;	// IMP=0x0000000100018cb4
- (_Bool)serviceProductPageLegacyViewControllerIsEntitled;	// IMP=0x0000000100018ca8
- (void)serviceProductPageLegacyViewControllerFinishWithResult:(long long)arg1;	// IMP=0x0000000100018c9c
- (id)serviceProductPageLegacyViewControllerClientProxy;	// IMP=0x0000000100018c90
- (void)productPageRemoteViewControllerLoadDidFinish:(id)arg1;	// IMP=0x0000000100018b64
- (void)productPageRemoteViewController:(id)arg1 finishWithResult:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100018b3c
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100018ad4
- (void)_willAppearInRemoteViewController;	// IMP=0x0000000100018834
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000100018824
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000187f0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000186b4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100018478
- (void)loadView;	// IMP=0x00000001000183c4
- (void)dealloc;	// IMP=0x0000000100018344
- (id)init;	// IMP=0x00000001000182b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
