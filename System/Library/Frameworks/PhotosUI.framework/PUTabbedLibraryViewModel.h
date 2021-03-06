/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXUIKeyCommandNamespace.h>

@class NSString, NSArray, PUTabbedLibrarySettings, PXPreloadScheduler;

@interface PUTabbedLibraryViewModel : NSObject <PXUIKeyCommandNamespace> {

	NSArray* _tabInfos;
	PUTabbedLibrarySettings* _settings;
	PXPreloadScheduler* _preloadScheduler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * namespaceIdentifier; 
@property (nonatomic,retain) PUTabbedLibrarySettings * settings;                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) PXPreloadScheduler * preloadScheduler;              //@synthesize preloadScheduler=_preloadScheduler - In the implementation block
@property (nonatomic,retain) NSArray * tabInfos;                                 //@synthesize tabInfos=_tabInfos - In the implementation block
+(id)supportedNavigationDestinationTypes;
+(id)viewModelWithDefaultParameters;
-(PUTabbedLibrarySettings *)settings;
-(void)setSettings:(PUTabbedLibrarySettings *)arg1 ;
-(NSString *)namespaceIdentifier;
-(int)contentModeForNavigationDestinationType:(long long)arg1 ;
-(void)uiKeyCommandsWithDelegate:(id)arg1 addedIntoArray:(id)arg2 ;
-(void)performKeyCommand:(id)arg1 withRootParticipant:(id)arg2 ;
-(BOOL)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2 ;
-(NSArray *)tabInfos;
-(id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2 ;
-(id)tabInfoForContentMode:(int)arg1 ;
-(id)initWithSettings:(id)arg1 preloadScheduler:(id)arg2 ;
-(BOOL)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowPhotosTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1 ;
-(BOOL)_ppt_shouldShowBlankTab;
-(BOOL)_ppt_shouldShowNilTab;
-(void)setTabInfos:(NSArray *)arg1 ;
-(PXPreloadScheduler *)preloadScheduler;
-(void)setPreloadScheduler:(PXPreloadScheduler *)arg1 ;
@end

