/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSData, HKHealthService, _HKFitnessMachine, HDHealthServiceOOBInfo, HDFitnessMachineStatus, HDFitnessMachineDataCharacteristicBase, HDEnhancedFTMSData, NSDate, NSArray, NSString, HDFitnessMachineSessionRecoveryConfiguration;

@interface HDFitnessMachineSession : NSObject {

	BOOL _waitingOnInitialMachineStatus;
	BOOL _waitingOnInitialMachineData;
	BOOL _dataTransferPermitted;
	BOOL _waitingOnMFA;
	BOOL _waitingOnBluetoothConnection;
	BOOL _waitingOnActivityType;
	NSUUID* _fitnessMachineSessionUUID;
	NSData* _nfcSessionIDData;
	unsigned long long _healthServiceSessionIdentifier;
	HKHealthService* _healthService;
	long long _serviceStatus;
	_HKFitnessMachine* _fitnessMachine;
	HDHealthServiceOOBInfo* _oobInfo;
	HDFitnessMachineStatus* _initialMachineStatus;
	HDFitnessMachineDataCharacteristicBase* _initialMachineData;
	HDEnhancedFTMSData* _initialEnhancedFTMSData;
	unsigned long long _connectionState;
	unsigned long long _machineState;
	NSDate* _machineStartDate;
	NSDate* _machineStateUpdateDate;
	NSDate* _machinePreferredUntilDate;
	NSArray* _oobDataArray;

}

@property (nonatomic,retain) NSArray * oobDataArray;                                                              //@synthesize oobDataArray=_oobDataArray - In the implementation block
@property (nonatomic,readonly) NSUUID * fitnessMachineSessionUUID;                                                //@synthesize fitnessMachineSessionUUID=_fitnessMachineSessionUUID - In the implementation block
@property (nonatomic,readonly) NSString * nfcSessionID; 
@property (nonatomic,readonly) NSData * nfcSessionIDData;                                                         //@synthesize nfcSessionIDData=_nfcSessionIDData - In the implementation block
@property (assign,nonatomic) unsigned long long healthServiceSessionIdentifier;                                   //@synthesize healthServiceSessionIdentifier=_healthServiceSessionIdentifier - In the implementation block
@property (nonatomic,retain) HKHealthService * healthService;                                                     //@synthesize healthService=_healthService - In the implementation block
@property (assign,nonatomic) long long serviceStatus;                                                             //@synthesize serviceStatus=_serviceStatus - In the implementation block
@property (nonatomic,retain) _HKFitnessMachine * fitnessMachine;                                                  //@synthesize fitnessMachine=_fitnessMachine - In the implementation block
@property (nonatomic,retain) HDHealthServiceOOBInfo * oobInfo;                                                    //@synthesize oobInfo=_oobInfo - In the implementation block
@property (nonatomic,readonly) NSArray * nfcConnectionHandoverData; 
@property (assign,nonatomic) BOOL waitingOnInitialMachineStatus;                                                  //@synthesize waitingOnInitialMachineStatus=_waitingOnInitialMachineStatus - In the implementation block
@property (nonatomic,retain) HDFitnessMachineStatus * initialMachineStatus;                                       //@synthesize initialMachineStatus=_initialMachineStatus - In the implementation block
@property (assign,nonatomic) BOOL waitingOnInitialMachineData;                                                    //@synthesize waitingOnInitialMachineData=_waitingOnInitialMachineData - In the implementation block
@property (nonatomic,retain) HDFitnessMachineDataCharacteristicBase * initialMachineData;                         //@synthesize initialMachineData=_initialMachineData - In the implementation block
@property (nonatomic,retain) HDEnhancedFTMSData * initialEnhancedFTMSData;                                        //@synthesize initialEnhancedFTMSData=_initialEnhancedFTMSData - In the implementation block
@property (assign,nonatomic) unsigned long long connectionState;                                                  //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) unsigned long long machineState;                                                     //@synthesize machineState=_machineState - In the implementation block
@property (nonatomic,retain) NSDate * machineStartDate;                                                           //@synthesize machineStartDate=_machineStartDate - In the implementation block
@property (nonatomic,retain) NSDate * machineStateUpdateDate;                                                     //@synthesize machineStateUpdateDate=_machineStateUpdateDate - In the implementation block
@property (nonatomic,retain) NSDate * machinePreferredUntilDate;                                                  //@synthesize machinePreferredUntilDate=_machinePreferredUntilDate - In the implementation block
@property (nonatomic,readonly) BOOL dataTransferPermitted;                                                        //@synthesize dataTransferPermitted=_dataTransferPermitted - In the implementation block
@property (nonatomic,readonly) BOOL waitingOnMFA;                                                                 //@synthesize waitingOnMFA=_waitingOnMFA - In the implementation block
@property (nonatomic,readonly) BOOL waitingOnBluetoothConnection;                                                 //@synthesize waitingOnBluetoothConnection=_waitingOnBluetoothConnection - In the implementation block
@property (nonatomic,readonly) BOOL waitingOnActivityType;                                                        //@synthesize waitingOnActivityType=_waitingOnActivityType - In the implementation block
@property (nonatomic,readonly) BOOL dataTransferRequirementsComplete; 
@property (nonatomic,readonly) HDFitnessMachineSessionRecoveryConfiguration * recoveryConfiguration; 
+(id)serviceFromRecoveryConfiguration:(id)arg1 ;
-(id)init;
-(unsigned long long)connectionState;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(NSUUID *)fitnessMachineSessionUUID;
-(_HKFitnessMachine *)fitnessMachine;
-(unsigned long long)machineState;
-(long long)serviceStatus;
-(NSDate *)machinePreferredUntilDate;
-(HDFitnessMachineSessionRecoveryConfiguration *)recoveryConfiguration;
-(HKHealthService *)healthService;
-(void)markMFAAuthenticated;
-(HDHealthServiceOOBInfo *)oobInfo;
-(void)setHealthServiceSessionIdentifier:(unsigned long long)arg1 ;
-(void)setServiceStatus:(long long)arg1 ;
-(BOOL)dataTransferRequirementsComplete;
-(void)setInitialEnhancedFTMSData:(HDEnhancedFTMSData *)arg1 ;
-(void)setMachineStartDate:(NSDate *)arg1 ;
-(void)setMachinePreferredUntilDate:(NSDate *)arg1 ;
-(void)setWaitingOnInitialMachineStatus:(BOOL)arg1 ;
-(void)setWaitingOnInitialMachineData:(BOOL)arg1 ;
-(void)setInitialMachineData:(HDFitnessMachineDataCharacteristicBase *)arg1 ;
-(void)setInitialMachineStatus:(HDFitnessMachineStatus *)arg1 ;
-(HDFitnessMachineStatus *)initialMachineStatus;
-(HDFitnessMachineDataCharacteristicBase *)initialMachineData;
-(HDEnhancedFTMSData *)initialEnhancedFTMSData;
-(BOOL)waitingOnInitialMachineStatus;
-(BOOL)waitingOnInitialMachineData;
-(unsigned long long)healthServiceSessionIdentifier;
-(BOOL)waitingOnMFA;
-(void)markBluetoothConnectionComplete;
-(BOOL)dataTransferPermitted;
-(BOOL)waitingOnBluetoothConnection;
-(BOOL)waitingOnActivityType;
-(NSDate *)machineStartDate;
-(void)setMachineState:(unsigned long long)arg1 ;
-(void)setMachineStateUpdateDate:(NSDate *)arg1 ;
-(id)initWithRecoveryConfiguration:(id)arg1 ;
-(NSDate *)machineStateUpdateDate;
-(void)markActivityTypeProvided;
-(void)markDataTransferPermitted;
-(id)_initWithFitnessMachineSessionUUID:(id)arg1 ;
-(id)initWithNFCSessionIDData:(id)arg1 ;
-(void)setFitnessMachineName:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 ;
-(void)setFitnessMachine:(_HKFitnessMachine *)arg1 ;
-(id)_oobDataArrayWithRandomValue:(id)arg1 confirmationValue:(id)arg2 sessionID:(id)arg3 btAddress:(id)arg4 ;
-(NSString *)nfcSessionID;
-(NSArray *)nfcConnectionHandoverData;
-(NSData *)nfcSessionIDData;
-(void)setHealthService:(HKHealthService *)arg1 ;
-(void)setOobInfo:(HDHealthServiceOOBInfo *)arg1 ;
-(NSArray *)oobDataArray;
-(void)setOobDataArray:(NSArray *)arg1 ;
@end

