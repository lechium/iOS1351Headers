/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LPLinkHTMLGeneratorDelegate;
@class LPMetadataProvider, LPCaptionBarPresentationProperties, NSString, LPImage, LPImagePresentationProperties, NSArray, LPVideo, UIColor, LPPointUnit, DOMElement, LPHTMLComponent, LPHTMLVideoComponent, LPLinkMetadata, NSURL, DOMDocument, LPCSSResolver, LPTheme, DOMDocumentFragment;

@interface LPLinkHTMLGenerator : NSObject {

	LPMetadataProvider* _pendingMetadataProvider;
	BOOL _mayReceiveAdditionalMetadata;
	BOOL _usesComputedPresentationProperties;
	LPCaptionBarPresentationProperties* _captionBar;
	LPCaptionBarPresentationProperties* _mediaTopCaptionBar;
	LPCaptionBarPresentationProperties* _mediaBottomCaptionBar;
	NSString* _quotedText;
	LPImage* _image;
	LPImagePresentationProperties* _imageProperties;
	NSArray* _alternateImages;
	LPVideo* _video;
	UIColor* _backgroundColor;
	LPPointUnit* _minimumRootHeight;
	DOMElement* _rootElement;
	LPHTMLComponent* _linkComponent;
	LPHTMLVideoComponent* _videoComponent;
	BOOL _everBuiltView;
	BOOL _useVariablesWhenUsingInlineStyles;
	BOOL _includeClassNamesWhenUsingInlineStyles;
	BOOL _includeDarkInterfaceInlineStyles;
	BOOL _allowsTapToLoad;
	BOOL _useInlineStyles;
	BOOL _applyCornerRadiusToLink;
	BOOL _generateEmailCompatibleMarkup;
	BOOL _isPreliminary;
	id<LPLinkHTMLGeneratorDelegate> _delegate;
	LPLinkMetadata* _metadata;
	NSURL* _URL;
	DOMDocument* _parentDocument;
	LPCSSResolver* _cssResolver;
	long long _style;
	LPTheme* _theme;

}

@property (nonatomic,readonly) DOMDocument * parentDocument;                                                                               //@synthesize parentDocument=_parentDocument - In the implementation block
@property (nonatomic,readonly) LPCSSResolver * cssResolver;                                                                                //@synthesize cssResolver=_cssResolver - In the implementation block
@property (nonatomic,readonly) long long style;                                                                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) LPTheme * theme;                                                                                            //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) BOOL isPreliminary;                                                                                         //@synthesize isPreliminary=_isPreliminary - In the implementation block
@property (nonatomic,readonly) BOOL delegateRespondsToURLForResource; 
@property (nonatomic,readonly) BOOL useFlexibleWidth; 
@property (nonatomic,readonly) BOOL hasTallMedia; 
@property (nonatomic,readonly) UIColor * backgroundColor;                                                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) LPPointUnit * rootWidth; 
@property (nonatomic,readonly) LPPointUnit * minimumRootHeight; 
@property (nonatomic,readonly) BOOL hasPendingMetadataProvider; 
@property (assign,setter=_setUseVariablesWhenUsingInlineStyles:,nonatomic) BOOL _useVariablesWhenUsingInlineStyles;                        //@synthesize useVariablesWhenUsingInlineStyles=_useVariablesWhenUsingInlineStyles - In the implementation block
@property (assign,setter=_setIncludeClassNamesWhenUsingInlineStyles:,nonatomic) BOOL _includeClassNamesWhenUsingInlineStyles;              //@synthesize includeClassNamesWhenUsingInlineStyles=_includeClassNamesWhenUsingInlineStyles - In the implementation block
@property (assign,setter=_setIncludeDarkInterfaceInlineStyles:,nonatomic) BOOL _includeDarkInterfaceInlineStyles;                          //@synthesize includeDarkInterfaceInlineStyles=_includeDarkInterfaceInlineStyles - In the implementation block
@property (assign,setter=_setAllowsTapToLoad:,nonatomic) BOOL _allowsTapToLoad;                                                            //@synthesize allowsTapToLoad=_allowsTapToLoad - In the implementation block
@property (nonatomic,readonly) BOOL _canTapToLoad; 
@property (assign,nonatomic,__weak) id<LPLinkHTMLGeneratorDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) DOMDocumentFragment * documentFragment; 
@property (assign,nonatomic) BOOL useInlineStyles;                                                                                         //@synthesize useInlineStyles=_useInlineStyles - In the implementation block
@property (assign,nonatomic) BOOL applyCornerRadiusToLink;                                                                                 //@synthesize applyCornerRadiusToLink=_applyCornerRadiusToLink - In the implementation block
@property (assign,nonatomic) BOOL generateEmailCompatibleMarkup;                                                                           //@synthesize generateEmailCompatibleMarkup=_generateEmailCompatibleMarkup - In the implementation block
@property (nonatomic,copy) LPLinkMetadata * metadata;                                                                                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                                                                           //@synthesize URL=_URL - In the implementation block
+(void)initialize;
-(id)init;
-(id<LPLinkHTMLGeneratorDelegate>)delegate;
-(void)setDelegate:(id<LPLinkHTMLGeneratorDelegate>)arg1 ;
-(NSURL *)URL;
-(long long)style;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(UIColor *)backgroundColor;
-(LPTheme *)theme;
-(DOMDocument *)parentDocument;
-(BOOL)useInlineStyles;
-(void)setUseInlineStyles:(BOOL)arg1 ;
-(BOOL)generateEmailCompatibleMarkup;
-(void)setGenerateEmailCompatibleMarkup:(BOOL)arg1 ;
-(BOOL)_useVariablesWhenUsingInlineStyles;
-(BOOL)_includeClassNamesWhenUsingInlineStyles;
-(BOOL)_includeDarkInterfaceInlineStyles;
-(LPCSSResolver *)cssResolver;
-(LPPointUnit *)rootWidth;
-(id)_URLForImage:(id)arg1 ;
-(id)initWithURL:(id)arg1 document:(id)arg2 ;
-(void)_fetchMetadata;
-(id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3 ;
-(void)_setPresentationProperties:(id)arg1 ;
-(void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2 ;
-(void)_rebuildView;
-(void)_computePresentationPropertiesFromMetadata;
-(BOOL)isPreliminary;
-(BOOL)hasTallMedia;
-(id)_createMediaTopCaptionBar;
-(id)_createMediaBottomCaptionBar;
-(id)_createRootElement;
-(void)clearCurrentLayout;
-(void)injectCSSIfNeeded;
-(id)_createMediaComponent;
-(id)_createQuoteComponent;
-(id)_createCaptionBar;
-(id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2 ;
-(id)initWithPresentationProperties:(id)arg1 document:(id)arg2 ;
-(BOOL)hasPendingMetadataProvider;
-(DOMDocumentFragment *)documentFragment;
-(void)_setAllowsTapToLoad:(BOOL)arg1 ;
-(void)_setUseVariablesWhenUsingInlineStyles:(BOOL)arg1 ;
-(void)_setIncludeClassNamesWhenUsingInlineStyles:(BOOL)arg1 ;
-(void)_setIncludeDarkInterfaceInlineStyles:(BOOL)arg1 ;
-(void)setApplyCornerRadiusToLink:(BOOL)arg1 ;
-(BOOL)delegateRespondsToURLForResource;
-(id)_URLForResource:(id)arg1 withMIMEType:(id)arg2 ;
-(BOOL)useFlexibleWidth;
-(LPPointUnit *)minimumRootHeight;
-(BOOL)_canTapToLoad;
-(void)_didFollowLink;
-(BOOL)_allowsTapToLoad;
-(BOOL)applyCornerRadiusToLink;
@end

