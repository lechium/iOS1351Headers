/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ENLoadingViewControllerDelegate.h>
#import <libobjc.A.dylib/ENOAuthViewControllerDelegate.h>
#import <libobjc.A.dylib/ENAuthenticator.h>

@protocol ENAuthenticatorDelegate;
@class NSString, UIViewController, UINavigationController, ENOAuthViewController, NSArray, ENCredentialStore, NSMutableData, NSURLResponse;

@interface ENOAuthAuthenticator : NSObject <ENLoadingViewControllerDelegate, ENOAuthViewControllerDelegate, ENAuthenticator> {

	BOOL _supportsLinkedAppNotebook;
	BOOL _useWebAuthenticationOnly;
	BOOL _preferRegistration;
	BOOL _inProgress;
	BOOL _isCancelled;
	BOOL _isMultitaskLoginDisabled;
	BOOL _isSwitchingInProgress;
	BOOL _isActiveBecauseOfCallback;
	BOOL _userSelectedLinkedAppNotebook;
	id<ENAuthenticatorDelegate> _delegate;
	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _host;
	UIViewController* _hostViewController;
	UINavigationController* _authenticationViewController;
	ENOAuthViewController* _oauthViewController;
	long long _state;
	NSArray* _profiles;
	NSString* _currentProfile;
	ENCredentialStore* _credentialStore;
	NSString* _tokenSecret;
	NSMutableData* _receivedData;
	NSURLResponse* _response;

}

@property (assign,nonatomic) BOOL inProgress;                                                    //@synthesize inProgress=_inProgress - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                                   //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) UIViewController * hostViewController;                              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * authenticationViewController;              //@synthesize authenticationViewController=_authenticationViewController - In the implementation block
@property (nonatomic,retain) ENOAuthViewController * oauthViewController;                        //@synthesize oauthViewController=_oauthViewController - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * profiles;                                                 //@synthesize profiles=_profiles - In the implementation block
@property (nonatomic,copy) NSString * currentProfile;                                            //@synthesize currentProfile=_currentProfile - In the implementation block
@property (nonatomic,retain) ENCredentialStore * credentialStore;                                //@synthesize credentialStore=_credentialStore - In the implementation block
@property (nonatomic,copy) NSString * tokenSecret;                                               //@synthesize tokenSecret=_tokenSecret - In the implementation block
@property (assign,nonatomic) BOOL isMultitaskLoginDisabled;                                      //@synthesize isMultitaskLoginDisabled=_isMultitaskLoginDisabled - In the implementation block
@property (assign,nonatomic) BOOL isSwitchingInProgress;                                         //@synthesize isSwitchingInProgress=_isSwitchingInProgress - In the implementation block
@property (assign,nonatomic) BOOL isActiveBecauseOfCallback;                                     //@synthesize isActiveBecauseOfCallback=_isActiveBecauseOfCallback - In the implementation block
@property (assign,nonatomic) BOOL userSelectedLinkedAppNotebook;                                 //@synthesize userSelectedLinkedAppNotebook=_userSelectedLinkedAppNotebook - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                                       //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                                           //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) id<ENAuthenticatorDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * consumerKey;                                               //@synthesize consumerKey=_consumerKey - In the implementation block
@property (nonatomic,copy) NSString * consumerSecret;                                            //@synthesize consumerSecret=_consumerSecret - In the implementation block
@property (nonatomic,copy) NSString * host;                                                      //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) BOOL supportsLinkedAppNotebook;                                     //@synthesize supportsLinkedAppNotebook=_supportsLinkedAppNotebook - In the implementation block
@property (assign,nonatomic) BOOL useWebAuthenticationOnly;                                      //@synthesize useWebAuthenticationOnly=_useWebAuthenticationOnly - In the implementation block
@property (assign,nonatomic) BOOL preferRegistration;                                            //@synthesize preferRegistration=_preferRegistration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceIdentifier;
+(id)deviceDescription;
+(id)queryStringFromParameters:(id)arg1 ;
+(id)parametersFromQueryString:(id)arg1 ;
+(id)scrubString:(id)arg1 usingRegex:(id)arg2 withMaxLength:(unsigned short)arg3 ;
-(id)init;
-(void)dealloc;
-(id<ENAuthenticatorDelegate>)delegate;
-(void)setDelegate:(id<ENAuthenticatorDelegate>)arg1 ;
-(NSString *)host;
-(BOOL)isCancelled;
-(long long)state;
-(void)setHost:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(UIViewController *)hostViewController;
-(NSArray *)profiles;
-(void)setIsCancelled:(BOOL)arg1 ;
-(NSString *)consumerSecret;
-(NSString *)consumerKey;
-(void)setConsumerKey:(NSString *)arg1 ;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(void)setProfiles:(NSArray *)arg1 ;
-(NSString *)tokenSecret;
-(void)setTokenSecret:(NSString *)arg1 ;
-(void)loadingViewControllerDidCancel:(id)arg1 ;
-(id)callbackScheme;
-(ENCredentialStore *)credentialStore;
-(void)setCredentialStore:(ENCredentialStore *)arg1 ;
-(void)handleDidBecomeActive;
-(BOOL)handleOpenURL:(id)arg1 ;
-(void)completeAuthenticationWithError:(id)arg1 ;
-(BOOL)supportsLinkedAppNotebook;
-(void)setSupportsLinkedAppNotebook:(BOOL)arg1 ;
-(void)oauthViewControllerDidCancel:(id)arg1 ;
-(void)oauthViewControllerDidSwitchProfile:(id)arg1 ;
-(void)oauthViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)oauthViewController:(id)arg1 receivedOAuthCallbackURL:(id)arg2 ;
-(void)emptyCookieJar;
-(void)authenticateWithViewController:(id)arg1 ;
-(void)startOauthAuthentication;
-(id)oauthCallback;
-(id)userAuthorizationURLStringWithParameters:(id)arg1 ;
-(void)openOAuthViewControllerWithURL:(id)arg1 ;
-(void)completeAuthenticationWithCredentials:(id)arg1 usesLinkedAppNotebook:(BOOL)arg2 ;
-(void)switchProfile;
-(void)updateCurrentBootstrapProfileWithName:(id)arg1 ;
-(void)verifyCFBundleURLSchemes;
-(void)enableIsActiveBecauseOfCallback;
-(void)disableIsActiveBecauseOfCallback;
-(BOOL)canHandleSwitchProfileURL:(id)arg1 ;
-(void)gotCallbackURL:(id)arg1 ;
-(void)getOAuthTokenForURL:(id)arg1 ;
-(BOOL)useWebAuthenticationOnly;
-(void)setUseWebAuthenticationOnly:(BOOL)arg1 ;
-(BOOL)preferRegistration;
-(void)setPreferRegistration:(BOOL)arg1 ;
-(UINavigationController *)authenticationViewController;
-(void)setAuthenticationViewController:(UINavigationController *)arg1 ;
-(ENOAuthViewController *)oauthViewController;
-(void)setOauthViewController:(ENOAuthViewController *)arg1 ;
-(NSString *)currentProfile;
-(void)setCurrentProfile:(NSString *)arg1 ;
-(BOOL)isMultitaskLoginDisabled;
-(void)setIsMultitaskLoginDisabled:(BOOL)arg1 ;
-(BOOL)isSwitchingInProgress;
-(void)setIsSwitchingInProgress:(BOOL)arg1 ;
-(BOOL)isActiveBecauseOfCallback;
-(void)setIsActiveBecauseOfCallback:(BOOL)arg1 ;
-(BOOL)userSelectedLinkedAppNotebook;
-(void)setUserSelectedLinkedAppNotebook:(BOOL)arg1 ;
@end
