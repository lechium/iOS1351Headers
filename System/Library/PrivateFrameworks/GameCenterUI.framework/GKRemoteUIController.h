/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <libobjc.A.dylib/GKRemoteUIAuxiliaryViewDelegate.h>

@class UINavigationController, NSString, NSError, NSMutableArray, NSArray, RUILoader, NSURL, NSDictionary, NSData, GKLocalPlayer;

@interface GKRemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate> {

	BOOL _loading;
	BOOL _shouldApplyGameCenterTheme;
	BOOL _previousUseCustomBackButtonActionValue;
	BOOL _loadingInitialUI;
	BOOL _complete;
	BOOL _isServerAuthenticated;
	int _layoutStyle;
	UINavigationController* _navigationControllerWeak;
	NSString* _appleID;
	/*^block*/id _completionHandler;
	NSError* _error;
	NSMutableArray* _objectModels;
	NSArray* _staticViewControllers;
	RUILoader* _loader;
	GKRemoteUIController* _presentedRemoteUIController;
	NSURL* _url;
	/*^block*/id _loadHandler;
	NSDictionary* _authInfo;
	NSString* _authToken;
	NSData* _pushToken;
	NSString* _altDSID;
	NSString* _playerID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _alias;
	GKLocalPlayer* _playerForRemoteUI;

}

@property (nonatomic,retain) NSMutableArray * objectModels;                                            //@synthesize objectModels=_objectModels - In the implementation block
@property (assign,nonatomic) UINavigationController * navigationController;                            //@synthesize navigationControllerWeak=_navigationControllerWeak - In the implementation block
@property (nonatomic,retain) NSArray * staticViewControllers;                                          //@synthesize staticViewControllers=_staticViewControllers - In the implementation block
@property (nonatomic,retain) RUILoader * loader;                                                       //@synthesize loader=_loader - In the implementation block
@property (nonatomic,retain) GKRemoteUIController * presentedRemoteUIController;                       //@synthesize presentedRemoteUIController=_presentedRemoteUIController - In the implementation block
@property (assign,nonatomic) BOOL previousUseCustomBackButtonActionValue;                              //@synthesize previousUseCustomBackButtonActionValue=_previousUseCustomBackButtonActionValue - In the implementation block
@property (nonatomic,retain) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                             //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL loadingInitialUI;                                                    //@synthesize loadingInitialUI=_loadingInitialUI - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                             //@synthesize loadHandler=_loadHandler - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,nonatomic) int layoutStyle;                                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL complete;                                                            //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) NSDictionary * authInfo;                                                  //@synthesize authInfo=_authInfo - In the implementation block
@property (nonatomic,readonly) NSString * bagKey; 
@property (nonatomic,readonly) NSURL * fallbackURL; 
@property (nonatomic,retain) NSString * authToken;                                                     //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSData * pushToken;                                                       //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSString * appleID;                                                       //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                                                       //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * playerID;                                                      //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                         //@synthesize alias=_alias - In the implementation block
@property (assign,nonatomic) BOOL isServerAuthenticated;                                               //@synthesize isServerAuthenticated=_isServerAuthenticated - In the implementation block
@property (nonatomic,retain) GKLocalPlayer * playerForRemoteUI;                                        //@synthesize playerForRemoteUI=_playerForRemoteUI - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyGameCenterTheme;                                          //@synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteUIController;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)url;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)complete;
-(NSData *)pushToken;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(UINavigationController *)navigationController;
-(void)setLayoutStyle:(int)arg1 ;
-(int)layoutStyle;
-(id)viewControllers;
-(void)setPushToken:(NSData *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(BOOL)loading;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)bagKey;
-(void)finishLoadingWithError:(id)arg1 ;
-(RUILoader *)loader;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)setLoader:(RUILoader *)arg1 ;
-(NSString *)playerID;
-(void)objectModelDidChange:(id)arg1 ;
-(id)viewControllerForAlertPresentation;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3 ;
-(Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2 ;
-(Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2 ;
-(id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3 ;
-(id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3 ;
-(BOOL)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 elementDidChange:(id)arg2 ;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3 ;
-(void)pushObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)popObjectModelAnimated:(BOOL)arg1 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(id)initWithObjectModel:(id)arg1 ;
-(NSURL *)fallbackURL;
-(void)setLoadHandler:(id)arg1 ;
-(id)loadHandler;
-(void)fireCompletionHandler;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)configureFromBagKey:(id)arg1 player:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)loadInitialRemoteUIForPlayer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setPlayerForRemoteUI:(GKLocalPlayer *)arg1 ;
-(void)updateAccountAndMarkComplete:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)postBodyForInitialLoad;
-(void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatePostbackDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 ;
-(void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(BOOL)shouldApplyGameCenterTheme;
-(void)setShouldApplyGameCenterTheme:(BOOL)arg1 ;
-(void)presentInParentNavigationController:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadInitialRemoteUIWithHandler:(/*^block*/id)arg1 ;
-(int)preferredLayoutStyle;
-(BOOL)previousUseCustomBackButtonActionValue;
-(void)setStaticViewControllers:(NSArray *)arg1 ;
-(NSMutableArray *)objectModels;
-(void)setLoadingInitialUI:(BOOL)arg1 ;
-(void)loadURL:(id)arg1 forPlayer:(id)arg2 postBody:(id)arg3 ;
-(id)postbackDataForDictionary:(id)arg1 ;
-(void)loadURL:(id)arg1 forPlayer:(id)arg2 postData:(id)arg3 ;
-(void)loadURL:(id)arg1 postData:(id)arg2 ;
-(void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)setIsServerAuthenticated:(BOOL)arg1 ;
-(void)setAuthInfo:(NSDictionary *)arg1 ;
-(NSArray *)staticViewControllers;
-(long long)indexOfVisiblePage;
-(GKRemoteUIController *)presentedRemoteUIController;
-(void)setPresentedRemoteUIController:(GKRemoteUIController *)arg1 ;
-(void)replaceObjectModelAtIndex:(unsigned long long)arg1 withObjectObjectModel:(id)arg2 ;
-(void)presentObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)loadingInitialUI;
-(void)performAction:(unsigned long long)arg1 withObjectModel:(id)arg2 ;
-(GKLocalPlayer *)playerForRemoteUI;
-(id)addThemeInfoToAttributes:(id)arg1 ;
-(void)setObjectModels:(NSMutableArray *)arg1 ;
-(void)setPreviousUseCustomBackButtonActionValue:(BOOL)arg1 ;
-(NSDictionary *)authInfo;
-(BOOL)isServerAuthenticated;
@end

