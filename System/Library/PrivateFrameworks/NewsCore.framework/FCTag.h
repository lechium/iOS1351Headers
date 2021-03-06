/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCTagStocksFields.h>
#import <libobjc.A.dylib/FCTagProviding.h>
#import <libobjc.A.dylib/FCChannelProviding.h>
#import <libobjc.A.dylib/FCSectionProviding.h>
#import <libobjc.A.dylib/FCTopicProviding.h>
#import <libobjc.A.dylib/FCFeedTheming.h>

@class NSString, NSDate, FCAssetHandle, FCColor, NSArray, NTPBPublisherPaidDescriptionStrings, FCPaywallConfiguration, NSData, FCSectionSupergroupKnobs, FCTagBanner, FCTextInfo, FCHeadlineTemplate, FCInterestToken, NTPBFeedConfiguration, NTPBTagRecord;

@interface FCTag : NSObject <FCTagStocksFields, FCTagProviding, FCChannelProviding, FCSectionProviding, FCTopicProviding, FCFeedTheming> {

	BOOL _isPublic;
	BOOL _isDeprecated;
	BOOL _isExplicitContent;
	BOOL _isNotificationEnabled;
	BOOL _publisherPaidLeakyPaywallOptOut;
	BOOL _publisherPaidWebAccessOptIn;
	BOOL _hideAccessoryText;
	BOOL _isHidden;
	BOOL _isRealTimeTrackingEnabled;
	BOOL _isArticleReadCountReportingEnabled;
	NSString* _identifier;
	NSString* _versionKey;
	NSString* _name;
	NSString* _nameCompact;
	unsigned long long _tagType;
	long long _contentProvider;
	NSString* _primaryAudience;
	NSString* _replacementID;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	long long _score;
	long long _minimumNewsVersion;
	NSString* _subtitle;
	NSArray* _currentIssueIDs;
	NSString* _backIssuesListID;
	NSString* _language;
	NSString* _magazineGenre;
	FCAssetHandle* _nameImageAssetHandle;
	FCAssetHandle* _nameImageCompactAssetHandle;
	double _bannerImageScale;
	double _bannerImageBaselineOffsetPercentage;
	FCAssetHandle* _nameImageForDarkBackgroundAssetHandle;
	FCAssetHandle* _nameImageMaskAssetHandle;
	FCAssetHandle* _logoImageAssetHandle;
	FCAssetHandle* _coverImageAssetHandle;
	FCAssetHandle* _feedNavImageAssetHandle;
	NSString* _coverArticleListID;
	FCTextInfo* _headlineTitleTextInfo;
	FCTextInfo* _headlineExcerptTextInfo;
	FCTextInfo* _headlineBylineTextInfo;
	NSString* _parentID;
	NSArray* _sectionIDs;
	NSString* _defaultSectionID;
	FCHeadlineTemplate* _defaultHeadlineTemplate;
	FCTagBanner* _bannerImageForWhiteBackground;
	FCTagBanner* _bannerImageForThemeBackground;
	FCTagBanner* _bannerImageForMask;
	FCTagBanner* _compactBannerImage;
	NSString* _publisherPaidAuthorizationURL;
	NSString* _publisherPaidVerificationURL;
	NSString* _publisherPaidWebAccessURL;
	NSArray* _publisherPaidFeldsparablePurchaseIDs;
	NSArray* _publisherPaidBundlePurchaseIDs;
	NSArray* _publisherPaidOfferableConfigurations;
	NTPBPublisherPaidDescriptionStrings* _publisherPaidDescriptionStrings;
	FCAssetHandle* _nameImageMaskWidgetLQAssetHandle;
	FCAssetHandle* _nameImageMaskWidgetHQAssetHandle;
	unsigned long long _groupingEligibility;
	NSArray* _publisherSpecifiedArticleIDs;
	NSDate* _publisherSpecifiedArticleIDsModifiedDate;
	FCPaywallConfiguration* _paidBundlePaywallConfiguration;
	NSString* _supergroupConfigJson;
	NSString* _supergroupKnobsJson;
	FCSectionSupergroupKnobs* _supergroupKnobs;
	NSString* _pptFeedIDOverride;
	FCInterestToken* _tagInterestToken;
	NTPBFeedConfiguration* _feedConfiguration;
	NSArray* _sectionFeedConfigurations;
	NSString* _backgroundColorHexString;
	NSString* _darkStyleBackgroundColorHexString;
	NSString* _foregroundColorHexString;
	NSString* _darkStyleForegroundColorHexString;
	NSString* _groupTitleColorHexString;
	NSString* _groupDarkStyleTitleColorHexString;
	NSDate* _loadDate;
	NTPBTagRecord* _tagRecord;
	FCInterestToken* _tagRecordInterestToken;
	CGSize _nameImageSize;
	CGSize _nameImageForDarkBackgroundSize;
	CGSize _nameImageMaskSize;
	FCEdgeInsets _nameImageInsets;
	FCEdgeInsets _nameImageForDarkBackgroundInsets;
	FCEdgeInsets _nameImageMaskInsets;

}

@property (nonatomic,retain) FCInterestToken * tagInterestToken;                                                   //@synthesize tagInterestToken=_tagInterestToken - In the implementation block
@property (nonatomic,copy) NTPBFeedConfiguration * feedConfiguration;                                              //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * sectionFeedConfigurations;                                                    //@synthesize sectionFeedConfigurations=_sectionFeedConfigurations - In the implementation block
@property (nonatomic,copy) NSString * backgroundColorHexString;                                                    //@synthesize backgroundColorHexString=_backgroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * darkStyleBackgroundColorHexString;                                           //@synthesize darkStyleBackgroundColorHexString=_darkStyleBackgroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * foregroundColorHexString;                                                    //@synthesize foregroundColorHexString=_foregroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * darkStyleForegroundColorHexString;                                           //@synthesize darkStyleForegroundColorHexString=_darkStyleForegroundColorHexString - In the implementation block
@property (nonatomic,copy) NSString * groupTitleColorHexString;                                                    //@synthesize groupTitleColorHexString=_groupTitleColorHexString - In the implementation block
@property (nonatomic,copy) NSString * groupDarkStyleTitleColorHexString;                                           //@synthesize groupDarkStyleTitleColorHexString=_groupDarkStyleTitleColorHexString - In the implementation block
@property (nonatomic,retain) NSDate * loadDate;                                                                    //@synthesize loadDate=_loadDate - In the implementation block
@property (nonatomic,readonly) NTPBTagRecord * tagRecord;                                                          //@synthesize tagRecord=_tagRecord - In the implementation block
@property (nonatomic,readonly) FCInterestToken * tagRecordInterestToken;                                           //@synthesize tagRecordInterestToken=_tagRecordInterestToken - In the implementation block
@property (nonatomic,retain) FCAssetHandle * nameImageAssetHandle;                                                 //@synthesize nameImageAssetHandle=_nameImageAssetHandle - In the implementation block
@property (assign,nonatomic) CGSize nameImageSize;                                                                 //@synthesize nameImageSize=_nameImageSize - In the implementation block
@property (assign,nonatomic) double bannerImageScale;                                                              //@synthesize bannerImageScale=_bannerImageScale - In the implementation block
@property (assign,nonatomic) double bannerImageBaselineOffsetPercentage;                                           //@synthesize bannerImageBaselineOffsetPercentage=_bannerImageBaselineOffsetPercentage - In the implementation block
@property (nonatomic,copy) NSString * pptFeedIDOverride;                                                           //@synthesize pptFeedIDOverride=_pptFeedIDOverride - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * stocksFeedConfigJSON; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tagType;                                                         //@synthesize tagType=_tagType - In the implementation block
@property (nonatomic,readonly) BOOL hideAccessoryText;                                                             //@synthesize hideAccessoryText=_hideAccessoryText - In the implementation block
@property (nonatomic,readonly) id<FCChannelProviding> asChannel; 
@property (nonatomic,readonly) id<FCSectionProviding> asSection; 
@property (nonatomic,readonly) id<FCTopicProviding> asTopic; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameCompact;                                                        //@synthesize nameCompact=_nameCompact - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionKey;                                                         //@synthesize versionKey=_versionKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                                                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) long long contentProvider;                                                          //@synthesize contentProvider=_contentProvider - In the implementation block
@property (nonatomic,readonly) BOOL isPublic;                                                                      //@synthesize isPublic=_isPublic - In the implementation block
@property (nonatomic,readonly) BOOL isDeprecated;                                                                  //@synthesize isDeprecated=_isDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL isExplicitContent;                                                             //@synthesize isExplicitContent=_isExplicitContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacementID;                                                      //@synthesize replacementID=_replacementID - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAudience;                                                    //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribable; 
@property (nonatomic,readonly) FCAssetHandle * coverImageAssetHandle;                                              //@synthesize coverImageAssetHandle=_coverImageAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * feedNavImageAssetHandle;                                            //@synthesize feedNavImageAssetHandle=_feedNavImageAssetHandle - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverArticleListID;                                                 //@synthesize coverArticleListID=_coverArticleListID - In the implementation block
@property (nonatomic,copy,readonly) id<FCFeedTheming> theme; 
@property (nonatomic,copy,readonly) FCColor * groupTitleColor; 
@property (nonatomic,copy,readonly) FCColor * groupDarkStyleTitleColor; 
@property (nonatomic,readonly) NSArray * iAdCategories;                                                            //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,readonly) NSArray * iAdKeywords;                                                              //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,readonly) NSArray * blockedStorefrontIDs;                                                     //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) NSArray * allowedStorefrontIDs;                                                     //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) long long score;                                                                    //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) long long minimumNewsVersion;                                                       //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,readonly) BOOL isNotificationEnabled;                                                         //@synthesize isNotificationEnabled=_isNotificationEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * magazineGenre;                                                      //@synthesize magazineGenre=_magazineGenre - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherPaidAuthorizationURL;                                      //@synthesize publisherPaidAuthorizationURL=_publisherPaidAuthorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherPaidVerificationURL;                                       //@synthesize publisherPaidVerificationURL=_publisherPaidVerificationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherPaidWebAccessURL;                                          //@synthesize publisherPaidWebAccessURL=_publisherPaidWebAccessURL - In the implementation block
@property (nonatomic,readonly) NSArray * publisherPaidFeldsparablePurchaseIDs;                                     //@synthesize publisherPaidFeldsparablePurchaseIDs=_publisherPaidFeldsparablePurchaseIDs - In the implementation block
@property (nonatomic,readonly) NSArray * publisherPaidBundlePurchaseIDs;                                           //@synthesize publisherPaidBundlePurchaseIDs=_publisherPaidBundlePurchaseIDs - In the implementation block
@property (nonatomic,readonly) NSArray * publisherPaidOfferableConfigurations;                                     //@synthesize publisherPaidOfferableConfigurations=_publisherPaidOfferableConfigurations - In the implementation block
@property (nonatomic,readonly) BOOL publisherPaidLeakyPaywallOptOut;                                               //@synthesize publisherPaidLeakyPaywallOptOut=_publisherPaidLeakyPaywallOptOut - In the implementation block
@property (nonatomic,readonly) BOOL publisherPaidWebAccessOptIn;                                                   //@synthesize publisherPaidWebAccessOptIn=_publisherPaidWebAccessOptIn - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetLQAssetHandle;                                   //@synthesize nameImageMaskWidgetLQAssetHandle=_nameImageMaskWidgetLQAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskWidgetHQAssetHandle;                                   //@synthesize nameImageMaskWidgetHQAssetHandle=_nameImageMaskWidgetHQAssetHandle - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle;                                        //@synthesize nameImageCompactAssetHandle=_nameImageCompactAssetHandle - In the implementation block
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) NTPBPublisherPaidDescriptionStrings * publisherPaidDescriptionStrings;              //@synthesize publisherPaidDescriptionStrings=_publisherPaidDescriptionStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long groupingEligibility;                                             //@synthesize groupingEligibility=_groupingEligibility - In the implementation block
@property (nonatomic,readonly) BOOL isHidden;                                                                      //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,readonly) BOOL isRealTimeTrackingEnabled;                                                     //@synthesize isRealTimeTrackingEnabled=_isRealTimeTrackingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isArticleReadCountReportingEnabled;                                            //@synthesize isArticleReadCountReportingEnabled=_isArticleReadCountReportingEnabled - In the implementation block
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs;                                             //@synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs - In the implementation block
@property (nonatomic,readonly) NSDate * publisherSpecifiedArticleIDsModifiedDate;                                  //@synthesize publisherSpecifiedArticleIDsModifiedDate=_publisherSpecifiedArticleIDsModifiedDate - In the implementation block
@property (nonatomic,readonly) id<FCTagStocksFields> stocksFields; 
@property (nonatomic,copy,readonly) FCPaywallConfiguration * paidBundlePaywallConfiguration;                       //@synthesize paidBundlePaywallConfiguration=_paidBundlePaywallConfiguration - In the implementation block
@property (nonatomic,readonly) NSData * backingTagRecordData; 
@property (nonatomic,copy,readonly) NSArray * sectionIDs;                                                          //@synthesize sectionIDs=_sectionIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultSectionID;                                                   //@synthesize defaultSectionID=_defaultSectionID - In the implementation block
@property (nonatomic,readonly) BOOL supportsNotifications; 
@property (nonatomic,readonly) BOOL isWhitelisted; 
@property (nonatomic,copy,readonly) NSArray * currentIssueIDs;                                                     //@synthesize currentIssueIDs=_currentIssueIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * backIssuesListID;                                                   //@synthesize backIssuesListID=_backIssuesListID - In the implementation block
@property (nonatomic,readonly) NSString * supergroupKnobsJson;                                                     //@synthesize supergroupKnobsJson=_supergroupKnobsJson - In the implementation block
@property (nonatomic,readonly) NSString * supergroupConfigJson;                                                    //@synthesize supergroupConfigJson=_supergroupConfigJson - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentID;                                                           //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) FCSectionSupergroupKnobs * supergroupKnobs;                                         //@synthesize supergroupKnobs=_supergroupKnobs - In the implementation block
@property (nonatomic,readonly) long long feedType; 
@property (nonatomic,readonly) BOOL isWhite; 
@property (nonatomic,readonly) BOOL isDark; 
@property (nonatomic,readonly) FCTagBanner * defaultBannerImage; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForWhiteBackground;                                        //@synthesize bannerImageForWhiteBackground=_bannerImageForWhiteBackground - In the implementation block
@property (nonatomic,readonly) FCTagBanner * bannerImageForThemeBackground;                                        //@synthesize bannerImageForThemeBackground=_bannerImageForThemeBackground - In the implementation block
@property (nonatomic,readonly) FCTagBanner * bannerImageForMask;                                                   //@synthesize bannerImageForMask=_bannerImageForMask - In the implementation block
@property (nonatomic,readonly) FCTagBanner * compactBannerImage;                                                   //@synthesize compactBannerImage=_compactBannerImage - In the implementation block
@property (nonatomic,copy,readonly) FCTextInfo * headlineTitleTextInfo;                                            //@synthesize headlineTitleTextInfo=_headlineTitleTextInfo - In the implementation block
@property (nonatomic,copy,readonly) FCTextInfo * headlineExcerptTextInfo;                                          //@synthesize headlineExcerptTextInfo=_headlineExcerptTextInfo - In the implementation block
@property (nonatomic,copy,readonly) FCTextInfo * headlineBylineTextInfo;                                           //@synthesize headlineBylineTextInfo=_headlineBylineTextInfo - In the implementation block
@property (nonatomic,readonly) FCColor * backgroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleBackgroundColor; 
@property (nonatomic,readonly) FCColor * foregroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleForegroundColor; 
@property (nonatomic,readonly) FCAssetHandle * logoImageAssetHandle;                                               //@synthesize logoImageAssetHandle=_logoImageAssetHandle - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets nameImageInsets;                                                       //@synthesize nameImageInsets=_nameImageInsets - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageForDarkBackgroundAssetHandle;                              //@synthesize nameImageForDarkBackgroundAssetHandle=_nameImageForDarkBackgroundAssetHandle - In the implementation block
@property (nonatomic,readonly) CGSize nameImageForDarkBackgroundSize;                                              //@synthesize nameImageForDarkBackgroundSize=_nameImageForDarkBackgroundSize - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets nameImageForDarkBackgroundInsets;                                      //@synthesize nameImageForDarkBackgroundInsets=_nameImageForDarkBackgroundInsets - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskAssetHandle;                                           //@synthesize nameImageMaskAssetHandle=_nameImageMaskAssetHandle - In the implementation block
@property (nonatomic,readonly) CGSize nameImageMaskSize;                                                           //@synthesize nameImageMaskSize=_nameImageMaskSize - In the implementation block
@property (nonatomic,readonly) FCEdgeInsets nameImageMaskInsets;                                                   //@synthesize nameImageMaskInsets=_nameImageMaskInsets - In the implementation block
@property (nonatomic,readonly) NSArray * loadableFonts; 
@property (nonatomic,readonly) FCHeadlineTemplate * defaultHeadlineTemplate;                                       //@synthesize defaultHeadlineTemplate=_defaultHeadlineTemplate - In the implementation block
@property (nonatomic,readonly) BOOL allowCustomBottomStyle; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(long long)score;
-(BOOL)isWhitelisted;
-(BOOL)isHidden;
-(NSString *)subtitle;
-(NSString *)language;
-(FCColor *)backgroundColor;
-(FCColor *)foregroundColor;
-(long long)contentProvider;
-(NSString *)parentID;
-(NSArray *)sectionIDs;
-(id<FCFeedTheming>)theme;
-(BOOL)isExplicitContent;
-(BOOL)isEqualToTag:(id)arg1 ;
-(unsigned long long)tagType;
-(BOOL)isNotificationEnabled;
-(id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 ;
-(NSDate *)loadDate;
-(NSString *)primaryAudience;
-(NSArray *)iAdCategories;
-(NSArray *)iAdKeywords;
-(NSArray *)blockedStorefrontIDs;
-(NSArray *)allowedStorefrontIDs;
-(BOOL)isDeprecated;
-(NSString *)replacementID;
-(id<FCSectionProviding>)asSection;
-(NSString *)publisherPaidVerificationURL;
-(FCColor *)groupTitleColor;
-(FCColor *)groupDarkStyleTitleColor;
-(id<FCChannelProviding>)asChannel;
-(NSString *)defaultSectionID;
-(id)freeFeedIDForSection:(id)arg1 bin:(long long)arg2 ;
-(id)paidFeedIDForSection:(id)arg1 bin:(long long)arg2 ;
-(id)freeFeedIDForBin:(long long)arg1 ;
-(id)feedIDForBin:(long long)arg1 ;
-(BOOL)isSubscribable;
-(BOOL)hideAccessoryText;
-(long long)feedType;
-(NSString *)articleRecirculationConfigJSON;
-(id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3 nameImageMaskAssetHandle:(id)arg4 ;
-(NSArray *)publisherSpecifiedArticleIDs;
-(long long)minimumNewsVersion;
-(NSArray *)currentIssueIDs;
-(FCAssetHandle *)feedNavImageAssetHandle;
-(FCAssetHandle *)coverImageAssetHandle;
-(void)setFeedConfiguration:(NTPBFeedConfiguration *)arg1 ;
-(FCColor *)darkStyleBackgroundColor;
-(BOOL)isBlockedExplicitContent;
-(id<FCTagStocksFields>)stocksFields;
-(BOOL)isPurchaseSetup;
-(id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(NSString *)nameCompact;
-(NTPBFeedConfiguration *)feedConfiguration;
-(id)purchaseOfferableConfigurationsFromProtobufList:(id)arg1 ;
-(void)setLoadDate:(NSDate *)arg1 ;
-(NSString *)magazineGenre;
-(BOOL)isPublic;
-(NSString *)coverArticleListID;
-(NSString *)supergroupConfigJson;
-(NSString *)supergroupKnobsJson;
-(void)_inflateFromJSONDictionary:(id)arg1 ;
-(NSString *)publisherPaidAuthorizationURL;
-(NSArray *)publisherPaidFeldsparablePurchaseIDs;
-(NSArray *)publisherPaidBundlePurchaseIDs;
-(BOOL)publisherPaidLeakyPaywallOptOut;
-(NTPBPublisherPaidDescriptionStrings *)publisherPaidDescriptionStrings;
-(FCTextInfo *)headlineTitleTextInfo;
-(FCTextInfo *)headlineExcerptTextInfo;
-(FCTextInfo *)headlineBylineTextInfo;
-(NTPBTagRecord *)tagRecord;
-(void)_inflateFromJSONDictionary:(id)arg1 withVersion:(long long)arg2 ;
-(void)_inflateFromVersionlessJSONDictionary:(id)arg1 ;
-(NSString *)versionKey;
-(NSString *)pptFeedIDOverride;
-(NSArray *)sectionFeedConfigurations;
-(id)_feedConfigurationForSection:(id)arg1 ;
-(id)paidFeedIDForBin:(long long)arg1 ;
-(NSArray *)publisherPaidOfferableConfigurations;
-(BOOL)_isValidScheme:(id)arg1 ;
-(FCAssetHandle *)nameImageMaskAssetHandle;
-(FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
-(FCTagBanner *)bannerImageForThemeBackground;
-(FCAssetHandle *)nameImageAssetHandle;
-(FCTagBanner *)bannerImageForWhiteBackground;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(FCTagBanner *)compactBannerImage;
-(BOOL)isWhite;
-(FCTagBanner *)bannerImageForMask;
-(NSString *)backgroundColorHexString;
-(NSString *)darkStyleBackgroundColorHexString;
-(NSString *)foregroundColorHexString;
-(NSString *)darkStyleForegroundColorHexString;
-(NSString *)groupTitleColorHexString;
-(NSString *)groupDarkStyleTitleColorHexString;
-(FCColor *)darkStyleForegroundColor;
-(void)setPptFeedIDOverride:(NSString *)arg1 ;
-(NSString *)stocksFeedConfigJSON;
-(BOOL)isNoLongerAvailable;
-(BOOL)isAuthenticationSetup;
-(id)prefetchPurchaseOffer;
-(id)authorizationURL;
-(void)ppt_overrideFeedID:(id)arg1 ;
-(id<FCTopicProviding>)asTopic;
-(NSString *)publisherPaidWebAccessURL;
-(BOOL)publisherPaidWebAccessOptIn;
-(FCAssetHandle *)nameImageMaskWidgetLQAssetHandle;
-(FCAssetHandle *)nameImageMaskWidgetHQAssetHandle;
-(unsigned long long)groupingEligibility;
-(BOOL)isRealTimeTrackingEnabled;
-(BOOL)isArticleReadCountReportingEnabled;
-(NSDate *)publisherSpecifiedArticleIDsModifiedDate;
-(FCPaywallConfiguration *)paidBundlePaywallConfiguration;
-(NSData *)backingTagRecordData;
-(BOOL)supportsNotifications;
-(NSString *)backIssuesListID;
-(FCSectionSupergroupKnobs *)supergroupKnobs;
-(BOOL)isDark;
-(FCTagBanner *)defaultBannerImage;
-(double)bannerImageScale;
-(double)bannerImageBaselineOffsetPercentage;
-(FCAssetHandle *)logoImageAssetHandle;
-(CGSize)nameImageSize;
-(FCEdgeInsets)nameImageInsets;
-(CGSize)nameImageForDarkBackgroundSize;
-(FCEdgeInsets)nameImageForDarkBackgroundInsets;
-(CGSize)nameImageMaskSize;
-(FCEdgeInsets)nameImageMaskInsets;
-(NSArray *)loadableFonts;
-(FCHeadlineTemplate *)defaultHeadlineTemplate;
-(BOOL)allowCustomBottomStyle;
-(id)initWithData:(id)arg1 context:(id)arg2 ;
-(id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5 ;
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3 ;
-(void)setNameImageAssetHandle:(FCAssetHandle *)arg1 ;
-(void)setNameImageSize:(CGSize)arg1 ;
-(void)setBannerImageScale:(double)arg1 ;
-(void)setBannerImageBaselineOffsetPercentage:(double)arg1 ;
-(FCInterestToken *)tagInterestToken;
-(void)setTagInterestToken:(FCInterestToken *)arg1 ;
-(void)setSectionFeedConfigurations:(NSArray *)arg1 ;
-(void)setBackgroundColorHexString:(NSString *)arg1 ;
-(void)setDarkStyleBackgroundColorHexString:(NSString *)arg1 ;
-(void)setForegroundColorHexString:(NSString *)arg1 ;
-(void)setDarkStyleForegroundColorHexString:(NSString *)arg1 ;
-(void)setGroupTitleColorHexString:(NSString *)arg1 ;
-(void)setGroupDarkStyleTitleColorHexString:(NSString *)arg1 ;
-(FCInterestToken *)tagRecordInterestToken;
@end

