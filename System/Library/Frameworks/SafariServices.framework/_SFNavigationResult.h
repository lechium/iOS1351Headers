/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class LSApplicationProxy, NSURL, WBSAppLink;

@interface _SFNavigationResult : NSObject {

	BOOL _loadWasUserDriven;
	LSApplicationProxy* _externalApplication;
	long long _externalApplicationCategory;
	long long _type;
	NSURL* _URL;
	WBSAppLink* _appLink;

}

@property (nonatomic,readonly) BOOL appliesOneTimeUserInitiatedActionPolicy; 
@property (nonatomic,readonly) LSApplicationProxy * externalApplication;                  //@synthesize externalApplication=_externalApplication - In the implementation block
@property (nonatomic,readonly) long long externalApplicationCategory;                     //@synthesize externalApplicationCategory=_externalApplicationCategory - In the implementation block
@property (nonatomic,readonly) BOOL isRedirectToAppleServices; 
@property (nonatomic,readonly) long long type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) WBSAppLink * appLink;                                      //@synthesize appLink=_appLink - In the implementation block
@property (assign,nonatomic) BOOL loadWasUserDriven;                                      //@synthesize loadWasUserDriven=_loadWasUserDriven - In the implementation block
+(id)resultOfLoadingRequest:(id)arg1 isMainFrame:(BOOL)arg2 disallowRedirectToExternalApps:(BOOL)arg3 preferredApplicationBundleIdentifier:(id)arg4 redirectDecisionHandler:(/*^block*/id)arg5 ;
+(id)resultOfType:(long long)arg1 withURL:(id)arg2 ;
+(id)resultWithRedirectToExternalURL:(id)arg1 preferredApplicationBundleIdentifier:(id)arg2 ;
+(id)resultWithAppLink:(id)arg1 ;
-(long long)type;
-(NSURL *)URL;
-(WBSAppLink *)appLink;
-(LSApplicationProxy *)externalApplication;
-(BOOL)appliesOneTimeUserInitiatedActionPolicy;
-(long long)externalApplicationCategory;
-(BOOL)shouldPromptWithPolicy:(long long)arg1 telephonyNavigationPolicy:(id)arg2 userAction:(id)arg3 inBackground:(BOOL)arg4 ;
-(BOOL)isRedirectToAppleServices;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 externalApplication:(id)arg3 appLink:(id)arg4 ;
-(BOOL)loadWasUserDriven;
-(void)setLoadWasUserDriven:(BOOL)arg1 ;
@end

