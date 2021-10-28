/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MCProfile, NSArray;

@interface MCUIProfile : NSObject {

	BOOL _showManagedPayloads;
	long long _finalInstallationWarningStyle;
	MCProfile* _profile;
	NSArray* _availableElevatedPayloadInfoTypes;
	NSArray* _accountSections;
	NSArray* _managedAppSections;
	NSArray* _managedBookSections;
	NSArray* _moreDetailsSections;
	NSArray* _restrictionSections;
	NSArray* _payloadInfoSectionSummaries;

}

@property (assign,nonatomic) BOOL showManagedPayloads;                                   //@synthesize showManagedPayloads=_showManagedPayloads - In the implementation block
@property (assign,nonatomic) long long finalInstallationWarningStyle;                    //@synthesize finalInstallationWarningStyle=_finalInstallationWarningStyle - In the implementation block
@property (nonatomic,readonly) MCProfile * profile;                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSArray * availableElevatedPayloadInfoTypes;              //@synthesize availableElevatedPayloadInfoTypes=_availableElevatedPayloadInfoTypes - In the implementation block
@property (nonatomic,readonly) NSArray * accountSections;                                //@synthesize accountSections=_accountSections - In the implementation block
@property (nonatomic,readonly) NSArray * managedAppSections;                             //@synthesize managedAppSections=_managedAppSections - In the implementation block
@property (nonatomic,readonly) NSArray * managedBookSections;                            //@synthesize managedBookSections=_managedBookSections - In the implementation block
@property (nonatomic,readonly) NSArray * moreDetailsSections;                            //@synthesize moreDetailsSections=_moreDetailsSections - In the implementation block
@property (nonatomic,readonly) NSArray * restrictionSections;                            //@synthesize restrictionSections=_restrictionSections - In the implementation block
@property (nonatomic,readonly) NSArray * payloadInfoSectionSummaries;                    //@synthesize payloadInfoSectionSummaries=_payloadInfoSectionSummaries - In the implementation block
-(void)dealloc;
-(MCProfile *)profile;
-(void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3 ;
-(id)_localizedPayloadSummaryByType:(id)arg1 ;
-(BOOL)isMDMProfile;
-(long long)finalInstallationWarningStyle;
-(id)initWithProfile:(id)arg1 managedPayloads:(BOOL)arg2 ;
-(void)_profileListChanged:(id)arg1 ;
-(BOOL)managesAppID:(id)arg1 ;
-(void)setProfile:(id)arg1 managedPayloads:(BOOL)arg2 ;
-(void)_managedAppsChanged:(id)arg1 ;
-(void)_managedBooksChanged:(id)arg1 ;
-(void)reloadProfile:(id)arg1 ;
-(BOOL)isInstalledMDMProfile;
-(void)setFinalInstallationWarningStyle:(long long)arg1 ;
-(BOOL)showManagedPayloads;
-(id)_sortedPayloads:(id)arg1 ;
-(void)_determineAvailableElevatedPayloadInfoTypes;
-(NSArray *)managedAppSections;
-(NSArray *)managedBookSections;
-(NSArray *)accountSections;
-(long long)_numberOfItemsInSectionsArray:(id)arg1 ;
-(NSArray *)restrictionSections;
-(void)setShowManagedPayloads:(BOOL)arg1 ;
-(BOOL)managesBook:(id)arg1 ;
-(long long)numberOfAccounts;
-(long long)numberOfManagedApps;
-(long long)numberOfManagedBooks;
-(long long)numberOfRestrictions;
-(NSArray *)availableElevatedPayloadInfoTypes;
-(NSArray *)moreDetailsSections;
-(NSArray *)payloadInfoSectionSummaries;
@end
