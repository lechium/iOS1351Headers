/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNScheduler;
@class CNUIContactsEnvironment, _HKMedicalIDData, NSMutableDictionary, HKHealthStore;

@interface CNHealthStoreManager : NSObject {

	int _healthNotificationToken;
	BOOL _needsFetching;
	BOOL _isListeningToChanges;
	CNUIContactsEnvironment* _environment;
	_HKMedicalIDData* _medicalIDData;
	id<CNScheduler> _workQueue;
	NSMutableDictionary* _medicalIDDataHandlers;
	id<CNScheduler> _stateLock;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) CNUIContactsEnvironment * environment;                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                           //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL needsFetching;                                         //@synthesize needsFetching=_needsFetching - In the implementation block
@property (assign,nonatomic) BOOL isListeningToChanges;                                  //@synthesize isListeningToChanges=_isListeningToChanges - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * medicalIDDataHandlers;              //@synthesize medicalIDDataHandlers=_medicalIDDataHandlers - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                //@synthesize healthStore=_healthStore - In the implementation block
+(id)descriptorForRequiredKeys;
+(BOOL)shouldShowEmergencyContacts;
+(/*^block*/id)emergencyContactMatchingContact:(id)arg1 ;
+(id)identifiersForContactMatchingEmergencyContacts:(id)arg1 contactStore:(id)arg2 ;
-(void)dealloc;
-(CNUIContactsEnvironment *)environment;
-(void)setEnvironment:(CNUIContactsEnvironment *)arg1 ;
-(id<CNScheduler>)workQueue;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id<CNScheduler>)stateLock;
-(id)initWithEnvironment:(id)arg1 healthStore:(id)arg2 ;
-(id)nts_lazyHealthStore;
-(id)registerMedicalIDDataHandler:(/*^block*/id)arg1 ;
-(void)unregisterHandlerForToken:(id)arg1 ;
-(void)updateAndDispatchMedicalIDData;
-(void)startListeningForChanges;
-(id)createMedicalIDFromContact:(id)arg1 ;
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(BOOL)needsFetching;
-(void)setNeedsFetching:(BOOL)arg1 ;
-(BOOL)isListeningToChanges;
-(void)setIsListeningToChanges:(BOOL)arg1 ;
-(NSMutableDictionary *)medicalIDDataHandlers;
@end

